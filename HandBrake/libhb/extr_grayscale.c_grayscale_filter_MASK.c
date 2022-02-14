
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cpu_count; int grayscale_taskset; TYPE_1__* grayscale_arguments; } ;
typedef TYPE_2__ hb_filter_private_t ;
typedef int hb_buffer_t ;
struct TYPE_4__ {int * src; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1( hb_filter_private_t * VAR_0,
                              hb_buffer_t * VAR_1 )
{

    int VAR_2;

    for( VAR_2 = 0; VAR_2 < VAR_0->cpu_count; VAR_2++ )
    {



        VAR_0->grayscale_arguments[VAR_2].src = VAR_1;
    }




    FUNC_0( &VAR_0->grayscale_taskset );




}
