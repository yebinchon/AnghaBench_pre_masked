
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int type; int gb; } ;
struct TYPE_5__ {int nb_nals; TYPE_2__* nals; int member_0; } ;
typedef int HEVCSEI ;
typedef int HEVCParamSets ;
typedef TYPE_1__ H2645Packet ;
typedef TYPE_2__ H2645NAL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;





 int FUNC_0 (void*,int ,char*,int) ;
 int FUNC_1 (TYPE_1__*,int const*,int,void*,int,int,int ,int,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,void*,int *) ;
 int FUNC_4 (int *,void*,int *,int *,int) ;
 int FUNC_5 (int *,void*,int *,int) ;
 int FUNC_6 (int *,void*,int *) ;

__attribute__((used)) static int FUNC_7(const uint8_t *VAR_3, int VAR_4, HEVCParamSets *VAR_5,
                                 HEVCSEI *VAR_6, int VAR_7, int VAR_8,
                                 int VAR_9, int VAR_10, void *VAR_11)
{
    int VAR_12;
    int VAR_13 = 0;
    H2645Packet VAR_14 = { 0 };

    VAR_13 = FUNC_1(&VAR_14, VAR_3, VAR_4, VAR_11, VAR_7,
                                VAR_8, VAR_0, 1, 0);
    if (VAR_13 < 0) {
        goto done;
    }

    for (VAR_12 = 0; VAR_12 < VAR_14.nb_nals; VAR_12++) {
        H2645NAL *VAR_15 = &VAR_14.nals[VAR_12];


        switch (VAR_15->type) {
        case 128:
            VAR_13 = FUNC_6(&VAR_15->gb, VAR_11, VAR_5);
            if (VAR_13 < 0)
                goto done;
            break;
        case 129:
            VAR_13 = FUNC_5(&VAR_15->gb, VAR_11, VAR_5, VAR_10);
            if (VAR_13 < 0)
                goto done;
            break;
        case 132:
            VAR_13 = FUNC_3(&VAR_15->gb, VAR_11, VAR_5);
            if (VAR_13 < 0)
                goto done;
            break;
        case 131:
        case 130:
            VAR_13 = FUNC_4(&VAR_15->gb, VAR_11, VAR_6, VAR_5, VAR_15->type);
            if (VAR_13 < 0)
                goto done;
            break;
        default:
            FUNC_0(VAR_11, VAR_2, "Ignoring NAL type %d in extradata\n", VAR_15->type);
            break;
        }
    }

done:
    FUNC_2(&VAR_14);
    if (VAR_9 & VAR_1)
        return VAR_13;

    return 0;
}
