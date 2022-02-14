
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int type; int format; int out_tmp; TYPE_1__* ost; } ;
struct TYPE_6__ {int source_index; int index; int file_index; scalar_t__ filters_script; scalar_t__ filters; scalar_t__ avfilter; scalar_t__ stream_copy; TYPE_2__* filter; } ;
typedef TYPE_1__ OutputStream ;
typedef TYPE_2__ OutputFilter ;
typedef int OptionsContext ;
typedef int AVFormatContext ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int *,int *,int) ;
 TYPE_1__* FUNC_4 (int *,int *,int) ;

__attribute__((used)) static void FUNC_5(OutputFilter *VAR_2, OptionsContext *VAR_3,
                               AVFormatContext *VAR_4)
{
    OutputStream *VAR_5;

    switch (VAR_2->type) {
    case 128: VAR_5 = FUNC_4(VAR_3, VAR_4, -1); break;
    case 129: VAR_5 = FUNC_3(VAR_3, VAR_4, -1); break;
    default:
        FUNC_0(((void*)0), VAR_1, "Only video and audio filters are supported "
               "currently.\n");
        FUNC_2(1);
    }

    VAR_5->source_index = -1;
    VAR_5->filter = VAR_2;

    VAR_2->ost = VAR_5;
    VAR_2->format = -1;

    if (VAR_5->stream_copy) {
        FUNC_0(((void*)0), VAR_0, "Streamcopy requested for output stream %d:%d, "
               "which is fed from a complex filtergraph. Filtering and streamcopy "
               "cannot be used together.\n", VAR_5->file_index, VAR_5->index);
        FUNC_2(1);
    }

    if (VAR_5->avfilter && (VAR_5->filters || VAR_5->filters_script)) {
        const char *VAR_6 = VAR_5->filters ? "-vf/-af/-filter" : "-filter_script";
        FUNC_0(((void*)0), VAR_0,
               "%s '%s' was specified through the %s option "
               "for output stream %d:%d, which is fed from a complex filtergraph.\n"
               "%s and -filter_complex cannot be used together for the same stream.\n",
               VAR_5->filters ? "Filtergraph" : "Filtergraph script",
               VAR_5->filters ? VAR_5->filters : VAR_5->filters_script,
               VAR_6, VAR_5->file_index, VAR_5->index, VAR_6);
        FUNC_2(1);
    }

    FUNC_1(&VAR_2->out_tmp);
}
