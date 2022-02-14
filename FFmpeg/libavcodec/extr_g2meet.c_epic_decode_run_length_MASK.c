
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {int next_run_pos; int * W_ctx_rung; int els_ctx; int * runlen_zeroes; int runlen_one; int * prev_row_rung; int stack_pos; scalar_t__* stack; int * N_ctx_rung; } ;
typedef TYPE_1__ ePICContext ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(ePICContext *VAR_1, int VAR_2, int VAR_3, int VAR_4,
                                  const uint32_t *VAR_5,
                                  const uint32_t *VAR_6,
                                  const uint32_t *VAR_7,
                                  uint32_t *VAR_8, int *VAR_9)
{
    int VAR_10, VAR_11 = 0, VAR_12, VAR_13 = 0;
    uint32_t VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;

    *VAR_9 = 0;

    FUNC_0(VAR_2);

    if (VAR_1->next_run_pos == VAR_2) {

        VAR_12 = 1;
    } else {
        VAR_10 = (VAR_15 != VAR_14) << 7 |
              (VAR_18 != VAR_14) << 6 |
              (VAR_16 != VAR_19) << 5 |
              (VAR_18 != VAR_16) << 4 |
              (VAR_20 != VAR_18) << 3 |
              (VAR_22 != VAR_19) << 2 |
              (VAR_17 != VAR_16) << 1 |
              (VAR_21 != VAR_18);
        VAR_12 = FUNC_3(&VAR_1->els_ctx, &VAR_1->W_ctx_rung[VAR_10]);
        if (VAR_12 < 0)
            return VAR_12;
    }

    if (VAR_12)
        VAR_1->stack[VAR_1->stack_pos++ & VAR_0] = VAR_14;
    else {
        *VAR_8 = VAR_14;
        VAR_11 = 1;
    }

    do {
        int VAR_23 = 1;
        if (VAR_11)
            VAR_23 = *VAR_8 != VAR_16;
        else {
            VAR_23 = *VAR_9 ? VAR_23 : VAR_18 != VAR_14;


            switch (((VAR_18 != VAR_16) << 2) | (VAR_23 << 1) | VAR_12) {
            case 0:
                break;
            case 3:
            case 5:
            case 6:
            case 7:
                if (!FUNC_4(VAR_1, VAR_16)) {
                    VAR_10 = VAR_12 << 8 |
                          (*VAR_9 ? VAR_13 : VAR_15 != VAR_14) << 7 |
                          VAR_23 << 6 |
                          (VAR_16 != VAR_19) << 5 |
                          (VAR_18 != VAR_16) << 4 |
                          (VAR_20 != VAR_18) << 3 |
                          (VAR_22 != VAR_19) << 2 |
                          (VAR_17 != VAR_16) << 1 |
                          (VAR_21 != VAR_18);
                    if (!FUNC_3(&VAR_1->els_ctx, &VAR_1->N_ctx_rung[VAR_10])) {
                        VAR_23 = 0;
                        *VAR_8 = VAR_16;
                        VAR_11 = 1;
                        break;
                    }
                }

            default:
                VAR_23 = 1;
                VAR_13 = VAR_12;
                if (!FUNC_4(VAR_1, VAR_16))
                    VAR_1->stack[VAR_1->stack_pos++ & VAR_0] = VAR_16;
            }
        }

        (*VAR_9)++;
        if (VAR_2 + *VAR_9 >= VAR_4 - 1)
            break;

        FUNC_1(VAR_2 + *VAR_9);

        if (!VAR_23 && VAR_18 == VAR_16 && VAR_16 == VAR_19) {
            int VAR_24, VAR_25, VAR_26;
            int VAR_27 = VAR_2 + *VAR_9;


            uint32_t VAR_28 = VAR_6[VAR_27 + 1];
            for (VAR_24 = VAR_27 + 2; VAR_24 < VAR_4; VAR_24++)
                if (!(VAR_6[VAR_24] == VAR_28))
                    break;
            VAR_25 = VAR_24 - VAR_27 - 1;
            VAR_10 = FUNC_2(VAR_25);
            if (FUNC_3(&VAR_1->els_ctx, &VAR_1->prev_row_rung[VAR_10]))
                *VAR_9 += VAR_25;
            else {
                int VAR_29;

                for (VAR_24 = VAR_10 - 1, VAR_26 = 0, VAR_29 = 0; VAR_24 >= 0; VAR_24--) {
                    if ((1 << VAR_24) + VAR_26 < VAR_25 &&
                        FUNC_3(&VAR_1->els_ctx,
                                          VAR_29 ? &VAR_1->runlen_one
                                               : &VAR_1->runlen_zeroes[VAR_24])) {
                        VAR_29 = 1;
                        VAR_26 |= 1 << VAR_24;
                    }
                }
                *VAR_9 += VAR_26;
                break;
            }
            if (VAR_2 + *VAR_9 >= VAR_4 - 1)
                break;

            FUNC_0(VAR_2 + *VAR_9);
            VAR_12 = 0;
            VAR_23 = 0;
        }

        VAR_10 = VAR_12 << 7 |
              VAR_23 << 6 |
              (VAR_16 != VAR_19) << 5 |
              (VAR_18 != VAR_16) << 4 |
              (VAR_20 != VAR_18) << 3 |
              (VAR_22 != VAR_19) << 2 |
              (VAR_17 != VAR_16) << 1 |
              (VAR_21 != VAR_18);
        VAR_12 = FUNC_3(&VAR_1->els_ctx, &VAR_1->W_ctx_rung[VAR_10]);
    } while (!VAR_12);

    VAR_1->next_run_pos = VAR_2 + *VAR_9;
    return VAR_11;
}
