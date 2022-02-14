
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int32_t ;
typedef int int16_t ;
typedef scalar_t__ buf ;
struct TYPE_15__ {int error; } ;
struct TYPE_14__ {int num_refs; int avctx; scalar_t__ old_delta_quant; scalar_t__ codeblock_mode; } ;
struct TYPE_13__ {int quant; int stride; scalar_t__ pshift; int * ibuf; } ;
typedef TYPE_1__ SubBand ;
typedef int GetBitContext ;
typedef TYPE_2__ DiracContext ;
typedef TYPE_3__ DiracArith ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,char*,...) ;
 int FUNC_3 (TYPE_3__*,int,int,TYPE_1__*,int *,int,int) ;
 int FUNC_4 (TYPE_3__*,int,int,TYPE_1__*,int *,int,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int ,int ) ;
 int FUNC_8 (int *) ;
 int* VAR_7 ;
 int* VAR_8 ;
 int* VAR_9 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static inline int FUNC_11(DiracContext *VAR_10, SubBand *VAR_11,
                             GetBitContext *VAR_12, DiracArith *VAR_13,
                             int VAR_14, int VAR_15, int VAR_16, int VAR_17,
                             int VAR_18, int VAR_19)
{
    int VAR_20, VAR_21, VAR_22;
    int VAR_23, VAR_24;
    uint8_t *VAR_25;


    if (!VAR_18) {
        if (VAR_19)
            VAR_22 = FUNC_6(VAR_13, VAR_4);
        else
            VAR_22 = FUNC_9(VAR_12);

        if (VAR_22)
            return 0;
    }

    if (VAR_10->codeblock_mode && !(VAR_10->old_delta_quant && VAR_18)) {
        int VAR_26;
        if (VAR_19)
            VAR_26 = FUNC_7(VAR_13, VAR_3, VAR_2);
        else
            VAR_26 = FUNC_8(VAR_12);
        if (VAR_26 > VAR_6 - VAR_11->quant || VAR_11->quant + VAR_26 < 0) {
            FUNC_2(VAR_10->avctx, VAR_1, "Invalid quant\n");
            return VAR_0;
        }
        VAR_11->quant += VAR_26;
    }

    if (VAR_11->quant > (VAR_5 - 1)) {
        FUNC_2(VAR_10->avctx, VAR_1, "Unsupported quant %d\n", VAR_11->quant);
        VAR_11->quant = 0;
        return VAR_0;
    }

    VAR_24 = VAR_9[VAR_11->quant];

    if (!VAR_10->num_refs)
        VAR_23 = VAR_8[VAR_11->quant] + 2;
    else
        VAR_23 = VAR_7[VAR_11->quant] + 2;

    VAR_25 = VAR_11->ibuf + VAR_16 * VAR_11->stride;
    if (VAR_19) {
        for (VAR_21 = VAR_16; VAR_21 < VAR_17; VAR_21++) {
            if (VAR_13->error)
                return VAR_13->error;
            for (VAR_20 = VAR_14; VAR_20 < VAR_15; VAR_20++) {
                if (VAR_11->pshift) {
                    FUNC_3(VAR_13, VAR_24, VAR_23, VAR_11, (int32_t*)(VAR_25)+VAR_20, VAR_20, VAR_21);
                } else {
                    FUNC_4(VAR_13, VAR_24, VAR_23, VAR_11, (int16_t*)(VAR_25)+VAR_20, VAR_20, VAR_21);
                }
            }
            VAR_25 += VAR_11->stride;
        }
    } else {
        for (VAR_21 = VAR_16; VAR_21 < VAR_17; VAR_21++) {
            if (FUNC_10(VAR_12) < 1)
                return VAR_0;
            for (VAR_20 = VAR_14; VAR_20 < VAR_15; VAR_20++) {
                int VAR_27 = FUNC_5(VAR_12, VAR_24, VAR_23);
                if (VAR_11->pshift) {
                    FUNC_1(&VAR_25[4*VAR_20], VAR_27);
                } else {
                    FUNC_0(&VAR_25[2*VAR_20], VAR_27);
                }
            }
            VAR_25 += VAR_11->stride;
         }
     }
     return 0;
}
