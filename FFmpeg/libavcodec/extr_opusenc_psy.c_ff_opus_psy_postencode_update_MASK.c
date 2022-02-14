
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int index; } ;
struct TYPE_11__ {float framebits; scalar_t__ intensity_stereo; } ;
struct TYPE_9__ {int frames; int framesize; } ;
struct TYPE_10__ {int max_steps; int buffered_steps; int avg_is_band; float lambda; int total_packets_out; scalar_t__ inflection_points_count; TYPE_2__ p; scalar_t__ steps_to_process; scalar_t__ cs_num; TYPE_1__* avctx; TYPE_5__** steps; } ;
struct TYPE_8__ {int bit_rate; int sample_rate; } ;
typedef int OpusRangeCoder ;
typedef int OpusPsyStep ;
typedef TYPE_3__ OpusPsyContext ;
typedef TYPE_4__ CeltFrame ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,int ,int) ;

void FUNC_2(OpusPsyContext *VAR_1, CeltFrame *VAR_2, OpusRangeCoder *VAR_3)
{
    int VAR_4, VAR_5 = FUNC_0(VAR_1->p.framesize);
    int VAR_6 = VAR_1->p.frames*(VAR_5/120);
    void *VAR_7[VAR_0];
    float VAR_8;

    for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++)
        FUNC_1(VAR_1->steps[VAR_4], 0, sizeof(OpusPsyStep));

    for (VAR_4 = 0; VAR_4 < VAR_1->max_steps; VAR_4++)
        VAR_7[VAR_4] = VAR_1->steps[VAR_4];

    for (VAR_4 = 0; VAR_4 < VAR_1->max_steps; VAR_4++) {
        const int VAR_9 = VAR_4 - VAR_6;
        VAR_1->steps[VAR_9 < 0 ? VAR_1->max_steps + VAR_9 : VAR_9] = VAR_7[VAR_4];
    }

    for (VAR_4 = VAR_6; VAR_4 < VAR_1->buffered_steps; VAR_4++)
        VAR_1->steps[VAR_4]->index -= VAR_6;

    VAR_8 = VAR_1->avctx->bit_rate/(VAR_1->avctx->sample_rate/VAR_5);

    for (VAR_4 = 0; VAR_4 < VAR_1->p.frames; VAR_4++) {
        VAR_1->avg_is_band += VAR_2[VAR_4].intensity_stereo;
        VAR_1->lambda *= VAR_8 / VAR_2[VAR_4].framebits;
    }

    VAR_1->avg_is_band /= (VAR_1->p.frames + 1);

    VAR_1->cs_num = 0;
    VAR_1->steps_to_process = 0;
    VAR_1->buffered_steps -= VAR_6;
    VAR_1->total_packets_out += VAR_1->p.frames;
    VAR_1->inflection_points_count = 0;
}
