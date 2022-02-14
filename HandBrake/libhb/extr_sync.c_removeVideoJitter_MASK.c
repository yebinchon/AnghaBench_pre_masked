
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_15__ {double next_pts; int in_queue; TYPE_4__* common; } ;
typedef TYPE_6__ sync_stream_t ;
struct TYPE_14__ {double start; double duration; double stop; } ;
struct TYPE_16__ {TYPE_5__ s; } ;
typedef TYPE_7__ hb_buffer_t ;
struct TYPE_13__ {TYPE_3__* job; } ;
struct TYPE_12__ {TYPE_2__* title; } ;
struct TYPE_10__ {int den; int num; } ;
struct TYPE_11__ {TYPE_1__ vrate; } ;


 TYPE_7__* FUNC_0 (int ,int) ;

__attribute__((used)) static void FUNC_1( sync_stream_t * VAR_0, int VAR_1 )
{
    int VAR_2;
    hb_buffer_t * VAR_3;
    double VAR_4, VAR_5;

    VAR_4 = 90000. * VAR_0->common->job->title->vrate.den /
                              VAR_0->common->job->title->vrate.num;

    VAR_3 = FUNC_0(VAR_0->in_queue, 0);
    VAR_3->s.start = VAR_0->next_pts;
    VAR_5 = VAR_0->next_pts + VAR_4;
    for (VAR_2 = 1; VAR_2 <= VAR_1; VAR_2++)
    {
        VAR_3->s.duration = VAR_4;
        VAR_3->s.stop = VAR_5;
        VAR_3 = FUNC_0(VAR_0->in_queue, VAR_2);
        VAR_3->s.start = VAR_5;
        VAR_5 += VAR_4;
    }
}
