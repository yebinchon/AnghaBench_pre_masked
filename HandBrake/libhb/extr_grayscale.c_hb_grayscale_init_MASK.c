
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct hb_filter_private_s {int dummy; } ;
struct TYPE_8__ {int cpu_count; int grayscale_taskset; TYPE_5__* grayscale_arguments; } ;
typedef TYPE_1__ hb_filter_private_t ;
struct TYPE_9__ {TYPE_1__* private_data; } ;
typedef TYPE_2__ hb_filter_object_t ;
typedef int hb_filter_init_t ;
struct TYPE_10__ {int segment; TYPE_1__* pv; } ;
typedef TYPE_3__ grayscale_thread_arg_t ;
typedef int grayscale_arguments_t ;
struct TYPE_11__ {int * src; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 TYPE_5__* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,int,int) ;
 TYPE_3__* FUNC_5 (int *,int) ;
 scalar_t__ FUNC_6 (int *,int,char*,int ,int ) ;

__attribute__((used)) static int FUNC_7( hb_filter_object_t * VAR_2,
                              hb_filter_init_t * VAR_3 )
{
    VAR_2->private_data = FUNC_0( 1, sizeof(struct hb_filter_private_s) );
    hb_filter_private_t * VAR_4 = VAR_2->private_data;

    VAR_4->cpu_count = FUNC_2();




    VAR_4->grayscale_arguments = FUNC_3(sizeof(grayscale_arguments_t) *
                                     VAR_4->cpu_count);
    if (VAR_4->grayscale_arguments == ((void*)0) ||
        FUNC_4( &VAR_4->grayscale_taskset, VAR_4->cpu_count,
                      sizeof( grayscale_thread_arg_t ) ) == 0)
    {
        FUNC_1( "grayscale could not initialize taskset" );
    }

    int VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_4->cpu_count; VAR_5++)
    {
        grayscale_thread_arg_t *VAR_6;

        VAR_6 = FUNC_5(&VAR_4->grayscale_taskset, VAR_5);

        VAR_6->pv = VAR_4;
        VAR_6->segment = VAR_5;
        VAR_4->grayscale_arguments[VAR_5].src = ((void*)0);

        if (FUNC_6(&VAR_4->grayscale_taskset, VAR_5,
                                 "grayscale_filter_segment",
                                 VAR_1,
                                 VAR_0 ) == 0)
        {
            FUNC_1( "grayscale could not spawn thread" );
        }
    }

    return 0;
}
