
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ max_len; scalar_t__ min_len; int in_queue; } ;
typedef TYPE_1__ sync_stream_t ;
struct TYPE_5__ {int stream_count; TYPE_1__* streams; } ;
typedef TYPE_2__ sync_common_t ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1( sync_common_t * VAR_0 )
{
    int VAR_1, VAR_2 = 0, VAR_3 = 0;

    for (VAR_1 = 0; VAR_1 < VAR_0->stream_count; VAR_1++)
    {
        sync_stream_t *VAR_4 = &VAR_0->streams[VAR_1];



        if (FUNC_0(VAR_4->in_queue) > VAR_4->max_len)
        {
            VAR_3 = 1;
        }
        if (FUNC_0(VAR_4->in_queue) <= VAR_4->min_len)
        {
            VAR_2 = 1;
        }
    }
    return !VAR_2 || VAR_3;
}
