
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int nb_nals; TYPE_2__* nals; } ;
struct TYPE_10__ {int picture_structure; scalar_t__ key_frame; int pict_type; TYPE_1__* priv_data; } ;
struct TYPE_9__ {int type; int gb; } ;
struct TYPE_8__ {TYPE_7__ pkt; int nal_length_size; int is_avc; int sei; int ps; } ;
typedef int HEVCSEI ;
typedef TYPE_1__ HEVCParserContext ;
typedef int HEVCParamSets ;
typedef TYPE_2__ H2645NAL ;
typedef int GetBitContext ;
typedef TYPE_3__ AVCodecParserContext ;
typedef int AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*,int) ;
 int FUNC_1 (TYPE_7__*,int const*,int,int *,int ,int ,int ,int,int ) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int *,int *,int *,int *,int) ;
 int FUNC_4 (int *,int *,int *,int) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_8(AVCodecParserContext *VAR_4, const uint8_t *VAR_5,
                           int VAR_6, AVCodecContext *VAR_7)
{
    HEVCParserContext *VAR_8 = VAR_4->priv_data;
    HEVCParamSets *VAR_9 = &VAR_8->ps;
    HEVCSEI *VAR_10 = &VAR_8->sei;
    int VAR_11, VAR_12;


    VAR_4->pict_type = VAR_3;
    VAR_4->key_frame = 0;
    VAR_4->picture_structure = VAR_2;

    FUNC_6(VAR_10);

    VAR_11 = FUNC_1(&VAR_8->pkt, VAR_5, VAR_6, VAR_7, VAR_8->is_avc,
                                VAR_8->nal_length_size, VAR_0, 1, 0);
    if (VAR_11 < 0)
        return VAR_11;

    for (VAR_12 = 0; VAR_12 < VAR_8->pkt.nb_nals; VAR_12++) {
        H2645NAL *VAR_13 = &VAR_8->pkt.nals[VAR_12];
        GetBitContext *VAR_14 = &VAR_13->gb;

        switch (VAR_13->type) {
        case 128:
            FUNC_5(VAR_14, VAR_7, VAR_9);
            break;
        case 135:
            FUNC_4(VAR_14, VAR_7, VAR_9, 1);
            break;
        case 142:
            FUNC_2(VAR_14, VAR_7, VAR_9);
            break;
        case 137:
        case 136:
            FUNC_3(VAR_14, VAR_7, VAR_10, VAR_9, VAR_13->type);
            break;
        case 132:
        case 131:
        case 130:
        case 129:
        case 134:
        case 133:
        case 147:
        case 146:
        case 148:
        case 143:
        case 144:
        case 145:
        case 141:
        case 140:
        case 139:
        case 138:
            VAR_11 = FUNC_7(VAR_4, VAR_13, VAR_7);
            if (VAR_11)
                return VAR_11;
            break;
        }
    }

    FUNC_0(VAR_7, VAR_1, "missing picture in access unit with size %d\n", VAR_6);
    return -1;
}
