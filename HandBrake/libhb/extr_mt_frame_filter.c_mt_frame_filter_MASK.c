
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ frame_count; scalar_t__ thread_count; TYPE_1__** thread_data; int taskset; } ;
typedef TYPE_2__ hb_filter_private_t ;
typedef int hb_buffer_t ;
typedef int hb_buffer_list_t ;
struct TYPE_4__ {int out; } ;


 int FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static hb_buffer_t * FUNC_3(hb_filter_private_t *VAR_0)
{
    if (VAR_0->frame_count < VAR_0->thread_count)
    {
        return ((void*)0);
    }

    FUNC_2(&VAR_0->taskset);
    VAR_0->frame_count = 0;


    hb_buffer_list_t VAR_1;
    FUNC_1(&VAR_1);
    for (int VAR_2 = 0; VAR_2 < VAR_0->thread_count; VAR_2++)
    {
        FUNC_0(&VAR_1, VAR_0->thread_data[VAR_2]->out);
    }
    return FUNC_1(&VAR_1);
}
