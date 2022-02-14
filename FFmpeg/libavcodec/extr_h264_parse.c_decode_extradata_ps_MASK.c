
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int type; int size_bits; int gb; int raw_size; int raw_data; } ;
struct TYPE_5__ {int nb_nals; TYPE_2__* nals; int member_0; } ;
typedef int H264ParamSets ;
typedef TYPE_1__ H2645Packet ;
typedef TYPE_2__ H2645NAL ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (void*,int ,char*,...) ;
 int FUNC_1 (TYPE_1__*,int const*,int,void*,int,int,int ,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,void*,int *,int ) ;
 int FUNC_4 (int *,void*,int *,int) ;
 int FUNC_5 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_6(const uint8_t *VAR_3, int VAR_4, H264ParamSets *VAR_5,
                               int VAR_6, void *VAR_7)
{
    H2645Packet VAR_8 = { 0 };
    int VAR_9, VAR_10 = 0;

    VAR_10 = FUNC_1(&VAR_8, VAR_3, VAR_4, VAR_7, VAR_6, 2, VAR_0, 1, 0);
    if (VAR_10 < 0) {
        VAR_10 = 0;
        goto fail;
    }

    for (VAR_9 = 0; VAR_9 < VAR_8.nb_nals; VAR_9++) {
        H2645NAL *VAR_11 = &VAR_8.nals[VAR_9];
        switch (VAR_11->type) {
        case 128: {
            GetBitContext VAR_12 = VAR_11->gb;
            VAR_10 = FUNC_4(&VAR_12, VAR_7, VAR_5, 0);
            if (VAR_10 >= 0)
                break;
            FUNC_0(VAR_7, VAR_1,
                   "SPS decoding failure, trying again with the complete NAL\n");
            FUNC_5(&VAR_12, VAR_11->raw_data + 1, VAR_11->raw_size - 1);
            VAR_10 = FUNC_4(&VAR_12, VAR_7, VAR_5, 0);
            if (VAR_10 >= 0)
                break;
            VAR_10 = FUNC_4(&VAR_11->gb, VAR_7, VAR_5, 1);
            if (VAR_10 < 0)
                goto fail;
            break;
        }
        case 129:
            VAR_10 = FUNC_3(&VAR_11->gb, VAR_7, VAR_5,
                                                       VAR_11->size_bits);
            if (VAR_10 < 0)
                goto fail;
            break;
        default:
            FUNC_0(VAR_7, VAR_2, "Ignoring NAL type %d in extradata\n",
                   VAR_11->type);
            break;
        }
    }

fail:
    FUNC_2(&VAR_8);
    return VAR_10;
}
