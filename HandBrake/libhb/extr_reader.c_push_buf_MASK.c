
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* job; int * die; } ;
typedef TYPE_2__ hb_work_private_t ;
typedef int hb_fifo_t ;
typedef int hb_buffer_t ;
struct TYPE_4__ {int done; } ;


 int FUNC_0 (int **) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3( hb_work_private_t *VAR_0, hb_fifo_t *VAR_1, hb_buffer_t *VAR_2 )
{
    while ( !*VAR_0->die && !VAR_0->job->done )
    {
        if ( FUNC_1( VAR_1 ) )
        {
            FUNC_2( VAR_1, VAR_2 );
            VAR_2 = ((void*)0);
            break;
        }
    }
    if ( VAR_2 )
    {
        FUNC_0( &VAR_2 );
    }
}
