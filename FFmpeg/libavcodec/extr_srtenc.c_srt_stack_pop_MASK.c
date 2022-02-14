
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t stack_ptr; char* stack; } ;
typedef TYPE_1__ SRTContext ;



__attribute__((used)) static char FUNC_0(SRTContext *VAR_0)
{
    if (VAR_0->stack_ptr <= 0)
        return 0;
    return VAR_0->stack[--VAR_0->stack_ptr];
}
