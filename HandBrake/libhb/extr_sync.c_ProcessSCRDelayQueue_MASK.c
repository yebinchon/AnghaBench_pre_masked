
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ pts_slip; int scr_delay_queue; } ;
typedef TYPE_3__ sync_stream_t ;
struct TYPE_14__ {int stream_count; TYPE_1__* scr; TYPE_3__* streams; } ;
typedef TYPE_4__ sync_common_t ;
struct TYPE_12__ {int scr_sequence; scalar_t__ start; scalar_t__ stop; } ;
struct TYPE_15__ {TYPE_2__ s; } ;
typedef TYPE_5__ hb_buffer_t ;
struct TYPE_11__ {int scr_sequence; scalar_t__ scr_offset; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_1 (int ) ;
 TYPE_5__* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,TYPE_5__*) ;

__attribute__((used)) static void FUNC_4( sync_common_t * VAR_2 )
{
    int VAR_3, VAR_4;

    for (VAR_3 = 0; VAR_3 < VAR_2->stream_count; VAR_3++)
    {
        sync_stream_t * VAR_5 = &VAR_2->streams[VAR_3];
        for (VAR_4 = 0; VAR_4 < FUNC_1(VAR_5->scr_delay_queue);)
        {
            hb_buffer_t * VAR_6 = FUNC_2(VAR_5->scr_delay_queue, VAR_4);
            int VAR_7 = VAR_6->s.scr_sequence & VAR_1;
            if (VAR_6->s.scr_sequence < 0)
            {




                FUNC_3(VAR_5->scr_delay_queue, VAR_6);
                FUNC_0(VAR_5, VAR_6);
            }
            else if (VAR_6->s.scr_sequence == VAR_2->scr[VAR_7].scr_sequence)
            {
                if (VAR_6->s.start != VAR_0)
                {
                    VAR_6->s.start -= VAR_2->scr[VAR_7].scr_offset;
                    VAR_6->s.start -= VAR_5->pts_slip;
                }
                if (VAR_6->s.stop != VAR_0)
                {
                    VAR_6->s.stop -= VAR_2->scr[VAR_7].scr_offset;
                    VAR_6->s.stop -= VAR_5->pts_slip;
                }
                FUNC_3(VAR_5->scr_delay_queue, VAR_6);
                FUNC_0(VAR_5, VAR_6);
            }
            else
            {
                VAR_4++;
            }
        }
    }
}
