
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ type; int in_queue; } ;
typedef TYPE_2__ sync_stream_t ;
struct TYPE_14__ {int stream_count; TYPE_2__* streams; } ;
typedef TYPE_3__ sync_common_t ;
struct TYPE_12__ {double start; double duration; double stop; } ;
struct TYPE_15__ {TYPE_1__ s; } ;
typedef TYPE_4__ hb_buffer_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ) ;
 TYPE_4__* FUNC_3 (int ,int) ;
 int FUNC_4 (int ,TYPE_4__*) ;

__attribute__((used)) static void FUNC_5( sync_common_t * VAR_2,
                              sync_stream_t * VAR_3 )
{
    int VAR_4;
    hb_buffer_t * VAR_5, * VAR_6;


    VAR_5 = ((void*)0);
    for (VAR_4 = 0; VAR_4 < FUNC_2(VAR_3->in_queue);)
    {
        VAR_6 = FUNC_3(VAR_3->in_queue, VAR_4);

        if (!FUNC_0(VAR_3, VAR_6))
        {
            FUNC_4(VAR_3->in_queue, VAR_6);
        }
        else
        {
            VAR_4++;
            if (VAR_3->type == VAR_1 && VAR_5 != ((void*)0))
            {
                double VAR_7 = VAR_6->s.start - VAR_5->s.start;
                if (VAR_7 > 0)
                {
                    VAR_5->s.duration = VAR_7;
                    VAR_5->s.stop = VAR_6->s.start;
                }
            }
            VAR_5 = VAR_6;
        }
    }

    for (VAR_4 = 0; VAR_4 < VAR_2->stream_count; VAR_4++)
    {
        sync_stream_t * VAR_8 = &VAR_2->streams[VAR_4];

        if (VAR_8 == VAR_3)
        {

            continue;
        }

        int VAR_9;
        VAR_5 = ((void*)0);
        for (VAR_9 = 0; VAR_9 < FUNC_2(VAR_8->in_queue);)
        {
            VAR_6 = FUNC_3(VAR_8->in_queue, VAR_9);
            if (!FUNC_0(VAR_8, VAR_6))
            {

                FUNC_4(VAR_8->in_queue, VAR_6);
            }
            else
            {
                VAR_9++;
                if (VAR_8->type == VAR_1 && VAR_5 != ((void*)0))
                {
                    double VAR_10 = VAR_6->s.start - VAR_5->s.start;
                    if (VAR_10 > 0)
                    {
                        VAR_5->s.duration = VAR_10;
                        VAR_5->s.stop = VAR_6->s.start;
                    }
                }
                VAR_5 = VAR_6;
            }
        }
    }
    FUNC_1(VAR_2, VAR_0);
}
