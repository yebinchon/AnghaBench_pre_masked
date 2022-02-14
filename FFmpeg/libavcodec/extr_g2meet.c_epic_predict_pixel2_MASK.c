
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_3__ {int stack_pos; int * stack; int els_ctx; } ;
typedef TYPE_1__ ePICContext ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;

__attribute__((used)) static int FUNC_1(ePICContext *VAR_1, uint8_t *VAR_2,
                               uint32_t *VAR_3, uint32_t VAR_4)
{
    if (FUNC_0(&VAR_1->els_ctx, VAR_2)) {
        *VAR_3 = VAR_4;
        return 1;
    }
    VAR_1->stack[VAR_1->stack_pos++ & VAR_0] = VAR_4;
    return 0;
}
