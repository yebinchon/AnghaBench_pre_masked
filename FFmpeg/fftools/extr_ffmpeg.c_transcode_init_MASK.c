
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_43__ TYPE_9__ ;
typedef struct TYPE_42__ TYPE_8__ ;
typedef struct TYPE_41__ TYPE_7__ ;
typedef struct TYPE_40__ TYPE_6__ ;
typedef struct TYPE_39__ TYPE_5__ ;
typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_23__ ;
typedef struct TYPE_34__ TYPE_1__ ;
typedef struct TYPE_33__ TYPE_18__ ;
typedef struct TYPE_32__ TYPE_16__ ;
typedef struct TYPE_31__ TYPE_15__ ;
typedef struct TYPE_30__ TYPE_14__ ;
typedef struct TYPE_29__ TYPE_13__ ;
typedef struct TYPE_28__ TYPE_12__ ;
typedef struct TYPE_27__ TYPE_11__ ;
typedef struct TYPE_26__ TYPE_10__ ;


typedef int error ;
struct TYPE_43__ {TYPE_5__* ost; } ;
struct TYPE_42__ {size_t source_index; TYPE_16__* enc; scalar_t__ stream_copy; TYPE_10__* sync_ist; int index; int file_index; TYPE_6__* filter; scalar_t__ attachment_filename; int enc_ctx; } ;
struct TYPE_41__ {int nb_programs; TYPE_13__** programs; } ;
struct TYPE_40__ {char* name; TYPE_23__* graph; } ;
struct TYPE_39__ {int source_index; } ;
struct TYPE_38__ {TYPE_10__* ist; } ;
struct TYPE_37__ {int index; } ;
struct TYPE_36__ {TYPE_23__* graph; int name; } ;
struct TYPE_35__ {char* index; } ;
struct TYPE_34__ {int flags; } ;
struct TYPE_33__ {TYPE_14__* ctx; } ;
struct TYPE_32__ {char* name; int id; } ;
struct TYPE_31__ {char* name; } ;
struct TYPE_30__ {scalar_t__ nb_streams; TYPE_1__* oformat; } ;
struct TYPE_29__ {int nb_stream_indexes; size_t* stream_index; int discard; } ;
struct TYPE_28__ {int nb_outputs; int nb_inputs; TYPE_4__** inputs; TYPE_9__** outputs; } ;
struct TYPE_27__ {int nb_streams; int ist_index; TYPE_7__* ctx; scalar_t__ rate_emu; } ;
struct TYPE_26__ {int nb_filters; TYPE_16__* dec; TYPE_3__* st; int file_index; TYPE_2__** filters; int discard; int start; } ;
typedef TYPE_8__ OutputStream ;
typedef TYPE_9__ OutputFilter ;
typedef TYPE_10__ InputStream ;
typedef TYPE_11__ InputFile ;
typedef TYPE_12__ FilterGraph ;
typedef TYPE_13__ AVProgram ;
typedef TYPE_14__ AVFormatContext ;
typedef TYPE_15__ AVCodecDescriptor ;
typedef TYPE_16__ AVCodec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,char*,...) ;
 int FUNC_3 (int ) ;
 TYPE_15__* FUNC_4 (int ) ;
 int FUNC_5 (TYPE_18__*,int) ;
 int FUNC_6 (TYPE_23__*) ;
 TYPE_12__** VAR_5 ;
 int FUNC_7 (int,char*,int) ;
 int FUNC_8 (TYPE_8__*,char*,int) ;
 TYPE_11__** VAR_6 ;
 TYPE_10__** VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_18__** VAR_13 ;
 TYPE_8__** VAR_14 ;
 int FUNC_9 (char const*,char const*) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_10(void)
{
    int VAR_16 = 0, VAR_17, VAR_18, VAR_19;
    AVFormatContext *VAR_20;
    OutputStream *VAR_21;
    InputStream *VAR_22;
    char VAR_23[1024] = {0};

    for (VAR_17 = 0; VAR_17 < VAR_8; VAR_17++) {
        FilterGraph *VAR_24 = VAR_5[VAR_17];
        for (VAR_18 = 0; VAR_18 < VAR_24->nb_outputs; VAR_18++) {
            OutputFilter *VAR_25 = VAR_24->outputs[VAR_18];
            if (!VAR_25->ost || VAR_25->ost->source_index >= 0)
                continue;
            if (VAR_24->nb_inputs != 1)
                continue;
            for (VAR_19 = VAR_10-1; VAR_19 >= 0 ; VAR_19--)
                if (VAR_24->inputs[0]->ist == VAR_7[VAR_19])
                    break;
            VAR_25->ost->source_index = VAR_19;
        }
    }


    for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++) {
        InputFile *VAR_26 = VAR_6[VAR_17];
        if (VAR_26->rate_emu)
            for (VAR_18 = 0; VAR_18 < VAR_26->nb_streams; VAR_18++)
                VAR_7[VAR_18 + VAR_26->ist_index]->start = FUNC_1();
    }


    for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17++)
        if ((VAR_16 = FUNC_7(VAR_17, VAR_23, sizeof(VAR_23))) < 0) {
            for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++) {
                VAR_21 = VAR_14[VAR_17];
                FUNC_3(VAR_21->enc_ctx);
            }
            goto dump_format;
        }


    for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++) {

        if (VAR_14[VAR_17]->filter)
            continue;

        VAR_16 = FUNC_8(VAR_14[VAR_17], VAR_23, sizeof(VAR_23));
        if (VAR_16 < 0)
            goto dump_format;
    }


    for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++) {
        InputFile *VAR_27 = VAR_6[VAR_17];
        for (VAR_18 = 0; VAR_18 < VAR_27->ctx->nb_programs; VAR_18++) {
            AVProgram *VAR_28 = VAR_27->ctx->programs[VAR_18];
            int VAR_29 = VAR_0;

            for (VAR_19 = 0; VAR_19 < VAR_28->nb_stream_indexes; VAR_19++)
                if (!VAR_7[VAR_27->ist_index + VAR_28->stream_index[VAR_19]]->discard) {
                    VAR_29 = VAR_1;
                    break;
                }
            VAR_28->discard = VAR_29;
        }
    }


    for (VAR_17 = 0; VAR_17 < VAR_11; VAR_17++) {
        VAR_20 = VAR_13[VAR_17]->ctx;
        if (VAR_20->oformat->flags & VAR_2 && VAR_20->nb_streams == 0) {
            VAR_16 = FUNC_5(VAR_13[VAR_17], VAR_17);
            if (VAR_16 < 0)
                goto dump_format;
        }
    }

 dump_format:

    FUNC_2(((void*)0), VAR_4, "Stream mapping:\n");
    for (VAR_17 = 0; VAR_17 < VAR_10; VAR_17++) {
        VAR_22 = VAR_7[VAR_17];

        for (VAR_18 = 0; VAR_18 < VAR_22->nb_filters; VAR_18++) {
            if (!FUNC_6(VAR_22->filters[VAR_18]->graph)) {
                FUNC_2(((void*)0), VAR_4, "  Stream #%d:%d (%s) -> %s",
                       VAR_22->file_index, VAR_22->st->index, VAR_22->dec ? VAR_22->dec->name : "?",
                       VAR_22->filters[VAR_18]->name);
                if (VAR_8 > 1)
                    FUNC_2(((void*)0), VAR_4, " (graph %d)", VAR_22->filters[VAR_18]->graph->index);
                FUNC_2(((void*)0), VAR_4, "\n");
            }
        }
    }

    for (VAR_17 = 0; VAR_17 < VAR_12; VAR_17++) {
        VAR_21 = VAR_14[VAR_17];

        if (VAR_21->attachment_filename) {

            FUNC_2(((void*)0), VAR_4, "  File %s -> Stream #%d:%d\n",
                   VAR_21->attachment_filename, VAR_21->file_index, VAR_21->index);
            continue;
        }

        if (VAR_21->filter && !FUNC_6(VAR_21->filter->graph)) {

            FUNC_2(((void*)0), VAR_4, "  %s", VAR_21->filter->name);
            if (VAR_8 > 1)
                FUNC_2(((void*)0), VAR_4, " (graph %d)", VAR_21->filter->graph->index);

            FUNC_2(((void*)0), VAR_4, " -> Stream #%d:%d (%s)\n", VAR_21->file_index,
                   VAR_21->index, VAR_21->enc ? VAR_21->enc->name : "?");
            continue;
        }

        FUNC_2(((void*)0), VAR_4, "  Stream #%d:%d -> #%d:%d",
               VAR_7[VAR_21->source_index]->file_index,
               VAR_7[VAR_21->source_index]->st->index,
               VAR_21->file_index,
               VAR_21->index);
        if (VAR_21->sync_ist != VAR_7[VAR_21->source_index])
            FUNC_2(((void*)0), VAR_4, " [sync #%d:%d]",
                   VAR_21->sync_ist->file_index,
                   VAR_21->sync_ist->st->index);
        if (VAR_21->stream_copy)
            FUNC_2(((void*)0), VAR_4, " (copy)");
        else {
            const AVCodec *VAR_30 = VAR_7[VAR_21->source_index]->dec;
            const AVCodec *VAR_31 = VAR_21->enc;
            const char *VAR_32 = "?";
            const char *VAR_33 = "?";
            const char *VAR_34 = "?";
            const char *VAR_35 = "?";
            const AVCodecDescriptor *VAR_36;

            if (VAR_30) {
                VAR_32 = VAR_30->name;
                VAR_36 = FUNC_4(VAR_30->id);
                if (VAR_36)
                    VAR_33 = VAR_36->name;
                if (!FUNC_9(VAR_32, VAR_33))
                    VAR_32 = "native";
            }

            if (VAR_31) {
                VAR_34 = VAR_31->name;
                VAR_36 = FUNC_4(VAR_31->id);
                if (VAR_36)
                    VAR_35 = VAR_36->name;
                if (!FUNC_9(VAR_34, VAR_35))
                    VAR_34 = "native";
            }

            FUNC_2(((void*)0), VAR_4, " (%s (%s) -> %s (%s))",
                   VAR_33, VAR_32,
                   VAR_35, VAR_34);
        }
        FUNC_2(((void*)0), VAR_4, "\n");
    }

    if (VAR_16) {
        FUNC_2(((void*)0), VAR_3, "%s\n", VAR_23);
        return VAR_16;
    }

    FUNC_0(&VAR_15, 1);

    return 0;
}
