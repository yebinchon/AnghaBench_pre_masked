
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ type; int in_queue; } ;
typedef TYPE_2__ sync_stream_t ;
struct TYPE_13__ {int stream_count; int found_first_pts; TYPE_2__* streams; } ;
typedef TYPE_3__ sync_common_t ;
typedef scalar_t__ int64_t ;
struct TYPE_11__ {scalar_t__ start; } ;
struct TYPE_14__ {TYPE_1__ s; } ;
typedef TYPE_4__ hb_buffer_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_4__**) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_4__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,TYPE_4__*) ;

__attribute__((used)) static void FUNC_6( sync_common_t * VAR_3 )
{
    int VAR_4;
    int64_t VAR_5 = VAR_1;
    sync_stream_t * VAR_6 = ((void*)0);

    for (VAR_4 = 0; VAR_4 < VAR_3->stream_count; VAR_4++)
    {
        sync_stream_t *VAR_7 = &VAR_3->streams[VAR_4];
        if (VAR_7->type == VAR_2)
        {

            continue;
        }


        while (FUNC_3(VAR_7->in_queue) > 0)
        {
            hb_buffer_t * VAR_8 = FUNC_4(VAR_7->in_queue, 0);
            if (VAR_8->s.start != VAR_0)
            {

                if (VAR_8->s.start < VAR_5)
                {
                    VAR_5 = VAR_8->s.start;
                    VAR_6 = VAR_7;
                }
                break;
            }
            else
            {
                FUNC_5(VAR_7->in_queue, VAR_8);
                FUNC_1(&VAR_8);
            }
        }
    }


    if (VAR_5 != VAR_1)
    {
        VAR_3->found_first_pts = 1;



        FUNC_0(VAR_3, VAR_6);


    }
    else
    {

        FUNC_2("checkFirstPts: No initial PTS found!\n");
    }
}
