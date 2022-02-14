
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ last_scr_pts; int in_queue; } ;
typedef TYPE_2__ sync_stream_t ;
struct TYPE_10__ {int stream_count; TYPE_2__* streams; } ;
typedef TYPE_3__ sync_common_t ;
typedef scalar_t__ int64_t ;
struct TYPE_8__ {scalar_t__ start; scalar_t__ stop; scalar_t__ duration; } ;
struct TYPE_11__ {TYPE_1__ s; } ;
typedef TYPE_4__ hb_buffer_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_4__* FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static void FUNC_3( sync_common_t * VAR_1, int64_t VAR_2 )
{
    int VAR_3, VAR_4;

    FUNC_2(VAR_1, VAR_2);
    for (VAR_3 = 0; VAR_3 < VAR_1->stream_count; VAR_3++)
    {
        hb_buffer_t * VAR_5 = ((void*)0);
        sync_stream_t * VAR_6 = &VAR_1->streams[VAR_3];
        int VAR_7 = FUNC_0(VAR_6->in_queue);

        for (VAR_4 = 0; VAR_4 < VAR_7; VAR_4++)
        {
            VAR_5 = FUNC_1(VAR_6->in_queue, VAR_4);
            if (VAR_5->s.start != VAR_0)
            {
                VAR_5->s.start -= VAR_2;
            }
            if (VAR_5->s.stop != VAR_0)
            {
                VAR_5->s.stop -= VAR_2;
            }
        }
        if (VAR_5 != ((void*)0) && VAR_5->s.start != VAR_0)
        {
            VAR_6->last_scr_pts = VAR_5->s.start + VAR_5->s.duration;
        }
        else
        {
            VAR_6->last_scr_pts = (int64_t)VAR_0;
        }
    }
}
