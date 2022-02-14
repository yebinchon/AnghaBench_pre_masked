
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_8__ {int* permutated; } ;
struct TYPE_10__ {int qscale; int* intra_matrix; int* chroma_intra_matrix; int* last_dc; int intra_dc_precision; int* block_last_index; int gb; scalar_t__ intra_vlc_format; int avctx; TYPE_1__ intra_scantable; } ;
struct TYPE_9__ {int * rl_vlc; } ;
typedef TYPE_2__ RLTable ;
typedef TYPE_3__ MpegEncContext ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,int,int ,int *,int ,int ,int,int ) ;
 int FUNC_2 (int ,int *,int) ;
 int VAR_1 ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int ,int *,int) ;
 int VAR_2 ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (TYPE_3__*,int) ;
 int FUNC_9 (int *,int) ;
 TYPE_2__ VAR_3 ;
 TYPE_2__ VAR_4 ;
 int FUNC_10 (int ,char*,int) ;
 int VAR_5 ;

__attribute__((used)) static inline int FUNC_11(MpegEncContext *VAR_6,
                                           int16_t *VAR_7, int VAR_8)
{
    int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    int VAR_15;
    RLTable *VAR_16;
    uint8_t *const VAR_17 = VAR_6->intra_scantable.permutated;
    const uint16_t *VAR_18;
    const int VAR_19 = VAR_6->qscale;
    int VAR_20;


    if (VAR_8 < 4) {
        VAR_18 = VAR_6->intra_matrix;
        VAR_15 = 0;
    } else {
        VAR_18 = VAR_6->chroma_intra_matrix;
        VAR_15 = (VAR_8 & 1) + 1;
    }
    VAR_11 = FUNC_9(&VAR_6->gb, VAR_15);
    if (VAR_11 >= 0xffff)
        return VAR_0;
    VAR_10 = VAR_6->last_dc[VAR_15];
    VAR_10 += VAR_11;
    VAR_6->last_dc[VAR_15] = VAR_10;
    VAR_7[0] = VAR_10 * (1 << (3 - VAR_6->intra_dc_precision));
    FUNC_10(VAR_6->avctx, "dc=%d\n", VAR_7[0]);
    VAR_20 = VAR_7[0] ^ 1;
    VAR_12 = 0;
    if (VAR_6->intra_vlc_format)
        VAR_16 = &VAR_4;
    else
        VAR_16 = &VAR_3;

    {
        FUNC_3(VAR_5, &VAR_6->gb);

        for (;;) {
            FUNC_7(VAR_5, &VAR_6->gb);
            FUNC_1(VAR_9, VAR_14, VAR_5, &VAR_6->gb, VAR_16->rl_vlc[0],
                       VAR_2, 2, 0);

            if (VAR_9 == 127) {
                break;
            } else if (VAR_9 != 0) {
                VAR_12 += VAR_14;
                if (VAR_12 > VAR_1)
                    break;
                VAR_13 = VAR_17[VAR_12];
                VAR_9 = (VAR_9 * VAR_19 * VAR_18[VAR_13]) >> 4;
                VAR_9 = (VAR_9 ^ FUNC_4(VAR_5, &VAR_6->gb, 1)) -
                        FUNC_4(VAR_5, &VAR_6->gb, 1);
                FUNC_2(VAR_5, &VAR_6->gb, 1);
            } else {

                VAR_14 = FUNC_5(VAR_5, &VAR_6->gb, 6) + 1;
                FUNC_2(VAR_5, &VAR_6->gb, 6);
                FUNC_7(VAR_5, &VAR_6->gb);
                VAR_9 = FUNC_4(VAR_5, &VAR_6->gb, 12);
                FUNC_6(VAR_5, &VAR_6->gb, 12);
                VAR_12 += VAR_14;
                if (VAR_12 > VAR_1)
                    break;
                VAR_13 = VAR_17[VAR_12];
                if (VAR_9 < 0) {
                    VAR_9 = (-VAR_9 * VAR_19 * VAR_18[VAR_13]) >> 4;
                    VAR_9 = -VAR_9;
                } else {
                    VAR_9 = (VAR_9 * VAR_19 * VAR_18[VAR_13]) >> 4;
                }
            }

            VAR_20 ^= VAR_9;
            VAR_7[VAR_13] = VAR_9;
        }
        FUNC_0(VAR_5, &VAR_6->gb);
    }
    VAR_7[63] ^= VAR_20 & 1;

    FUNC_8(VAR_6, VAR_12);

    VAR_6->block_last_index[VAR_8] = VAR_12;
    return 0;
}
