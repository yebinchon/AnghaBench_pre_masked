
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int eedi2_taskset; } ;
typedef TYPE_1__ hb_filter_private_t ;
struct TYPE_5__ {int plane; TYPE_1__* pv; } ;
typedef TYPE_2__ eedi2_thread_arg_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void FUNC_5( void *VAR_0 )
{
    hb_filter_private_t * VAR_1;
    int VAR_2;
    eedi2_thread_arg_t *VAR_3 = VAR_0;

    VAR_1 = VAR_3->pv;
    VAR_2 = VAR_3->plane;

    FUNC_1(3, "eedi2 thread started for plane %d", VAR_2);

    while (1)
    {



        FUNC_4( &VAR_1->eedi2_taskset, VAR_2 );

        if( FUNC_3( &VAR_1->eedi2_taskset, VAR_2 ) )
        {



            break;
        }




        FUNC_0( VAR_1, VAR_2 );




        FUNC_2( &VAR_1->eedi2_taskset, VAR_2 );
    }

    FUNC_2( &VAR_1->eedi2_taskset, VAR_2 );
}
