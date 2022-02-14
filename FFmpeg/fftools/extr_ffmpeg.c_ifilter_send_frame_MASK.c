
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_28__ {scalar_t__ format; TYPE_5__* hw_frames_ctx; int height; int width; int channel_layout; int channels; int sample_rate; } ;
struct TYPE_27__ {int nb_inputs; scalar_t__ graph; } ;
struct TYPE_26__ {scalar_t__ format; int filter; int frame_queue; TYPE_4__* hw_frames_ctx; TYPE_3__* ist; int height; int width; int channel_layout; int channels; int sample_rate; TYPE_7__* graph; } ;
struct TYPE_25__ {scalar_t__ data; } ;
struct TYPE_24__ {scalar_t__ data; } ;
struct TYPE_23__ {int reinit_filters; TYPE_2__* st; } ;
struct TYPE_22__ {TYPE_1__* codecpar; } ;
struct TYPE_21__ {int codec_type; } ;
typedef TYPE_6__ InputFilter ;
typedef TYPE_7__ FilterGraph ;
typedef TYPE_8__ AVFrame ;


 int FUNC_0 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,TYPE_8__*,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,TYPE_8__**,int,int *) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 TYPE_8__* FUNC_7 (TYPE_8__*) ;
 int FUNC_8 (TYPE_8__**) ;
 int FUNC_9 (TYPE_8__*) ;
 int FUNC_10 (int *,int ,char*,...) ;
 int FUNC_11 (TYPE_7__*) ;
 int FUNC_12 (TYPE_7__*) ;
 int FUNC_13 (TYPE_6__*,TYPE_8__*) ;
 int FUNC_14 (int) ;

__attribute__((used)) static int FUNC_15(InputFilter *VAR_4, AVFrame *VAR_5)
{
    FilterGraph *VAR_6 = VAR_4->graph;
    int VAR_7, VAR_8, VAR_9;


    VAR_7 = VAR_4->format != VAR_5->format;

    switch (VAR_4->ist->st->codecpar->codec_type) {
    case 129:
        VAR_7 |= VAR_4->sample_rate != VAR_5->sample_rate ||
                       VAR_4->channels != VAR_5->channels ||
                       VAR_4->channel_layout != VAR_5->channel_layout;
        break;
    case 128:
        VAR_7 |= VAR_4->width != VAR_5->width ||
                       VAR_4->height != VAR_5->height;
        break;
    }

    if (!VAR_4->ist->reinit_filters && VAR_6->graph)
        VAR_7 = 0;

    if (!!VAR_4->hw_frames_ctx != !!VAR_5->hw_frames_ctx ||
        (VAR_4->hw_frames_ctx && VAR_4->hw_frames_ctx->data != VAR_5->hw_frames_ctx->data))
        VAR_7 = 1;

    if (VAR_7) {
        VAR_8 = FUNC_13(VAR_4, VAR_5);
        if (VAR_8 < 0)
            return VAR_8;
    }


    if (VAR_7 || !VAR_6->graph) {
        for (VAR_9 = 0; VAR_9 < VAR_6->nb_inputs; VAR_9++) {
            if (!FUNC_12(VAR_6)) {
                AVFrame *VAR_10 = FUNC_7(VAR_5);
                if (!VAR_10)
                    return FUNC_0(VAR_3);
                FUNC_9(VAR_5);

                if (!FUNC_6(VAR_4->frame_queue)) {
                    VAR_8 = FUNC_4(VAR_4->frame_queue, 2 * FUNC_5(VAR_4->frame_queue));
                    if (VAR_8 < 0) {
                        FUNC_8(&VAR_10);
                        return VAR_8;
                    }
                }
                FUNC_3(VAR_4->frame_queue, &VAR_10, sizeof(VAR_10), ((void*)0));
                return 0;
            }
        }

        VAR_8 = FUNC_14(1);
        if (VAR_8 < 0 && VAR_8 != VAR_0) {
            FUNC_10(((void*)0), VAR_2, "Error while filtering: %s\n", FUNC_2(VAR_8));
            return VAR_8;
        }

        VAR_8 = FUNC_11(VAR_6);
        if (VAR_8 < 0) {
            FUNC_10(((void*)0), VAR_2, "Error reinitializing filters!\n");
            return VAR_8;
        }
    }

    VAR_8 = FUNC_1(VAR_4->filter, VAR_5, VAR_1);
    if (VAR_8 < 0) {
        if (VAR_8 != VAR_0)
            FUNC_10(((void*)0), VAR_2, "Error while filtering: %s\n", FUNC_2(VAR_8));
        return VAR_8;
    }

    return 0;
}
