
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ next_pts; scalar_t__ type; int delta_list; int pts_slip; int in_queue; } ;
typedef TYPE_2__ sync_stream_t ;
struct TYPE_11__ {scalar_t__ pts; scalar_t__ delta; } ;
typedef TYPE_3__ sync_delta_t ;
struct TYPE_12__ {int stream_count; TYPE_2__* streams; } ;
typedef TYPE_4__ sync_common_t ;
typedef scalar_t__ int64_t ;
struct TYPE_9__ {scalar_t__ start; scalar_t__ stop; scalar_t__ duration; } ;
struct TYPE_13__ {TYPE_1__ s; } ;
typedef TYPE_5__ hb_buffer_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ,int) ;
 int FUNC_3 (int ,TYPE_3__*) ;

__attribute__((used)) static void FUNC_4( sync_common_t * VAR_4 )
{
    int VAR_5;


    for (VAR_5 = 0; VAR_5 < VAR_4->stream_count; VAR_5++)
    {
        sync_stream_t * VAR_6 = &VAR_4->streams[VAR_5];


        sync_delta_t * VAR_7 = FUNC_2(VAR_6->delta_list, 0);
        if (VAR_7 != ((void*)0))
        {
            int VAR_8, VAR_9 = -1;
            int64_t VAR_10, VAR_11 = 0;
            hb_buffer_t * VAR_12;

            VAR_10 = VAR_6->next_pts;
            for (VAR_8 = 0; VAR_8 < FUNC_1(VAR_6->in_queue); VAR_8++)
            {
                VAR_12 = FUNC_2(VAR_6->in_queue, VAR_8);
                if (VAR_6->type == VAR_2)
                {
                    if (VAR_12->s.start > VAR_7->pts)
                    {

                        VAR_9 = VAR_8;
                        break;
                    }
                }
                else if (VAR_12->s.start > VAR_7->pts)
                {

                    if (VAR_12->s.start - VAR_10 > VAR_11)
                    {
                        VAR_11 = VAR_12->s.start - VAR_10;
                        VAR_9 = VAR_8;
                    }
                    if (VAR_6->type == VAR_1 && VAR_11 >= VAR_7->delta)
                    {


                        break;
                    }
                }
                VAR_10 = VAR_12->s.start;
            }

            if (VAR_9 >= 0)
            {
                for (VAR_8 = VAR_9; VAR_8 < FUNC_1(VAR_6->in_queue); VAR_8++)
                {
                    VAR_12 = FUNC_2(VAR_6->in_queue, VAR_8);
                    VAR_12->s.start -= VAR_7->delta;
                    if (VAR_12->s.stop != VAR_0)
                    {
                        VAR_12->s.stop -= VAR_7->delta;
                    }
                }


                if (VAR_6->type == VAR_3 && VAR_9 > 0)
                {
                    VAR_12 = FUNC_2(VAR_6->in_queue, VAR_9 - 1);
                    if (VAR_12->s.duration > VAR_7->delta)
                    {
                        VAR_12->s.duration -= VAR_7->delta;
                        VAR_12->s.stop -= VAR_7->delta;
                    }
                    else
                    {
                        VAR_12->s.duration = 0;
                        VAR_12->s.stop = VAR_12->s.start;
                    }
                }
                VAR_6->pts_slip += VAR_7->delta;
                FUNC_3(VAR_6->delta_list, VAR_7);
                FUNC_0(VAR_7);
            }
        }
    }
}
