
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


struct TYPE_20__ {int str; } ;
struct TYPE_19__ {int * metadata; } ;
struct TYPE_18__ {int nb_chapters; TYPE_2__** chapters; int duration; scalar_t__ start_time; int pb; int * metadata; } ;
struct TYPE_17__ {int * metadata; TYPE_1__* codecpar; } ;
struct TYPE_16__ {int time_base; int end; } ;
struct TYPE_15__ {int codec_id; int codec_type; } ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVFormatContext ;
typedef int AVDictionary ;
typedef TYPE_5__ AVChapter ;
typedef TYPE_6__ AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_6__*,int *) ;
 int FUNC_2 (TYPE_6__*,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_3__* FUNC_4 (TYPE_4__*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,TYPE_6__*) ;
 int FUNC_7 (int ,int ,int ) ;
 TYPE_5__* FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int ,int **) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_7)
{
    AVDictionary **VAR_8 = &VAR_7->metadata;
    AVBPrint VAR_9;

    FUNC_2(&VAR_9, 0, VAR_1);

    while(!FUNC_5(VAR_7->pb)) {
        FUNC_6(VAR_7->pb, &VAR_9);

        if (!FUNC_7(VAR_9.str, VAR_6, FUNC_10(VAR_6))) {
            AVStream *VAR_10 = FUNC_4(VAR_7, ((void*)0));

            if (!VAR_10)
                return FUNC_0(VAR_4);

            VAR_10->codecpar->codec_type = VAR_0;
            VAR_10->codecpar->codec_id = VAR_2;

            VAR_8 = &VAR_10->metadata;
        } else if (!FUNC_7(VAR_9.str, VAR_5, FUNC_10(VAR_5))) {
            AVChapter *VAR_11 = FUNC_8(VAR_7);

            if (!VAR_11)
                return FUNC_0(VAR_4);

            VAR_8 = &VAR_11->metadata;
        } else
            FUNC_9(VAR_9.str, VAR_8);
    }

    FUNC_1(&VAR_9, ((void*)0));

    VAR_7->start_time = 0;
    if (VAR_7->nb_chapters)
        VAR_7->duration = FUNC_3(VAR_7->chapters[VAR_7->nb_chapters - 1]->end,
                                   VAR_7->chapters[VAR_7->nb_chapters - 1]->time_base,
                                   VAR_3);

    return 0;
}
