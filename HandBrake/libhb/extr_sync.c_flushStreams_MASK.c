
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ done; int flush; } ;
typedef TYPE_1__ sync_stream_t ;
struct TYPE_6__ {int stream_count; TYPE_1__* streams; } ;
typedef TYPE_2__ sync_common_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1( sync_common_t * VAR_0 )
{
    int VAR_1;


    for (VAR_1 = 0; VAR_1 < VAR_0->stream_count; VAR_1++)
    {
        sync_stream_t * VAR_2 = &VAR_0->streams[VAR_1];
        if (!VAR_2->done && !VAR_2->flush)
        {
            return;
        }
    }


    for (VAR_1 = 0; VAR_1 < VAR_0->stream_count; VAR_1++)
    {
        sync_stream_t * VAR_3 = &VAR_0->streams[VAR_1];
        if (VAR_3->done)
        {
            continue;
        }
        FUNC_0(VAR_3);
    }
}
