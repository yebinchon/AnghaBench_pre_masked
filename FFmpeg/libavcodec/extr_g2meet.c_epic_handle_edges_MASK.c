
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__* stack; int N_flag_rung; int stack_pos; int W_flag_rung; int unsigned_rung; int els_ctx; } ;
typedef TYPE_1__ ePICContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *,scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(ePICContext *VAR_3, int VAR_4, int VAR_5,
                             const uint32_t *VAR_6,
                             const uint32_t *VAR_7, uint32_t *VAR_8)
{
    uint32_t VAR_9;

    if (!VAR_4 && !VAR_5) {

        *VAR_8 = (FUNC_1(&VAR_3->els_ctx, &VAR_3->unsigned_rung) << VAR_2) |
                (FUNC_1(&VAR_3->els_ctx, &VAR_3->unsigned_rung) << VAR_1) |
                (FUNC_1(&VAR_3->els_ctx, &VAR_3->unsigned_rung) << VAR_0);
        return 1;
    }

    if (VAR_4) {
        VAR_9 = VAR_6[VAR_4 - 1];
        if (FUNC_0(VAR_3, &VAR_3->W_flag_rung, VAR_8, VAR_9))
            return 1;
    }

    if (VAR_5) {
        VAR_9 = VAR_7[VAR_4];
        if (!VAR_3->stack_pos || VAR_3->stack[0] != VAR_9) {
            if (FUNC_0(VAR_3, &VAR_3->N_flag_rung, VAR_8, VAR_9))
                return 1;
        }
    }

    return 0;
}
