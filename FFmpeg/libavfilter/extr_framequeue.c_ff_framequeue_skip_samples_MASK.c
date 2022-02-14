
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* frame; } ;
struct TYPE_10__ {int queued; size_t total_samples_tail; int samples_skipped; } ;
struct TYPE_9__ {size_t nb_samples; int channels; scalar_t__ pts; size_t* linesize; size_t* extended_data; size_t* data; int sample_rate; int format; } ;
typedef TYPE_2__ FFFrameQueue ;
typedef TYPE_3__ FFFrameBucket ;
typedef int AVRational ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (size_t,int ,int ) ;
 int FUNC_4 (int ) ;
 TYPE_3__* FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ) ;

void FUNC_8(FFFrameQueue *VAR_2, size_t VAR_3, AVRational VAR_4)
{
    FFFrameBucket *VAR_5;
    size_t VAR_6;
    int VAR_7, VAR_8, VAR_9;

    FUNC_6(VAR_2);
    FUNC_0(VAR_2->queued);
    VAR_5 = FUNC_5(VAR_2, 0);
    FUNC_0(VAR_3 < VAR_5->frame->nb_samples);
    VAR_7 = FUNC_4(VAR_5->frame->format);
    VAR_8 = VAR_7 ? VAR_5->frame->channels : 1;
    VAR_6 = VAR_3 * FUNC_1(VAR_5->frame->format);
    if (!VAR_7)
        VAR_6 *= VAR_5->frame->channels;
    if (VAR_5->frame->pts != VAR_0)
        VAR_5->frame->pts += FUNC_3(VAR_3, FUNC_2(1, VAR_5->frame->sample_rate), VAR_4);
    VAR_5->frame->nb_samples -= VAR_3;
    VAR_5->frame->linesize[0] -= VAR_6;
    for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
        VAR_5->frame->extended_data[VAR_9] += VAR_6;
    for (VAR_9 = 0; VAR_9 < VAR_8 && VAR_9 < VAR_1; VAR_9++)
        VAR_5->frame->data[VAR_9] = VAR_5->frame->extended_data[VAR_9];
    VAR_2->total_samples_tail += VAR_3;
    VAR_2->samples_skipped = 1;
    FUNC_7(VAR_2, 0);
}
