
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int uint8_t ;
struct dec_2dvlc {int golomb_order; unsigned int max_run; int* level_add; int inc_limit; int** rltab; } ;
typedef int ptrdiff_t ;
typedef int int16_t ;
struct TYPE_7__ {int (* clear_block ) (int*) ;} ;
struct TYPE_6__ {int (* cavs_idct8_add ) (unsigned int*,int*,int ) ;} ;
struct TYPE_8__ {int* block; TYPE_2__ bdsp; TYPE_1__ cdsp; int avctx; } ;
typedef int GetBitContext ;
typedef TYPE_3__ AVSContext ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ,char*,...) ;
 int FUNC_1 (TYPE_3__*,int*,unsigned int*,int*,int ,int ,int) ;
 int * VAR_3 ;
 int * VAR_4 ;
 void* FUNC_2 (int *,int) ;
 int FUNC_3 (unsigned int*,int*,int ) ;
 int FUNC_4 (int*) ;

__attribute__((used)) static int FUNC_5(AVSContext *VAR_5, GetBitContext *VAR_6,
                                 const struct dec_2dvlc *VAR_7, int VAR_8,
                                 int VAR_9, uint8_t *VAR_10, ptrdiff_t VAR_11)
{
    int VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
    unsigned int VAR_17, VAR_18;
    int16_t VAR_19[65];
    uint8_t VAR_20[65];
    int16_t *VAR_21 = VAR_5->block;

    for (VAR_12 = 0; VAR_12 < 65; VAR_12++) {
        VAR_17 = FUNC_2(VAR_6, VAR_7->golomb_order);
        if (VAR_17 >= VAR_2) {
            VAR_18 = ((VAR_17 - VAR_2) >> 1) + 1;
            if(VAR_18 > 64) {
                FUNC_0(VAR_5->avctx, VAR_1, "run %d is too large\n", VAR_18);
                return VAR_0;
            }
            VAR_13 = FUNC_2(VAR_6, VAR_8);
            if (VAR_13 < 0 || VAR_13 > 32767) {
                FUNC_0(VAR_5->avctx, VAR_1, "esc_code invalid\n");
                return VAR_0;
            }

            VAR_14 = VAR_13 + (VAR_18 > VAR_7->max_run ? 1 : VAR_7->level_add[VAR_18]);
            while (VAR_14 > VAR_7->inc_limit)
                VAR_7++;
            VAR_15 = -(VAR_17 & 1);
            VAR_14 = (VAR_14 ^ VAR_15) - VAR_15;
        } else {
            VAR_14 = VAR_7->rltab[VAR_17][0];
            if (!VAR_14)
                break;
            VAR_18 = VAR_7->rltab[VAR_17][1];
            VAR_7 += VAR_7->rltab[VAR_17][2];
        }
        VAR_19[VAR_12] = VAR_14;
        VAR_20[VAR_12] = VAR_18;
    }
    if ((VAR_16 = FUNC_1(VAR_5, VAR_19, VAR_20, VAR_21, VAR_3[VAR_9],
                      VAR_4[VAR_9], VAR_12)) < 0)
        return VAR_16;
    VAR_5->cdsp.cavs_idct8_add(VAR_10, VAR_21, VAR_11);
    VAR_5->bdsp.clear_block(VAR_21);
    return 0;
}
