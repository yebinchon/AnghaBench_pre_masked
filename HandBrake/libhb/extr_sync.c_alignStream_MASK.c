
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_22__ {TYPE_3__* audio; } ;
struct TYPE_24__ {scalar_t__ type; int in_queue; TYPE_4__ audio; } ;
typedef TYPE_6__ sync_stream_t ;
struct TYPE_25__ {int stream_count; TYPE_6__* streams; } ;
typedef TYPE_7__ sync_common_t ;
typedef scalar_t__ int64_t ;
struct TYPE_23__ {scalar_t__ start; scalar_t__ stop; int duration; } ;
struct TYPE_26__ {TYPE_5__ s; struct TYPE_26__* next; } ;
typedef TYPE_8__ hb_buffer_t ;
struct TYPE_19__ {int codec; } ;
struct TYPE_20__ {TYPE_1__ out; } ;
struct TYPE_21__ {TYPE_2__ config; } ;


 TYPE_8__* FUNC_0 (TYPE_6__*,scalar_t__,scalar_t__) ;
 TYPE_8__* FUNC_1 (TYPE_6__*,scalar_t__,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (TYPE_8__**) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int,TYPE_8__*) ;
 TYPE_8__* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,TYPE_8__*) ;

__attribute__((used)) static void FUNC_7( sync_common_t * VAR_4, sync_stream_t * VAR_5,
                         int64_t VAR_6 )
{
    if (FUNC_3(VAR_5->in_queue) <= 0 ||
        VAR_5->type == VAR_2)
    {
        return;
    }

    hb_buffer_t * VAR_7 = FUNC_5(VAR_5->in_queue, 0);
    int64_t VAR_8 = VAR_7->s.start - VAR_6;

    if (VAR_8 == 0)
    {
        return;
    }
    if (VAR_8 < 0)
    {
        int VAR_9;


        for (VAR_9 = 0; VAR_9 < VAR_4->stream_count; VAR_9++)
        {
            sync_stream_t * VAR_10 = &VAR_4->streams[VAR_9];
            if (VAR_5 == VAR_10)
            {
                continue;
            }
            while (FUNC_3(VAR_10->in_queue) > 0)
            {
                VAR_7 = FUNC_5(VAR_10->in_queue, 0);
                if (VAR_7->s.start < VAR_6)
                {
                    FUNC_6(VAR_10->in_queue, VAR_7);
                    FUNC_2(&VAR_7);
                }
                else
                {

                    FUNC_7(VAR_4, VAR_10, VAR_6);
                    break;
                }
            }
        }
    }
    else
    {
        hb_buffer_t * VAR_11 = ((void*)0);


        if (VAR_5->type == VAR_1)
        {

            if (!(VAR_5->audio.audio->config.out.codec & VAR_0))
            {
                VAR_11 = FUNC_1(VAR_5, VAR_8, VAR_6);
            }
        }
        else if (VAR_5->type == VAR_3)
        {
            VAR_11 = FUNC_0(VAR_5, VAR_8, VAR_6);
        }

        int64_t VAR_12 = VAR_6;
        hb_buffer_t * VAR_13;
        int VAR_14;
        for (VAR_14 = 0; VAR_11 != ((void*)0); VAR_11 = VAR_13, VAR_14++)
        {
            VAR_12 = VAR_11->s.stop;
            VAR_13 = VAR_11->next;
            VAR_11->next = ((void*)0);
            FUNC_4(VAR_5->in_queue, VAR_14, VAR_11);
        }
        if (VAR_5->type == VAR_3 && VAR_12 < VAR_7->s.start)
        {

            VAR_7->s.duration += VAR_7->s.start - VAR_12;
            VAR_7->s.start = VAR_12;
        }
    }
}
