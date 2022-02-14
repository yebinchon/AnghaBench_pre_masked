
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ nb_samples; } ;
struct TYPE_10__ {TYPE_3__* frame; } ;
struct TYPE_9__ {int tail; int allocated; scalar_t__ samples_skipped; int total_samples_tail; int total_frames_tail; int queued; } ;
typedef TYPE_1__ FFFrameQueue ;
typedef TYPE_2__ FFFrameBucket ;
typedef TYPE_3__ AVFrame ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

AVFrame *FUNC_3(FFFrameQueue *VAR_0)
{
    FFFrameBucket *VAR_1;

    FUNC_2(VAR_0);
    FUNC_0(VAR_0->queued);
    VAR_1 = FUNC_1(VAR_0, 0);
    VAR_0->queued--;
    VAR_0->tail++;
    VAR_0->tail &= VAR_0->allocated - 1;
    VAR_0->total_frames_tail++;
    VAR_0->total_samples_tail += VAR_1->frame->nb_samples;
    VAR_0->samples_skipped = 0;
    FUNC_2(VAR_0);
    return VAR_1->frame;
}
