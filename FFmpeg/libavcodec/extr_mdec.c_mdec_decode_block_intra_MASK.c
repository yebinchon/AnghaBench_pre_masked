
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int int16_t ;
struct TYPE_6__ {int* permutated; } ;
struct TYPE_8__ {int* quant_matrix; int qscale; int version; int* last_dc; int* block_last_index; int gb; int mb_y; int mb_x; int avctx; TYPE_1__ scantable; } ;
struct TYPE_7__ {int * rl_vlc; } ;
typedef TYPE_2__ RLTable ;
typedef TYPE_3__ MDECContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int,int,int ,int *,int ,int ,int,int ) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (int ,int *,int) ;
 int VAR_2 ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int ,char*,int ,int ) ;
 int FUNC_9 (int *,int) ;
 TYPE_2__ VAR_3 ;
 int FUNC_10 (int *,int) ;
 int VAR_4 ;

__attribute__((used)) static inline int FUNC_11(MDECContext *VAR_5, int16_t *VAR_6, int VAR_7)
{
    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
    int VAR_13;
    RLTable *VAR_14 = &VAR_3;
    uint8_t * const VAR_15 = VAR_5->scantable.permutated;
    const uint16_t *VAR_16 = VAR_5->quant_matrix;
    const int VAR_17 = VAR_5->qscale;


    if (VAR_5->version == 2) {
        VAR_6[0] = 2 * FUNC_10(&VAR_5->gb, 10) + 1024;
    } else {
        VAR_13 = (VAR_7 <= 3 ? 0 : VAR_7 - 4 + 1);
        VAR_9 = FUNC_9(&VAR_5->gb, VAR_13);
        if (VAR_9 >= 0xffff)
            return VAR_0;
        VAR_5->last_dc[VAR_13] += VAR_9;
        VAR_6[0] = VAR_5->last_dc[VAR_13] * (1 << 3);
    }

    VAR_10 = 0;
    {
        FUNC_3(VAR_4, &VAR_5->gb);

        for (;;) {
            FUNC_7(VAR_4, &VAR_5->gb);
            FUNC_1(VAR_8, VAR_12, VAR_4, &VAR_5->gb, VAR_14->rl_vlc[0], VAR_2, 2, 0);

            if (VAR_8 == 127) {
                break;
            } else if (VAR_8 != 0) {
                VAR_10 += VAR_12;
                if (VAR_10 > 63) {
                    FUNC_8(VAR_5->avctx, VAR_1,
                           "ac-tex damaged at %d %d\n", VAR_5->mb_x, VAR_5->mb_y);
                    return VAR_0;
                }
                VAR_11 = VAR_15[VAR_10];
                VAR_8 = (VAR_8 * VAR_17 * VAR_16[VAR_11]) >> 3;
                VAR_8 = (VAR_8 ^ FUNC_4(VAR_4, &VAR_5->gb, 1)) - FUNC_4(VAR_4, &VAR_5->gb, 1);
                FUNC_2(VAR_4, &VAR_5->gb, 1);
            } else {

                VAR_12 = FUNC_5(VAR_4, &VAR_5->gb, 6)+1; FUNC_2(VAR_4, &VAR_5->gb, 6);
                FUNC_7(VAR_4, &VAR_5->gb);
                VAR_8 = FUNC_4(VAR_4, &VAR_5->gb, 10); FUNC_6(VAR_4, &VAR_5->gb, 10);
                VAR_10 += VAR_12;
                if (VAR_10 > 63) {
                    FUNC_8(VAR_5->avctx, VAR_1,
                           "ac-tex damaged at %d %d\n", VAR_5->mb_x, VAR_5->mb_y);
                    return VAR_0;
                }
                VAR_11 = VAR_15[VAR_10];
                if (VAR_8 < 0) {
                    VAR_8 = -VAR_8;
                    VAR_8 = (VAR_8 * (unsigned)VAR_17 * VAR_16[VAR_11]) >> 3;
                    VAR_8 = (VAR_8 - 1) | 1;
                    VAR_8 = -VAR_8;
                } else {
                    VAR_8 = (VAR_8 * (unsigned)VAR_17 * VAR_16[VAR_11]) >> 3;
                    VAR_8 = (VAR_8 - 1) | 1;
                }
            }

            VAR_6[VAR_11] = VAR_8;
        }
        FUNC_0(VAR_4, &VAR_5->gb);
    }
    VAR_5->block_last_index[VAR_7] = VAR_10;
    return 0;
}
