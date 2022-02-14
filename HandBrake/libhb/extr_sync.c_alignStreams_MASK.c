
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_20__ {TYPE_4__* audio; } ;
struct TYPE_22__ {scalar_t__ type; TYPE_5__ audio; int in_queue; } ;
typedef TYPE_7__ sync_stream_t ;
struct TYPE_23__ {int stream_count; TYPE_7__* streams; TYPE_1__* job; } ;
typedef TYPE_8__ sync_common_t ;
typedef scalar_t__ int64_t ;
struct TYPE_21__ {scalar_t__ start; } ;
struct TYPE_24__ {TYPE_6__ s; } ;
typedef TYPE_9__ hb_buffer_t ;
struct TYPE_17__ {int codec; } ;
struct TYPE_18__ {TYPE_2__ out; } ;
struct TYPE_19__ {TYPE_3__ config; } ;
struct TYPE_16__ {scalar_t__ align_av_start; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_8__*,TYPE_7__*,scalar_t__) ;
 int FUNC_1 (TYPE_9__**) ;
 TYPE_9__* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,TYPE_9__*) ;

__attribute__((used)) static void FUNC_4( sync_common_t * VAR_3, int64_t VAR_4 )
{
    int VAR_5;
    hb_buffer_t * VAR_6;

    if (VAR_3->job->align_av_start)
    {
        int64_t VAR_7 = VAR_0;
        int VAR_8 = 0;

        for (VAR_5 = 0; VAR_5 < VAR_3->stream_count; VAR_5++)
        {
            sync_stream_t * VAR_9 = &VAR_3->streams[VAR_5];

            VAR_6 = FUNC_2(VAR_9->in_queue, 0);



            while (VAR_6 != ((void*)0) && VAR_6->s.start < VAR_4)
            {
                FUNC_3(VAR_9->in_queue, VAR_6);
                FUNC_1(&VAR_6);
                VAR_6 = FUNC_2(VAR_9->in_queue, 0);
            }
            if (VAR_6 == ((void*)0))
            {
                continue;
            }
            if (VAR_9->type == VAR_2 &&
                VAR_9->audio.audio->config.out.codec & VAR_1)
            {





                VAR_8 = 1;
                if (VAR_7 < VAR_6->s.start)
                {
                    VAR_7 = VAR_6->s.start;
                }
            }
            else if (!VAR_8)
            {






                if (VAR_7 == VAR_0 || VAR_7 > VAR_6->s.start)
                {
                    VAR_7 = VAR_6->s.start;
                }
            }
        }
        if (VAR_7 != VAR_0)
        {
            for (VAR_5 = 0; VAR_5 < VAR_3->stream_count; VAR_5++)
            {

                FUNC_0(VAR_3, &VAR_3->streams[VAR_5], VAR_7);
            }
        }
    }
}
