
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WriterContext ;
struct TYPE_7__ {int metadata; int time_base; int end; int start; int id; } ;
struct TYPE_6__ {int nb_chapters; TYPE_3__** chapters; } ;
struct TYPE_5__ {TYPE_2__* fmt_ctx; } ;
typedef TYPE_1__ InputFile ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVChapter ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,int ,char) ;
 int FUNC_2 (char*,int ,int *) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static int FUNC_6(WriterContext *VAR_4, InputFile *VAR_5)
{
    AVFormatContext *VAR_6 = VAR_5->fmt_ctx;
    int VAR_7, VAR_8 = 0;

    FUNC_5(VAR_4, VAR_1);
    for (VAR_7 = 0; VAR_7 < VAR_6->nb_chapters; VAR_7++) {
        AVChapter *VAR_9 = VAR_6->chapters[VAR_7];

        FUNC_5(VAR_4, VAR_0);
        FUNC_0("id", VAR_9->id);
        FUNC_1 ("time_base", VAR_9->time_base, '/');
        FUNC_0("start", VAR_9->start);
        FUNC_2("start_time", VAR_9->start, &VAR_9->time_base);
        FUNC_0("end", VAR_9->end);
        FUNC_2("end_time", VAR_9->end, &VAR_9->time_base);
        if (VAR_3)
            VAR_8 = FUNC_3(VAR_4, VAR_9->metadata, VAR_2);
        FUNC_4(VAR_4);
    }
    FUNC_4(VAR_4);

    return VAR_8;
}
