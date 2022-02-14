
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int cpu_count; int grayscale_taskset; TYPE_5__* grayscale_arguments; } ;
typedef TYPE_2__ hb_filter_private_t ;
struct TYPE_8__ {TYPE_1__* plane; } ;
typedef TYPE_3__ hb_buffer_t ;
struct TYPE_9__ {int segment; TYPE_2__* pv; } ;
typedef TYPE_4__ grayscale_thread_arg_t ;
struct TYPE_10__ {TYPE_3__* src; } ;
typedef TYPE_5__ grayscale_arguments_t ;
struct TYPE_6__ {int stride; int height; int * data; } ;


 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int) ;
 scalar_t__ FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;

void FUNC_7( void *VAR_0 )
{
    grayscale_arguments_t *VAR_1 = ((void*)0);
    hb_filter_private_t * VAR_2;
    int VAR_3 = 1;
    int VAR_4;
    int VAR_5, VAR_6, VAR_7;
    grayscale_thread_arg_t *VAR_8 = VAR_0;
    hb_buffer_t *VAR_9;

    VAR_2 = VAR_8->pv;
    VAR_5 = VAR_8->segment;

    FUNC_0(3, "Grayscale thread started for segment %d", VAR_5);

    while( VAR_3 )
    {



        FUNC_6( &VAR_2->grayscale_taskset, VAR_5 );

        if( FUNC_5( &VAR_2->grayscale_taskset, VAR_5 ) )
        {



            VAR_3 = 0;
            goto report_completion;
        }

        VAR_1 = &VAR_2->grayscale_arguments[VAR_5];
        if (VAR_1->src == ((void*)0))
        {
            FUNC_1( "Thread started when no work available" );
            FUNC_2(500);
            goto report_completion;
        }




        VAR_9 = VAR_1->src;
        for (VAR_4 = 1; VAR_4 < 3; VAR_4++)
        {
            int VAR_10 = VAR_9->plane[VAR_4].stride;
            int VAR_11 = VAR_9->plane[VAR_4].height;
            VAR_6 = (VAR_11 / VAR_2->cpu_count) * VAR_5;
            if (VAR_5 == VAR_2->cpu_count - 1)
            {



                VAR_7 = VAR_11;
            } else {
                VAR_7 = (VAR_11 / VAR_2->cpu_count) * (VAR_5 + 1);
            }

            FUNC_3(&VAR_9->plane[VAR_4].data[VAR_6 * VAR_10],
                   0x80, (VAR_7 - VAR_6) * VAR_10);
        }

report_completion:



        FUNC_4( &VAR_2->grayscale_taskset, VAR_5 );
    }
}
