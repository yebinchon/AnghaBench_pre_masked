
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ type; int in_queue; } ;
typedef TYPE_2__ sync_stream_t ;
typedef scalar_t__ int64_t ;
struct TYPE_8__ {scalar_t__ start; scalar_t__ duration; scalar_t__ stop; } ;
struct TYPE_10__ {TYPE_1__ s; } ;
typedef TYPE_3__ hb_buffer_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,TYPE_3__*) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3( sync_stream_t * VAR_2, hb_buffer_t * VAR_3 )
{
    int64_t VAR_4;
    int VAR_5, VAR_6;

    VAR_4 = VAR_3->s.start;
    FUNC_0(VAR_2->in_queue, VAR_3);





    VAR_6 = FUNC_1(VAR_2->in_queue);
    for (VAR_5 = VAR_6 - 2; VAR_5 >= 0; VAR_5--)
    {
        VAR_3 = FUNC_2(VAR_2->in_queue, VAR_5);
        if (VAR_3->s.start < VAR_4 || VAR_4 == VAR_0)
        {
            break;
        }
    }
    if (VAR_5 < VAR_6 - 2)
    {
        hb_buffer_t * VAR_7 = ((void*)0);
        int VAR_8;




        if (VAR_5 >= 0)
        {
            VAR_7 = FUNC_2(VAR_2->in_queue, VAR_5);
        }
        for (VAR_8 = VAR_5 + 1; VAR_8 < VAR_6; VAR_8++)
        {
            int64_t VAR_9;

            VAR_3 = FUNC_2(VAR_2->in_queue, VAR_8);
            VAR_9 = VAR_3->s.start;
            VAR_3->s.start = VAR_4;
            VAR_4 = VAR_9;
            if (VAR_2->type == VAR_1 && VAR_7 != ((void*)0))
            {

                VAR_7->s.duration = VAR_3->s.start - VAR_7->s.start;
                VAR_7->s.stop = VAR_3->s.start;
            }
            VAR_7 = VAR_3;
        }
    }
}
