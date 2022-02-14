
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ next_frame; scalar_t__ max_frames; scalar_t__ threads; TYPE_2__** thread_data; TYPE_4__* frame; int taskset; } ;
typedef TYPE_3__ hb_filter_private_t ;
typedef int hb_buffer_t ;
typedef int hb_buffer_list_t ;
struct TYPE_9__ {TYPE_1__* plane; } ;
struct TYPE_7__ {int out; } ;
struct TYPE_6__ {int * mem; int * mem_pre; int mutex; } ;
typedef TYPE_4__ Frame ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static hb_buffer_t * FUNC_4(hb_filter_private_t *VAR_0)
{
    if (VAR_0->next_frame < VAR_0->max_frames + VAR_0->threads)
    {
        return ((void*)0);
    }

    FUNC_3(&VAR_0->taskset);


    for (int VAR_1 = 0; VAR_1 < 3; VAR_1++)
    {
        for (int VAR_2 = 0; VAR_2 < VAR_0->threads; VAR_2++)
        {

            if (VAR_0->frame[VAR_2].plane[VAR_1].mem_pre != ((void*)0) &&
                VAR_0->frame[VAR_2].plane[VAR_1].mem_pre != VAR_0->frame[VAR_2].plane[VAR_1].mem)
            {
                FUNC_0(VAR_0->frame[VAR_2].plane[VAR_1].mem_pre);
                VAR_0->frame[VAR_2].plane[VAR_1].mem_pre = ((void*)0);
            }
            if (VAR_0->frame[VAR_2].plane[VAR_1].mem != ((void*)0))
            {
                FUNC_0(VAR_0->frame[VAR_2].plane[VAR_1].mem);
                VAR_0->frame[VAR_2].plane[VAR_1].mem = ((void*)0);
            }
        }
    }

    for (int VAR_3 = 0; VAR_3 < VAR_0->max_frames; VAR_3++)
    {

        Frame VAR_4 = VAR_0->frame[VAR_3];
        VAR_0->frame[VAR_3] = VAR_0->frame[VAR_3+VAR_0->threads];
        for (int VAR_5 = 0; VAR_5 < 3; VAR_5++)
        {
            VAR_0->frame[VAR_3].plane[VAR_5].mutex = VAR_4.plane[VAR_5].mutex;
            VAR_0->frame[VAR_3+VAR_0->threads].plane[VAR_5].mem_pre = ((void*)0);
            VAR_0->frame[VAR_3+VAR_0->threads].plane[VAR_5].mem = ((void*)0);
        }
    }
    VAR_0->next_frame -= VAR_0->threads;


    hb_buffer_list_t VAR_6;
    FUNC_2(&VAR_6);
    for (int VAR_7 = 0; VAR_7 < VAR_0->threads; VAR_7++)
    {
        FUNC_1(&VAR_6, VAR_0->thread_data[VAR_7]->out);
    }
    return FUNC_2(&VAR_6);
}
