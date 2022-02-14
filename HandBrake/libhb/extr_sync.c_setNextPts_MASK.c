
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ next_pts; int in_queue; } ;
typedef TYPE_2__ sync_stream_t ;
struct TYPE_9__ {int stream_count; TYPE_2__* streams; } ;
typedef TYPE_3__ sync_common_t ;
typedef scalar_t__ int64_t ;
struct TYPE_7__ {scalar_t__ start; } ;
struct TYPE_10__ {TYPE_1__ s; } ;
typedef TYPE_4__ hb_buffer_t ;


 scalar_t__ VAR_0 ;
 TYPE_4__* FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1( sync_common_t * VAR_1 )
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1->stream_count; VAR_2++)
    {
        sync_stream_t * VAR_3 = &VAR_1->streams[VAR_2];
        hb_buffer_t * VAR_4 = FUNC_0(VAR_3->in_queue, 0);
        if (VAR_4 != ((void*)0))
        {
            VAR_3->next_pts = VAR_4->s.start;
        }
        else
        {
            VAR_3->next_pts = (int64_t)VAR_0;
        }
    }
}
