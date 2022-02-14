
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int done; int fifo_in; int fifo_out; } ;
typedef TYPE_1__ sync_stream_t ;
struct TYPE_5__ {int stream_count; TYPE_1__* streams; } ;
typedef TYPE_2__ sync_common_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2( sync_common_t * VAR_1 )
{
    int VAR_2;


    for (VAR_2 = 0; VAR_2 < VAR_1->stream_count; VAR_2++)
    {
        sync_stream_t * VAR_3 = &VAR_1->streams[VAR_2];
        if (VAR_3->type == VAR_0)
        {
            continue;
        }
        if (!VAR_3->done)
        {
            return;
        }
    }


    for (VAR_2 = 0; VAR_2 < VAR_1->stream_count; VAR_2++)
    {
        sync_stream_t * VAR_4 = &VAR_1->streams[VAR_2];
        if (VAR_4->done || VAR_4->type != VAR_0)
        {
            continue;
        }
        FUNC_0(VAR_4->fifo_out, FUNC_1());
        FUNC_0(VAR_4->fifo_in, FUNC_1());
        VAR_4->done = 1;
    }
}
