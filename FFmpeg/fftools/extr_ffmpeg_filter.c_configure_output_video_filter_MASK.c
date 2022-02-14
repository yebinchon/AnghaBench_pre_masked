
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int name ;
typedef int args ;
struct TYPE_21__ {int value; int key; } ;
struct TYPE_20__ {int pad_idx; int * filter_ctx; } ;
struct TYPE_19__ {int graph; } ;
struct TYPE_18__ {int recording_time; int start_time; } ;
struct TYPE_17__ {size_t width; int height; int * filter; TYPE_2__* ost; } ;
struct TYPE_15__ {size_t num; int den; } ;
struct TYPE_16__ {size_t file_index; int index; TYPE_1__ frame_rate; int sws_dict; } ;
typedef TYPE_2__ OutputStream ;
typedef TYPE_3__ OutputFilter ;
typedef TYPE_4__ OutputFile ;
typedef TYPE_5__ FilterGraph ;
typedef TYPE_6__ AVFilterInOut ;
typedef int AVFilterContext ;
typedef TYPE_7__ AVDictionaryEntry ;


 int VAR_0 ;
 TYPE_7__* FUNC_0 (int ,char*,TYPE_7__*,int ) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (char*,int,char*,int ,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int **,int ,char*,char*,int *,int ) ;
 int FUNC_5 (int *,int,int *,int ) ;
 char* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int ,int ,int **,int*,char*) ;
 TYPE_4__** VAR_1 ;
 int FUNC_8 (char*,int,char*,size_t,int) ;

__attribute__((used)) static int FUNC_9(FilterGraph *VAR_2, OutputFilter *VAR_3, AVFilterInOut *VAR_4)
{
    char *VAR_5;
    OutputStream *VAR_6 = VAR_3->ost;
    OutputFile *VAR_7 = VAR_1[VAR_6->file_index];
    AVFilterContext *VAR_8 = VAR_4->filter_ctx;
    int VAR_9 = VAR_4->pad_idx;
    int VAR_10;
    char VAR_11[255];

    FUNC_8(VAR_11, sizeof(VAR_11), "out_%d_%d", VAR_6->file_index, VAR_6->index);
    VAR_10 = FUNC_4(&VAR_3->filter,
                                       FUNC_3("buffersink"),
                                       VAR_11, ((void*)0), ((void*)0), VAR_2->graph);

    if (VAR_10 < 0)
        return VAR_10;

    if (VAR_3->width || VAR_3->height) {
        char VAR_12[255];
        AVFilterContext *VAR_13;
        AVDictionaryEntry *VAR_14 = ((void*)0);

        FUNC_8(VAR_12, sizeof(VAR_12), "%d:%d",
                 VAR_3->width, VAR_3->height);

        while ((VAR_14 = FUNC_0(VAR_6->sws_dict, "", VAR_14,
                                VAR_0))) {
            FUNC_2(VAR_12, sizeof(VAR_12), ":%s=%s", VAR_14->key, VAR_14->value);
        }

        FUNC_8(VAR_11, sizeof(VAR_11), "scaler_out_%d_%d",
                 VAR_6->file_index, VAR_6->index);
        if ((VAR_10 = FUNC_4(&VAR_13, FUNC_3("scale"),
                                                VAR_11, VAR_12, ((void*)0), VAR_2->graph)) < 0)
            return VAR_10;
        if ((VAR_10 = FUNC_5(VAR_8, VAR_9, VAR_13, 0)) < 0)
            return VAR_10;

        VAR_8 = VAR_13;
        VAR_9 = 0;
    }

    if ((VAR_5 = FUNC_6(VAR_3))) {
        AVFilterContext *VAR_15;
        FUNC_8(VAR_11, sizeof(VAR_11), "format_out_%d_%d",
                 VAR_6->file_index, VAR_6->index);
        VAR_10 = FUNC_4(&VAR_15,
                                           FUNC_3("format"),
                                           "format", VAR_5, ((void*)0), VAR_2->graph);
        FUNC_1(&VAR_5);
        if (VAR_10 < 0)
            return VAR_10;
        if ((VAR_10 = FUNC_5(VAR_8, VAR_9, VAR_15, 0)) < 0)
            return VAR_10;

        VAR_8 = VAR_15;
        VAR_9 = 0;
    }

    if (VAR_6->frame_rate.num && 0) {
        AVFilterContext *VAR_16;
        char VAR_17[255];

        FUNC_8(VAR_17, sizeof(VAR_17), "fps=%d/%d", VAR_6->frame_rate.num,
                 VAR_6->frame_rate.den);
        FUNC_8(VAR_11, sizeof(VAR_11), "fps_out_%d_%d",
                 VAR_6->file_index, VAR_6->index);
        VAR_10 = FUNC_4(&VAR_16, FUNC_3("fps"),
                                           VAR_11, VAR_17, ((void*)0), VAR_2->graph);
        if (VAR_10 < 0)
            return VAR_10;

        VAR_10 = FUNC_5(VAR_8, VAR_9, VAR_16, 0);
        if (VAR_10 < 0)
            return VAR_10;
        VAR_8 = VAR_16;
        VAR_9 = 0;
    }

    FUNC_8(VAR_11, sizeof(VAR_11), "trim_out_%d_%d",
             VAR_6->file_index, VAR_6->index);
    VAR_10 = FUNC_7(VAR_7->start_time, VAR_7->recording_time,
                      &VAR_8, &VAR_9, VAR_11);
    if (VAR_10 < 0)
        return VAR_10;


    if ((VAR_10 = FUNC_5(VAR_8, VAR_9, VAR_3->filter, 0)) < 0)
        return VAR_10;

    return 0;
}
