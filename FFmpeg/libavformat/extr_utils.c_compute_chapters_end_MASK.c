
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_5__ {scalar_t__ end; scalar_t__ start; int time_base; } ;
struct TYPE_4__ {scalar_t__ duration; scalar_t__ start_time; unsigned int nb_chapters; TYPE_2__** chapters; } ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ AVChapter ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_1(AVFormatContext *VAR_3)
{
    unsigned int VAR_4, VAR_5;
    int64_t VAR_6 = 0;

    if (VAR_3->duration > 0 && VAR_3->start_time < VAR_2 - VAR_3->duration)
        VAR_6 = VAR_3->duration +
                       ((VAR_3->start_time == VAR_0) ? 0 : VAR_3->start_time);

    for (VAR_4 = 0; VAR_4 < VAR_3->nb_chapters; VAR_4++)
        if (VAR_3->chapters[VAR_4]->end == VAR_0) {
            AVChapter *VAR_7 = VAR_3->chapters[VAR_4];
            int64_t VAR_8 = VAR_6 ? FUNC_0(VAR_6, VAR_1,
                                                  VAR_7->time_base)
                                   : VAR_2;

            for (VAR_5 = 0; VAR_5 < VAR_3->nb_chapters; VAR_5++) {
                AVChapter *VAR_9 = VAR_3->chapters[VAR_5];
                int64_t VAR_10 = FUNC_0(VAR_9->start, VAR_9->time_base,
                                                  VAR_7->time_base);
                if (VAR_5 != VAR_4 && VAR_10 > VAR_7->start && VAR_10 < VAR_8)
                    VAR_8 = VAR_10;
            }
            VAR_7->end = (VAR_8 == VAR_2 || VAR_8 < VAR_7->start) ? VAR_7->start : VAR_8;
        }
}
