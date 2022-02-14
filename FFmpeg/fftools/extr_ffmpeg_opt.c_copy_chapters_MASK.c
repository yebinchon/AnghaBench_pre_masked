
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ int64_t ;
struct TYPE_13__ {scalar_t__ end; scalar_t__ start; int metadata; int time_base; int id; } ;
struct TYPE_12__ {int nb_chapters; TYPE_4__** chapters; } ;
struct TYPE_11__ {scalar_t__ ts_offset; TYPE_3__* ctx; } ;
struct TYPE_10__ {scalar_t__ start_time; scalar_t__ recording_time; TYPE_3__* ctx; } ;
typedef TYPE_1__ OutputFile ;
typedef TYPE_2__ InputFile ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVChapter ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,int ,int ) ;
 TYPE_4__* FUNC_4 (int) ;
 TYPE_4__** FUNC_5 (TYPE_4__**,int,int) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_7(InputFile *VAR_4, OutputFile *VAR_5, int VAR_6)
{
    AVFormatContext *VAR_7 = VAR_4->ctx;
    AVFormatContext *VAR_8 = VAR_5->ctx;
    AVChapter **VAR_9;
    int VAR_10;

    VAR_9 = FUNC_5(VAR_8->chapters, VAR_7->nb_chapters + VAR_8->nb_chapters, sizeof(*VAR_8->chapters));
    if (!VAR_9)
        return FUNC_0(VAR_2);
    VAR_8->chapters = VAR_9;

    for (VAR_10 = 0; VAR_10 < VAR_7->nb_chapters; VAR_10++) {
        AVChapter *VAR_11 = VAR_7->chapters[VAR_10], *VAR_12;
        int64_t VAR_13 = (VAR_5->start_time == VAR_0) ? 0 : VAR_5->start_time;
        int64_t VAR_14 = FUNC_6(VAR_13 - VAR_4->ts_offset,
                                       VAR_1, VAR_11->time_base);
        int64_t VAR_15 = (VAR_5->recording_time == VAR_3) ? VAR_3 :
                           FUNC_6(VAR_5->recording_time, VAR_1, VAR_11->time_base);


        if (VAR_11->end < VAR_14)
            continue;
        if (VAR_15 != VAR_3 && VAR_11->start > VAR_15 + VAR_14)
            break;

        VAR_12 = FUNC_4(sizeof(AVChapter));
        if (!VAR_12)
            return FUNC_0(VAR_2);

        VAR_12->id = VAR_11->id;
        VAR_12->time_base = VAR_11->time_base;
        VAR_12->start = FUNC_1(0, VAR_11->start - VAR_14);
        VAR_12->end = FUNC_2(VAR_15, VAR_11->end - VAR_14);

        if (VAR_6)
            FUNC_3(&VAR_12->metadata, VAR_11->metadata, 0);

        VAR_8->chapters[VAR_8->nb_chapters++] = VAR_12;
    }
    return 0;
}
