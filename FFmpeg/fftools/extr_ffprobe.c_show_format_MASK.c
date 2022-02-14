
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
typedef int WriterContext ;
struct TYPE_7__ {scalar_t__ bit_rate; int metadata; int probe_score; int duration; int start_time; TYPE_1__* iformat; int nb_programs; int nb_streams; int url; scalar_t__ pb; } ;
struct TYPE_6__ {TYPE_3__* fmt_ctx; } ;
struct TYPE_5__ {scalar_t__ long_name; scalar_t__ name; } ;
typedef TYPE_2__ InputFile ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,scalar_t__) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ,int *) ;
 int FUNC_7 (char*,scalar_t__,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ) ;

__attribute__((used)) static int FUNC_11(WriterContext *VAR_8, InputFile *VAR_9)
{
    AVFormatContext *VAR_10 = VAR_9->fmt_ctx;
    char VAR_11[128];
    int64_t VAR_12 = VAR_10->pb ? FUNC_0(VAR_10->pb) : -1;
    int VAR_13 = 0;

    FUNC_10(VAR_8, VAR_1);
    FUNC_5("filename", VAR_10->url);
    FUNC_2("nb_streams", VAR_10->nb_streams);
    FUNC_2("nb_programs", VAR_10->nb_programs);
    FUNC_3("format_name", VAR_10->iformat->name);
    if (!VAR_3) {
        if (VAR_10->iformat->long_name) FUNC_3 ("format_long_name", VAR_10->iformat->long_name);
        else FUNC_4("format_long_name", "unknown");
    }
    FUNC_6("start_time", VAR_10->start_time, &VAR_0);
    FUNC_6("duration", VAR_10->duration, &VAR_0);
    if (VAR_12 >= 0) FUNC_7 ("size", VAR_12, VAR_7);
    else FUNC_4("size", "N/A");
    if (VAR_10->bit_rate > 0) FUNC_7 ("bit_rate", VAR_10->bit_rate, VAR_6);
    else FUNC_4("bit_rate", "N/A");
    FUNC_2("probe_score", VAR_10->probe_score);
    if (VAR_4)
        VAR_13 = FUNC_8(VAR_8, VAR_10->metadata, VAR_2);

    FUNC_9(VAR_8);
    FUNC_1(VAR_5);
    return VAR_13;
}
