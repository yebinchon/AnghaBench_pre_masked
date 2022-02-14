
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {double next_pts; int in_queue; TYPE_4__* common; } ;
typedef TYPE_6__ sync_stream_t ;
struct TYPE_15__ {double start; double duration; double stop; } ;
struct TYPE_17__ {TYPE_5__ s; } ;
typedef TYPE_7__ hb_buffer_t ;
struct TYPE_14__ {TYPE_3__* job; } ;
struct TYPE_13__ {TYPE_2__* title; } ;
struct TYPE_11__ {int den; int num; } ;
struct TYPE_12__ {TYPE_1__ vrate; } ;


 double FUNC_0 (double) ;
 int FUNC_1 (int ) ;
 TYPE_7__* FUNC_2 (int ,int) ;
 int FUNC_3 (TYPE_6__*,int) ;

__attribute__((used)) static void FUNC_4( sync_stream_t * VAR_0 )
{
    int VAR_1, VAR_2, VAR_3;
    double VAR_4, VAR_5;
    hb_buffer_t * VAR_6;

    VAR_2 = FUNC_1(VAR_0->in_queue);
    if (VAR_2 < 2)
    {
        return;
    }

    VAR_4 = 90000. * VAR_0->common->job->title->vrate.den /
                              VAR_0->common->job->title->vrate.num;


    VAR_6 = FUNC_2(VAR_0->in_queue, 1);
    VAR_5 = VAR_6->s.start - VAR_0->next_pts;
    if (FUNC_0(VAR_5 - VAR_4) < 1.1)
    {

        VAR_6->s.start = VAR_0->next_pts + VAR_4;
        VAR_6 = FUNC_2(VAR_0->in_queue, 0);
        VAR_6->s.start = VAR_0->next_pts;
        VAR_6->s.duration = VAR_4;
        VAR_6->s.stop = VAR_0->next_pts + VAR_4;
        return;
    }


    VAR_3 = 0;
    for (VAR_1 = 1; VAR_1 < VAR_2; VAR_1++)
    {
        VAR_6 = FUNC_2(VAR_0->in_queue, VAR_1);
        VAR_5 = VAR_6->s.start - VAR_0->next_pts;



        if (FUNC_0(VAR_5 - VAR_1 * VAR_4) < VAR_4 / 3)
        {
            VAR_3 = VAR_1;
        }
    }

    if (VAR_3 > 0)
    {
        FUNC_3(VAR_0, VAR_3);
    }
}
