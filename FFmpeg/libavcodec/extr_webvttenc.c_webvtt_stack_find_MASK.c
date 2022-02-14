
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stack_ptr; char const* stack; } ;
typedef TYPE_1__ WebVTTContext ;



__attribute__((used)) static int FUNC_0(WebVTTContext *VAR_0, const char VAR_1)
{
    int VAR_2;
    for (VAR_2 = VAR_0->stack_ptr-1; VAR_2 >= 0; VAR_2--)
        if (VAR_0->stack[VAR_2] == VAR_1)
            break;
    return VAR_2;
}
