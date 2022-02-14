
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_6__ {scalar_t__ pts; scalar_t__ duration; } ;
struct TYPE_5__ {int frame_count; scalar_t__ remaining_samples; scalar_t__ remaining_delay; int avctx; TYPE_2__* frames; scalar_t__ frame_alloc; } ;
typedef TYPE_1__ AudioFrameQueue ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,char*,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_2__*,TYPE_2__*,int) ;

void FUNC_5(AudioFrameQueue *VAR_3, int VAR_4, int64_t *VAR_5,
                        int64_t *VAR_6)
{
    int64_t VAR_7 = VAR_2;
    int VAR_8 = 0;
    int VAR_9;

    if (VAR_3->frame_count || VAR_3->frame_alloc) {
        if (VAR_3->frames->pts != VAR_2)
            VAR_7 = VAR_3->frames->pts;
    }
    if(!VAR_3->frame_count)
        FUNC_2(VAR_3->avctx, VAR_1, "Trying to remove %d samples, but the queue is empty\n", VAR_4);
    if (VAR_5)
        *VAR_5 = FUNC_3(VAR_3->avctx, VAR_7);

    for(VAR_9=0; VAR_4 && VAR_9<VAR_3->frame_count; VAR_9++){
        int VAR_10= FUNC_0(VAR_3->frames[VAR_9].duration, VAR_4);
        VAR_3->frames[VAR_9].duration -= VAR_10;
        VAR_4 -= VAR_10;
        VAR_8 += VAR_10;
        if(VAR_3->frames[VAR_9].pts != VAR_2)
            VAR_3->frames[VAR_9].pts += VAR_10;
    }
    VAR_3->remaining_samples -= VAR_8;
    VAR_9 -= VAR_9 && VAR_3->frames[VAR_9-1].duration;
    FUNC_4(VAR_3->frames, VAR_3->frames + VAR_9, sizeof(*VAR_3->frames) * (VAR_3->frame_count - VAR_9));
    VAR_3->frame_count -= VAR_9;

    if(VAR_4){
        FUNC_1(!VAR_3->frame_count);
        FUNC_1(VAR_3->remaining_samples == VAR_3->remaining_delay);
        if(VAR_3->frames && VAR_3->frames[0].pts != VAR_2)
            VAR_3->frames[0].pts += VAR_4;
        FUNC_2(VAR_3->avctx, VAR_0, "Trying to remove %d more samples than there are in the queue\n", VAR_4);
    }
    if (VAR_6)
        *VAR_6 = FUNC_3(VAR_3->avctx, VAR_8);
}
