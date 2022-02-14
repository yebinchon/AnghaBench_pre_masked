
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ nb_samples; } ;
struct TYPE_14__ {TYPE_3__* frame; } ;
struct TYPE_13__ {int queued; int allocated; int tail; int total_samples_head; int total_frames_head; TYPE_2__* queue; } ;
typedef TYPE_1__ FFFrameQueue ;
typedef TYPE_2__ FFFrameBucket ;
typedef TYPE_3__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (TYPE_2__*,size_t,int) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*,int) ;

int FUNC_5(FFFrameQueue *VAR_1, AVFrame *VAR_2)
{
    FFFrameBucket *VAR_3;

    FUNC_3(VAR_1);
    if (VAR_1->queued == VAR_1->allocated) {
        if (VAR_1->allocated == 1) {
            size_t VAR_4 = 8;
            FFFrameBucket *VAR_5 = FUNC_1(((void*)0), VAR_4, sizeof(*VAR_5));
            if (!VAR_5)
                return FUNC_0(VAR_0);
            VAR_5[0] = VAR_1->queue[0];
            VAR_1->queue = VAR_5;
            VAR_1->allocated = VAR_4;
        } else {
            size_t VAR_6 = VAR_1->allocated << 1;
            FFFrameBucket *VAR_7 = FUNC_1(VAR_1->queue, VAR_6, sizeof(*VAR_7));
            if (!VAR_7)
                return FUNC_0(VAR_0);
            if (VAR_1->tail + VAR_1->queued > VAR_1->allocated)
                FUNC_4(VAR_7 + VAR_1->allocated, VAR_7,
                        (VAR_1->tail + VAR_1->queued - VAR_1->allocated) * sizeof(*VAR_7));
            VAR_1->queue = VAR_7;
            VAR_1->allocated = VAR_6;
        }
    }
    VAR_3 = FUNC_2(VAR_1, VAR_1->queued);
    VAR_3->frame = VAR_2;
    VAR_1->queued++;
    VAR_1->total_frames_head++;
    VAR_1->total_samples_head += VAR_2->nb_samples;
    FUNC_3(VAR_1);
    return 0;
}
