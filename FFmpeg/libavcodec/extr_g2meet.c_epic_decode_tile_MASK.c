
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_10__ {scalar_t__ err; } ;
struct TYPE_11__ {int hash; scalar_t__ stack_pos; TYPE_1__ els_ctx; scalar_t__ next_run_pos; } ;
typedef TYPE_2__ ePICContext ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (TYPE_2__*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int,int,scalar_t__*,scalar_t__*) ;
 int FUNC_4 (TYPE_2__*,int,int,int,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*,int*) ;
 int FUNC_5 (TYPE_2__*,int,int,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_6 (TYPE_2__*,int,int,int,int,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_7 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static int FUNC_8(ePICContext *VAR_1, uint8_t *VAR_2, int VAR_3,
                            int VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;
    uint32_t VAR_8;
    uint32_t *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), *VAR_11;

    for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++, VAR_2 += VAR_5) {
        VAR_11 = VAR_10;
        VAR_10 = VAR_9;
        VAR_9 = (uint32_t *) VAR_2;

        for (VAR_6 = 0, VAR_1->next_run_pos = 0; VAR_6 < VAR_4;) {
            if (VAR_1->els_ctx.err)
                return VAR_0;

            VAR_8 = VAR_9[VAR_6 - 1];

            if (VAR_7 >= 1 && VAR_6 >= 2 &&
                VAR_8 != VAR_9[VAR_6 - 2] && VAR_8 != VAR_10[VAR_6 - 1] &&
                VAR_8 != VAR_10[VAR_6 - 2] && VAR_8 != VAR_10[VAR_6] &&
                !FUNC_1(&VAR_1->hash, VAR_8)) {
                VAR_9[VAR_6] = FUNC_3(VAR_1, VAR_6, VAR_7, VAR_9, VAR_10);
                VAR_6++;
            } else {
                int VAR_12, VAR_13;
                VAR_1->stack_pos = 0;

                if (VAR_7 < 2 || VAR_6 < 2 || VAR_6 == VAR_4 - 1) {
                    VAR_13 = 1;
                    VAR_12 = FUNC_5(VAR_1, VAR_6, VAR_7, VAR_9, VAR_10, &VAR_8);
                } else {
                    VAR_12 = FUNC_4(VAR_1, VAR_6, VAR_7, VAR_4,
                                                       VAR_9, VAR_10,
                                                       VAR_11, &VAR_8, &VAR_13);
                    if (VAR_12 < 0)
                        return VAR_12;
                }

                if (!VAR_12 && !FUNC_6(VAR_1, VAR_6, VAR_7, VAR_13,
                                                           VAR_4, VAR_9,
                                                           VAR_10, &VAR_8)) {
                    uint32_t VAR_14 = VAR_9[VAR_6 - 1];
                    if (!VAR_6 || !FUNC_2(VAR_1, VAR_14, &VAR_8)) {
                        VAR_8 = FUNC_3(VAR_1, VAR_6, VAR_7, VAR_9, VAR_10);
                        if (FUNC_7(VAR_1, VAR_8))
                            return VAR_0;

                        if (VAR_6) {
                            int VAR_15 = FUNC_0(&VAR_1->hash,
                                                              VAR_14,
                                                              VAR_8);
                            if (VAR_15)
                                return VAR_15;
                        }
                    }
                }
                for (; VAR_13 > 0; VAR_6++, VAR_13--)
                    VAR_9[VAR_6] = VAR_8;
            }
        }
    }

    return 0;
}
