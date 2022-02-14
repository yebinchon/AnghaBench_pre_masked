
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ buffer; } ;
struct TYPE_19__ {int nb_inputs; TYPE_1__* priv; TYPE_4__** outputs; } ;
struct TYPE_18__ {int format; int sample_rate; int channels; int channel_layout; } ;
struct TYPE_17__ {int nb_samples; int* linesize; int nb_extended_buf; void** data; void** extended_data; int pts; int format; int sample_rate; int channels; int channel_layout; void** extended_buf; void** buf; } ;
struct TYPE_16__ {size_t input; size_t in_channel_idx; } ;
struct TYPE_15__ {int nb_channels; TYPE_3__** input_frames; TYPE_6__** buffers; TYPE_2__* channels; } ;
typedef TYPE_1__ JoinContext ;
typedef TYPE_2__ ChannelMap ;
typedef TYPE_3__ AVFrame ;
typedef TYPE_4__ AVFilterLink ;
typedef TYPE_5__ AVFilterContext ;
typedef TYPE_6__ AVBufferRef ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (void**) ;
 int VAR_2 ;
 void* FUNC_3 (TYPE_6__*) ;
 TYPE_3__* FUNC_4 () ;
 int FUNC_5 (TYPE_3__**) ;
 TYPE_6__* FUNC_6 (TYPE_3__*,size_t) ;
 void* FUNC_7 (int,int) ;
 int FUNC_8 (TYPE_4__*,TYPE_3__*) ;
 int FUNC_9 (void**,void**,int) ;

__attribute__((used)) static int FUNC_10(AVFilterContext *VAR_3)
{
    AVFilterLink *VAR_4 = VAR_3->outputs[0];
    JoinContext *VAR_5 = VAR_3->priv;
    AVFrame *VAR_6;
    int VAR_7 = VAR_2;
    int VAR_8 = VAR_2;
    int VAR_9 = 0;
    int VAR_10, VAR_11, VAR_12;

    for (VAR_10 = 0; VAR_10 < VAR_3->nb_inputs; VAR_10++) {
        if (!VAR_5->input_frames[VAR_10])
            return 0;
        VAR_8 = FUNC_1(VAR_8, VAR_5->input_frames[VAR_10]->nb_samples);
    }
    if (!VAR_8)
        return 0;


    VAR_6 = FUNC_4();
    if (!VAR_6)
        return FUNC_0(VAR_1);
    if (VAR_5->nb_channels > FUNC_2(VAR_6->data)) {
        VAR_6->extended_data = FUNC_7(VAR_5->nb_channels,
                                          sizeof(*VAR_6->extended_data));
        if (!VAR_6->extended_data) {
            VAR_12 = FUNC_0(VAR_1);
            goto fail;
        }
    }


    for (VAR_10 = 0; VAR_10 < VAR_5->nb_channels; VAR_10++) {
        ChannelMap *VAR_13 = &VAR_5->channels[VAR_10];
        AVFrame *VAR_14 = VAR_5->input_frames[VAR_13->input];
        AVBufferRef *VAR_15;

        VAR_6->extended_data[VAR_10] = VAR_14->extended_data[VAR_13->in_channel_idx];
        VAR_7 = FUNC_1(VAR_7, VAR_14->linesize[0]);



        VAR_15 = FUNC_6(VAR_14, VAR_13->in_channel_idx);
        if (!VAR_15) {
            VAR_12 = FUNC_0(VAR_0);
            goto fail;
        }
        for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++)
            if (VAR_5->buffers[VAR_11]->buffer == VAR_15->buffer)
                break;
        if (VAR_11 == VAR_10)
            VAR_5->buffers[VAR_9++] = VAR_15;
    }


    if (VAR_9 > FUNC_2(VAR_6->buf)) {
        VAR_6->nb_extended_buf = VAR_9 - FUNC_2(VAR_6->buf);
        VAR_6->extended_buf = FUNC_7(VAR_6->nb_extended_buf,
                                               sizeof(*VAR_6->extended_buf));
        if (!VAR_6->extended_buf) {
            VAR_6->nb_extended_buf = 0;
            VAR_12 = FUNC_0(VAR_1);
            goto fail;
        }
    }
    for (VAR_10 = 0; VAR_10 < FUNC_1(FUNC_2(VAR_6->buf), VAR_9); VAR_10++) {
        VAR_6->buf[VAR_10] = FUNC_3(VAR_5->buffers[VAR_10]);
        if (!VAR_6->buf[VAR_10]) {
            VAR_12 = FUNC_0(VAR_1);
            goto fail;
        }
    }
    for (VAR_10 = 0; VAR_10 < VAR_6->nb_extended_buf; VAR_10++) {
        VAR_6->extended_buf[VAR_10] = FUNC_3(VAR_5->buffers[VAR_10 +
                                               FUNC_2(VAR_6->buf)]);
        if (!VAR_6->extended_buf[VAR_10]) {
            VAR_12 = FUNC_0(VAR_1);
            goto fail;
        }
    }

    VAR_6->nb_samples = VAR_8;
    VAR_6->channel_layout = VAR_4->channel_layout;
    VAR_6->channels = VAR_4->channels;
    VAR_6->sample_rate = VAR_4->sample_rate;
    VAR_6->format = VAR_4->format;
    VAR_6->pts = VAR_5->input_frames[0]->pts;
    VAR_6->linesize[0] = VAR_7;
    if (VAR_6->data != VAR_6->extended_data) {
        FUNC_9(VAR_6->data, VAR_6->extended_data, sizeof(*VAR_6->data) *
               FUNC_1(FUNC_2(VAR_6->data), VAR_5->nb_channels));
    }

    VAR_12 = FUNC_8(VAR_4, VAR_6);

    for (VAR_10 = 0; VAR_10 < VAR_3->nb_inputs; VAR_10++)
        FUNC_5(&VAR_5->input_frames[VAR_10]);

    return VAR_12;

fail:
    FUNC_5(&VAR_6);
    return VAR_12;
}
