
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int* nframes; int threads; int max_frames; struct TYPE_7__* thread_data; struct TYPE_7__* frame; TYPE_1__* plane; int taskset; } ;
typedef TYPE_2__ hb_filter_private_t ;
struct TYPE_8__ {TYPE_2__* private_data; } ;
typedef TYPE_3__ hb_filter_object_t ;
struct TYPE_6__ {int mutex; TYPE_2__* mem; TYPE_2__* mem_pre; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(hb_filter_object_t *VAR_0)
{
    hb_filter_private_t *VAR_1 = VAR_0->private_data;

    if (VAR_1 == ((void*)0))
    {
        return;
    }

    FUNC_2(&VAR_1->taskset);
    for (int VAR_2 = 0; VAR_2 < 3; VAR_2++)
    {
        for (int VAR_3 = 0; VAR_3 < VAR_1->nframes[VAR_2]; VAR_3++)
        {
            if (VAR_1->frame[VAR_3].plane[VAR_2].mem_pre != ((void*)0) &&
                VAR_1->frame[VAR_3].plane[VAR_2].mem_pre != VAR_1->frame[VAR_3].plane[VAR_2].mem)
            {
                FUNC_0(VAR_1->frame[VAR_3].plane[VAR_2].mem_pre);
                VAR_1->frame[VAR_3].plane[VAR_2].mem_pre = ((void*)0);
            }
            if (VAR_1->frame[VAR_3].plane[VAR_2].mem != ((void*)0))
            {
                FUNC_0(VAR_1->frame[VAR_3].plane[VAR_2].mem);
                VAR_1->frame[VAR_3].plane[VAR_2].mem = ((void*)0);
            }
        }
    }

    for (int VAR_4 = 0; VAR_4 < VAR_1->threads + VAR_1->max_frames; VAR_4++)
    {
        for (int VAR_5 = 0; VAR_5 < 3; VAR_5++)
        {
            FUNC_1(&VAR_1->frame[VAR_4].plane[VAR_5].mutex);
        }
    }

    FUNC_0(VAR_1->frame);
    FUNC_0(VAR_1->thread_data);
    FUNC_0(VAR_1);
    VAR_0->private_data = ((void*)0);
}
