
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int count; TYPE_1__* list; int * packet; } ;
struct TYPE_7__ {TYPE_2__ ts; int * file_handle; } ;
typedef TYPE_3__ hb_stream_t ;
struct TYPE_5__ {int * buf; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **) ;

__attribute__((used)) static void FUNC_3( hb_stream_t *VAR_0 )
{
    if( VAR_0->file_handle )
    {
        FUNC_0( VAR_0->file_handle );
        VAR_0->file_handle = ((void*)0);
    }

    int VAR_1=0;

    if ( VAR_0->ts.packet )
    {
        FUNC_1( VAR_0->ts.packet );
        VAR_0->ts.packet = ((void*)0);
    }
    if ( VAR_0->ts.list )
    {
        for (VAR_1 = 0; VAR_1 < VAR_0->ts.count; VAR_1++)
        {
            if (VAR_0->ts.list[VAR_1].buf)
            {
                FUNC_2(&(VAR_0->ts.list[VAR_1].buf));
                VAR_0->ts.list[VAR_1].buf = ((void*)0);
            }
        }
    }
}
