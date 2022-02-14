
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ stack_ptr; char* stack; } ;
typedef TYPE_1__ SRTContext ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(SRTContext *VAR_1, const char VAR_2)
{
    if (VAR_1->stack_ptr >= VAR_0)
        return -1;
    VAR_1->stack[VAR_1->stack_ptr++] = VAR_2;
    return 0;
}
