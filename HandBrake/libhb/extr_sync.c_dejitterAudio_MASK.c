
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {double next_pts; int in_queue; } ;
typedef TYPE_2__ sync_stream_t ;
struct TYPE_7__ {double duration; double start; } ;
struct TYPE_9__ {TYPE_1__ s; } ;
typedef TYPE_3__ hb_buffer_t ;


 int FUNC_0 (double) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_4( sync_stream_t * VAR_0 )
{
    int VAR_1, VAR_2, VAR_3;
    double VAR_4;
    hb_buffer_t * VAR_5, * VAR_6, * VAR_7;

    VAR_2 = FUNC_1(VAR_0->in_queue);
    if (VAR_2 < 4)
    {
        return;
    }


    VAR_3 = 0;
    VAR_6 = FUNC_2(VAR_0->in_queue, 0);
    VAR_7 = FUNC_2(VAR_0->in_queue, 1);
    if (FUNC_0(VAR_6->s.duration - (VAR_7->s.start - VAR_0->next_pts)) < 1.1)
    {

        return;
    }
    VAR_5 = FUNC_2(VAR_0->in_queue, 0);
    VAR_4 = VAR_5->s.duration;


    for (VAR_1 = 1; VAR_1 < VAR_2; VAR_1++)
    {
        VAR_5 = FUNC_2(VAR_0->in_queue, VAR_1);
        if (FUNC_0(VAR_4 - (VAR_5->s.start - VAR_0->next_pts)) < (90 * 40))
        {

            VAR_3 = VAR_1;
        }
        VAR_4 += VAR_5->s.duration;
    }
    if (VAR_3 >= 4)
    {
        FUNC_3(VAR_0, VAR_3);
    }
}
