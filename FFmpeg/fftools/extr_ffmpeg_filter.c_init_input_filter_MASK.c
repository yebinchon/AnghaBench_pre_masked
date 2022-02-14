
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_9__ ;
typedef struct TYPE_32__ TYPE_8__ ;
typedef struct TYPE_31__ TYPE_7__ ;
typedef struct TYPE_30__ TYPE_6__ ;
typedef struct TYPE_29__ TYPE_5__ ;
typedef struct TYPE_28__ TYPE_4__ ;
typedef struct TYPE_27__ TYPE_3__ ;
typedef struct TYPE_26__ TYPE_2__ ;
typedef struct TYPE_25__ TYPE_1__ ;
typedef struct TYPE_24__ TYPE_19__ ;
typedef struct TYPE_23__ TYPE_12__ ;
typedef struct TYPE_22__ TYPE_10__ ;


typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
struct TYPE_33__ {int nb_streams; TYPE_8__** streams; } ;
struct TYPE_32__ {size_t index; TYPE_1__* codecpar; } ;
struct TYPE_31__ {int nb_inputs; TYPE_19__** inputs; int graph_desc; } ;
struct TYPE_30__ {scalar_t__ user_set_discard; int nb_filters; TYPE_19__** filters; TYPE_5__* st; int decoding_needed; scalar_t__ discard; TYPE_2__* dec_ctx; } ;
struct TYPE_29__ {TYPE_4__* codecpar; int discard; } ;
struct TYPE_28__ {int codec_type; } ;
struct TYPE_27__ {int name; int input_pads; } ;
struct TYPE_26__ {int codec_type; } ;
struct TYPE_25__ {int codec_type; } ;
struct TYPE_24__ {int format; int frame_queue; int name; int type; TYPE_7__* graph; TYPE_6__* ist; } ;
struct TYPE_23__ {size_t ist_index; TYPE_9__* ctx; } ;
struct TYPE_22__ {char* pad_idx; TYPE_3__* filter_ctx; scalar_t__ name; } ;
typedef TYPE_6__ InputStream ;
typedef TYPE_7__ FilterGraph ;
typedef TYPE_8__ AVStream ;
typedef int AVFrame ;
typedef TYPE_9__ AVFormatContext ;
typedef TYPE_10__ AVFilterInOut ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_19__**,int) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ,char*,...) ;
 TYPE_19__* FUNC_4 (int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (TYPE_9__*,TYPE_8__*,char*) ;
 int FUNC_7 (TYPE_7__*,TYPE_10__*,int) ;
 int FUNC_8 (int) ;
 TYPE_12__** VAR_7 ;
 TYPE_6__** VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (scalar_t__,char**,int ) ;

__attribute__((used)) static void FUNC_10(FilterGraph *VAR_11, AVFilterInOut *VAR_12)
{
    InputStream *VAR_13 = ((void*)0);
    enum AVMediaType VAR_14 = FUNC_5(VAR_12->filter_ctx->input_pads, VAR_12->pad_idx);
    int VAR_15;


    if (VAR_14 != VAR_4 && VAR_14 != VAR_2) {
        FUNC_3(((void*)0), VAR_5, "Only video and audio filters supported "
               "currently.\n");
        FUNC_8(1);
    }

    if (VAR_12->name) {
        AVFormatContext *VAR_16;
        AVStream *VAR_17 = ((void*)0);
        char *VAR_18;
        int VAR_19 = FUNC_9(VAR_12->name, &VAR_18, 0);

        if (VAR_19 < 0 || VAR_19 >= VAR_9) {
            FUNC_3(((void*)0), VAR_5, "Invalid file index %d in filtergraph description %s.\n",
                   VAR_19, VAR_11->graph_desc);
            FUNC_8(1);
        }
        VAR_16 = VAR_7[VAR_19]->ctx;

        for (VAR_15 = 0; VAR_15 < VAR_16->nb_streams; VAR_15++) {
            enum AVMediaType VAR_20 = VAR_16->streams[VAR_15]->codecpar->codec_type;
            if (VAR_20 != VAR_14 &&
                !(VAR_20 == VAR_3 &&
                  VAR_14 == VAR_4 ))
                continue;
            if (FUNC_6(VAR_16, VAR_16->streams[VAR_15], *VAR_18 == ':' ? VAR_18 + 1 : VAR_18) == 1) {
                VAR_17 = VAR_16->streams[VAR_15];
                break;
            }
        }
        if (!VAR_17) {
            FUNC_3(((void*)0), VAR_5, "Stream specifier '%s' in filtergraph description %s "
                   "matches no streams.\n", VAR_18, VAR_11->graph_desc);
            FUNC_8(1);
        }
        VAR_13 = VAR_8[VAR_7[VAR_19]->ist_index + VAR_17->index];
        if (VAR_13->user_set_discard == VAR_0) {
            FUNC_3(((void*)0), VAR_5, "Stream specifier '%s' in filtergraph description %s "
                   "matches a disabled input stream.\n", VAR_18, VAR_11->graph_desc);
            FUNC_8(1);
        }
    } else {

        for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
            VAR_13 = VAR_8[VAR_15];
            if (VAR_13->user_set_discard == VAR_0)
                continue;
            if (VAR_13->dec_ctx->codec_type == VAR_14 && VAR_13->discard)
                break;
        }
        if (VAR_15 == VAR_10) {
            FUNC_3(((void*)0), VAR_5, "Cannot find a matching stream for "
                   "unlabeled input pad %d on filter %s\n", VAR_12->pad_idx,
                   VAR_12->filter_ctx->name);
            FUNC_8(1);
        }
    }
    FUNC_1(VAR_13);

    VAR_13->discard = 0;
    VAR_13->decoding_needed |= VAR_6;
    VAR_13->st->discard = VAR_1;

    FUNC_0(VAR_11->inputs, VAR_11->nb_inputs);
    if (!(VAR_11->inputs[VAR_11->nb_inputs - 1] = FUNC_4(sizeof(*VAR_11->inputs[0]))))
        FUNC_8(1);
    VAR_11->inputs[VAR_11->nb_inputs - 1]->ist = VAR_13;
    VAR_11->inputs[VAR_11->nb_inputs - 1]->graph = VAR_11;
    VAR_11->inputs[VAR_11->nb_inputs - 1]->format = -1;
    VAR_11->inputs[VAR_11->nb_inputs - 1]->type = VAR_13->st->codecpar->codec_type;
    VAR_11->inputs[VAR_11->nb_inputs - 1]->name = FUNC_7(VAR_11, VAR_12, 1);

    VAR_11->inputs[VAR_11->nb_inputs - 1]->frame_queue = FUNC_2(8 * sizeof(AVFrame*));
    if (!VAR_11->inputs[VAR_11->nb_inputs - 1]->frame_queue)
        FUNC_8(1);

    FUNC_0(VAR_13->filters, VAR_13->nb_filters);
    VAR_13->filters[VAR_13->nb_filters - 1] = VAR_11->inputs[VAR_11->nb_inputs - 1];
}
