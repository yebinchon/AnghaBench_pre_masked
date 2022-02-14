
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_49__ TYPE_9__ ;
typedef struct TYPE_48__ TYPE_8__ ;
typedef struct TYPE_47__ TYPE_7__ ;
typedef struct TYPE_46__ TYPE_6__ ;
typedef struct TYPE_45__ TYPE_5__ ;
typedef struct TYPE_44__ TYPE_4__ ;
typedef struct TYPE_43__ TYPE_3__ ;
typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_26__ ;
typedef struct TYPE_40__ TYPE_21__ ;
typedef struct TYPE_39__ TYPE_1__ ;
typedef struct TYPE_38__ TYPE_16__ ;
typedef struct TYPE_37__ TYPE_13__ ;
typedef struct TYPE_36__ TYPE_12__ ;
typedef struct TYPE_35__ TYPE_11__ ;
typedef struct TYPE_34__ TYPE_10__ ;


typedef int tmp ;
typedef int args ;
struct TYPE_49__ {TYPE_8__* ost; int channel_layout; int sample_rate; int height; int width; int format; int * filter; } ;
struct TYPE_48__ {char* avfilter; char const* file_index; char const* index; TYPE_6__* enc_ctx; TYPE_5__* filter; TYPE_4__* enc; TYPE_3__* st; int encoder_opts; int resample_opts; int swr_opts; int sws_dict; } ;
struct TYPE_47__ {scalar_t__ sub_queue; scalar_t__ frame; } ;
struct TYPE_46__ {int frame_size; } ;
struct TYPE_45__ {int filter; } ;
struct TYPE_44__ {scalar_t__ type; int capabilities; } ;
struct TYPE_43__ {TYPE_2__* codecpar; } ;
struct TYPE_42__ {int codec_id; } ;
struct TYPE_41__ {int nb_filters; TYPE_1__** filters; int nb_threads; int scale_sws_opts; } ;
struct TYPE_40__ {TYPE_10__* ist; int filter; scalar_t__ eof; scalar_t__ frame_queue; } ;
struct TYPE_39__ {int hw_device_ctx; } ;
struct TYPE_38__ {int * device_ref; } ;
struct TYPE_37__ {char* value; int key; } ;
struct TYPE_36__ {struct TYPE_36__* next; } ;
struct TYPE_35__ {char* graph_desc; int nb_outputs; int reconfiguration; int nb_inputs; TYPE_21__** inputs; TYPE_9__** outputs; TYPE_26__* graph; } ;
struct TYPE_34__ {TYPE_7__ sub2video; } ;
typedef TYPE_8__ OutputStream ;
typedef TYPE_9__ OutputFilter ;
typedef TYPE_10__ InputStream ;
typedef TYPE_11__ FilterGraph ;
typedef int * AVSubtitle ;
typedef int AVFrame ;
typedef TYPE_12__ AVFilterInOut ;
typedef int AVFilterContext ;
typedef TYPE_13__ AVDictionaryEntry ;
typedef int AVBufferRef ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int *) ;
 TYPE_13__* FUNC_9 (int ,char*,TYPE_13__*,int ) ;
 int FUNC_10 (scalar_t__,int **,int,int *) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (int **) ;
 int FUNC_13 (int *,int ,char*,char const*,char const*,char const*) ;
 int FUNC_14 (TYPE_26__*,char*,char*,int ) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*,int,char*,int ,char*) ;
 char const* FUNC_17 (int ) ;
 TYPE_26__* FUNC_18 () ;
 int FUNC_19 (TYPE_26__*,int *) ;
 int FUNC_20 (TYPE_26__*,char const*,TYPE_12__**,TYPE_12__**) ;
 int FUNC_21 (TYPE_12__**) ;
 int FUNC_22 (int **) ;
 int FUNC_23 (TYPE_11__*) ;
 int FUNC_24 (TYPE_11__*,TYPE_21__*,TYPE_12__*) ;
 int FUNC_25 (TYPE_11__*,TYPE_9__*,TYPE_12__*) ;
 int VAR_6 ;
 TYPE_16__* VAR_7 ;
 int VAR_8 ;
 int FUNC_26 (TYPE_11__*) ;
 int * VAR_9 ;
 int FUNC_27 (char*) ;
 int FUNC_28 (TYPE_10__*,int **) ;

int FUNC_29(FilterGraph *VAR_10)
{
    AVFilterInOut *VAR_11, *VAR_12, *VAR_13;
    int VAR_14, VAR_15, VAR_16 = FUNC_26(VAR_10);
    const char *VAR_17 = VAR_16 ? VAR_10->outputs[0]->ost->avfilter :
                                      VAR_10->graph_desc;

    FUNC_23(VAR_10);
    if (!(VAR_10->graph = FUNC_18()))
        return FUNC_0(VAR_5);

    if (VAR_16) {
        OutputStream *VAR_18 = VAR_10->outputs[0]->ost;
        char VAR_19[512];
        AVDictionaryEntry *VAR_20 = ((void*)0);

        VAR_10->graph->nb_threads = VAR_8;

        VAR_19[0] = 0;
        while ((VAR_20 = FUNC_9(VAR_18->sws_dict, "", VAR_20,
                                VAR_2))) {
            FUNC_16(VAR_19, sizeof(VAR_19), "%s=%s:", VAR_20->key, VAR_20->value);
        }
        if (FUNC_27(VAR_19))
            VAR_19[FUNC_27(VAR_19)-1] = 0;
        VAR_10->graph->scale_sws_opts = FUNC_15(VAR_19);

        VAR_19[0] = 0;
        while ((VAR_20 = FUNC_9(VAR_18->swr_opts, "", VAR_20,
                                VAR_2))) {
            FUNC_16(VAR_19, sizeof(VAR_19), "%s=%s:", VAR_20->key, VAR_20->value);
        }
        if (FUNC_27(VAR_19))
            VAR_19[FUNC_27(VAR_19)-1] = 0;
        FUNC_14(VAR_10->graph, "aresample_swr_opts", VAR_19, 0);

        VAR_19[0] = '\0';
        while ((VAR_20 = FUNC_9(VAR_10->outputs[0]->ost->resample_opts, "", VAR_20,
                                VAR_2))) {
            FUNC_16(VAR_19, sizeof(VAR_19), "%s=%s:", VAR_20->key, VAR_20->value);
        }
        if (FUNC_27(VAR_19))
            VAR_19[FUNC_27(VAR_19) - 1] = '\0';

        VAR_20 = FUNC_9(VAR_18->encoder_opts, "threads", ((void*)0), 0);
        if (VAR_20)
            FUNC_14(VAR_10->graph, "threads", VAR_20->value, 0);
    } else {
        VAR_10->graph->nb_threads = VAR_6;
    }

    if ((VAR_14 = FUNC_20(VAR_10->graph, VAR_17, &VAR_11, &VAR_12)) < 0)
        goto fail;

    if (VAR_7 || VAR_9) {
        AVBufferRef *VAR_21 = VAR_7 ? VAR_7->device_ref
                                               : VAR_9;
        for (VAR_15 = 0; VAR_15 < VAR_10->graph->nb_filters; VAR_15++) {
            VAR_10->graph->filters[VAR_15]->hw_device_ctx = FUNC_1(VAR_21);
            if (!VAR_10->graph->filters[VAR_15]->hw_device_ctx) {
                VAR_14 = FUNC_0(VAR_5);
                goto fail;
            }
        }
    }

    if (VAR_16 && (!VAR_11 || VAR_11->next || !VAR_12 || VAR_12->next)) {
        const char *VAR_22;
        const char *VAR_23;
        if (!VAR_12) {
            VAR_23 = "0";
        } else if (VAR_12->next) {
            VAR_23 = ">1";
        } else {
            VAR_23 = "1";
        }
        if (!VAR_11) {
            VAR_22 = "0";
        } else if (VAR_11->next) {
            VAR_22 = ">1";
        } else {
            VAR_22 = "1";
        }
        FUNC_13(((void*)0), VAR_3, "Simple filtergraph '%s' was expected "
               "to have exactly 1 input and 1 output."
               " However, it had %s input(s) and %s output(s)."
               " Please adjust, or use a complex filtergraph (-filter_complex) instead.\n",
               VAR_17, VAR_22, VAR_23);
        VAR_14 = FUNC_0(VAR_4);
        goto fail;
    }

    for (VAR_13 = VAR_11, VAR_15 = 0; VAR_13; VAR_13 = VAR_13->next, VAR_15++)
        if ((VAR_14 = FUNC_24(VAR_10, VAR_10->inputs[VAR_15], VAR_13)) < 0) {
            FUNC_21(&VAR_11);
            FUNC_21(&VAR_12);
            goto fail;
        }
    FUNC_21(&VAR_11);

    for (VAR_13 = VAR_12, VAR_15 = 0; VAR_13; VAR_13 = VAR_13->next, VAR_15++)
        FUNC_25(VAR_10, VAR_10->outputs[VAR_15], VAR_13);
    FUNC_21(&VAR_12);

    if ((VAR_14 = FUNC_19(VAR_10->graph, ((void*)0))) < 0)
        goto fail;



    for (VAR_15 = 0; VAR_15 < VAR_10->nb_outputs; VAR_15++) {
        OutputFilter *VAR_24 = VAR_10->outputs[VAR_15];
        AVFilterContext *VAR_25 = VAR_24->filter;

        VAR_24->format = FUNC_3(VAR_25);

        VAR_24->width = FUNC_6(VAR_25);
        VAR_24->height = FUNC_4(VAR_25);

        VAR_24->sample_rate = FUNC_5(VAR_25);
        VAR_24->channel_layout = FUNC_2(VAR_25);
    }

    VAR_10->reconfiguration = 1;

    for (VAR_15 = 0; VAR_15 < VAR_10->nb_outputs; VAR_15++) {
        OutputStream *VAR_26 = VAR_10->outputs[VAR_15]->ost;
        if (!VAR_26->enc) {


            FUNC_13(((void*)0), VAR_3, "Encoder (codec %s) not found for output stream #%d:%d\n",
                     FUNC_17(VAR_26->st->codecpar->codec_id), VAR_26->file_index, VAR_26->index);
            VAR_14 = FUNC_0(VAR_4);
            goto fail;
        }
        if (VAR_26->enc->type == VAR_0 &&
            !(VAR_26->enc->capabilities & VAR_1))
            FUNC_7(VAR_26->filter->filter,
                                         VAR_26->enc_ctx->frame_size);
    }

    for (VAR_15 = 0; VAR_15 < VAR_10->nb_inputs; VAR_15++) {
        while (FUNC_11(VAR_10->inputs[VAR_15]->frame_queue)) {
            AVFrame *VAR_27;
            FUNC_10(VAR_10->inputs[VAR_15]->frame_queue, &VAR_27, sizeof(VAR_27), ((void*)0));
            VAR_14 = FUNC_8(VAR_10->inputs[VAR_15]->filter, VAR_27);
            FUNC_12(&VAR_27);
            if (VAR_14 < 0)
                goto fail;
        }
    }


    for (VAR_15 = 0; VAR_15 < VAR_10->nb_inputs; VAR_15++) {
        if (VAR_10->inputs[VAR_15]->eof) {
            VAR_14 = FUNC_8(VAR_10->inputs[VAR_15]->filter, ((void*)0));
            if (VAR_14 < 0)
                goto fail;
        }
    }


    for (VAR_15 = 0; VAR_15 < VAR_10->nb_inputs; VAR_15++) {
        InputStream *VAR_28 = VAR_10->inputs[VAR_15]->ist;
        if (VAR_28->sub2video.sub_queue && VAR_28->sub2video.frame) {
            while (FUNC_11(VAR_28->sub2video.sub_queue)) {
                AVSubtitle VAR_29;
                FUNC_10(VAR_28->sub2video.sub_queue, &VAR_29, sizeof(VAR_29), ((void*)0));
                FUNC_28(VAR_28, &VAR_29);
                FUNC_22(&VAR_29);
            }
        }
    }

    return 0;

fail:
    FUNC_23(VAR_10);
    return VAR_14;
}
