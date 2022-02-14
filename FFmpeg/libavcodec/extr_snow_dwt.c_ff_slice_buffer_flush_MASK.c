
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int line_count; scalar_t__* line; } ;
typedef TYPE_1__ slice_buffer ;


 int FUNC_0 (TYPE_1__*,int) ;

void FUNC_1(slice_buffer *VAR_0)
{
    int VAR_1;

    if (!VAR_0->line)
        return;

    for (VAR_1 = 0; VAR_1 < VAR_0->line_count; VAR_1++)
        if (VAR_0->line[VAR_1])
            FUNC_0(VAR_0, VAR_1);
}
