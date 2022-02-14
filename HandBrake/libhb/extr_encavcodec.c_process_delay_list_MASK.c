
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef void* int64_t ;
struct TYPE_14__ {scalar_t__ frameno_in; scalar_t__ frameno_out; int delay_list; TYPE_1__* job; void* dts_delay; } ;
typedef TYPE_3__ hb_work_private_t ;
struct TYPE_13__ {void* start; void* renderOffset; } ;
struct TYPE_15__ {TYPE_2__ s; struct TYPE_15__* next; } ;
typedef TYPE_4__ hb_buffer_t ;
struct TYPE_12__ {scalar_t__ areBframes; } ;


 void* FUNC_0 (TYPE_3__*,scalar_t__) ;
 int FUNC_1 (int *,TYPE_4__*) ;
 TYPE_4__* FUNC_2 (int *) ;
 TYPE_4__* FUNC_3 (int *) ;

__attribute__((used)) static hb_buffer_t * FUNC_4( hb_work_private_t * VAR_0, hb_buffer_t * VAR_1 )
{
    if (VAR_0->job->areBframes)
    {

        FUNC_1(&VAR_0->delay_list, VAR_1);
        if (VAR_0->frameno_in <= VAR_0->job->areBframes)
        {

            return ((void*)0);
        }



        VAR_1 = FUNC_3(&VAR_0->delay_list);
        while (VAR_1 != ((void*)0))
        {



            if (VAR_0->frameno_out < VAR_0->job->areBframes)
            {
                int64_t VAR_2 = FUNC_0( VAR_0, VAR_0->frameno_out );
                VAR_1->s.renderOffset = VAR_2 - VAR_0->dts_delay;
            }
            else
            {
                VAR_1->s.renderOffset = FUNC_0(VAR_0,
                                        VAR_0->frameno_out - VAR_0->job->areBframes);
            }
            VAR_1 = VAR_1->next;
            VAR_0->frameno_out++;
        }
        VAR_1 = FUNC_2(&VAR_0->delay_list);
        return VAR_1;
    }
    else if (VAR_1 != ((void*)0))
    {
        VAR_1->s.renderOffset = VAR_1->s.start;
        return VAR_1;
    }
    return ((void*)0);
}
