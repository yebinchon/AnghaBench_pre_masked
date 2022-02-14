
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t data_stack_top; int ** line; int ** data_stack; } ;
typedef TYPE_1__ slice_buffer ;
typedef int IDWTELEM ;


 int FUNC_0 (int) ;

IDWTELEM *FUNC_1(slice_buffer *VAR_0, int VAR_1)
{
    IDWTELEM *VAR_2;

    FUNC_0(VAR_0->data_stack_top >= 0);

    if (VAR_0->line[VAR_1])
        return VAR_0->line[VAR_1];

    VAR_2 = VAR_0->data_stack[VAR_0->data_stack_top];
    VAR_0->data_stack_top--;
    VAR_0->line[VAR_1] = VAR_2;

    return VAR_2;
}
