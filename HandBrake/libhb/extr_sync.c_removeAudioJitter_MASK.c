
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {double next_pts; int in_queue; } ;
typedef TYPE_2__ sync_stream_t ;
struct TYPE_6__ {double start; double duration; double stop; } ;
struct TYPE_8__ {TYPE_1__ s; } ;
typedef TYPE_3__ hb_buffer_t ;


 TYPE_3__* FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1(sync_stream_t * VAR_0, int VAR_1)
{
    int VAR_2;
    hb_buffer_t * VAR_3;
    double VAR_4;






    VAR_3 = FUNC_0(VAR_0->in_queue, 0);
    VAR_3->s.start = VAR_0->next_pts;
    VAR_4 = VAR_0->next_pts + VAR_3->s.duration;
    for (VAR_2 = 1; VAR_2 <= VAR_1; VAR_2++)
    {

        VAR_3->s.stop = VAR_4;
        VAR_3 = FUNC_0(VAR_0->in_queue, VAR_2);
        VAR_3->s.start = VAR_4;
        VAR_4 += VAR_3->s.duration;
    }
}
