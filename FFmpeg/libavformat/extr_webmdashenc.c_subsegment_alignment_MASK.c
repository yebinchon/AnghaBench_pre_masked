
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {int value; } ;
struct TYPE_10__ {TYPE_1__** streams; } ;
struct TYPE_9__ {size_t* streams; int nb_streams; } ;
struct TYPE_8__ {int metadata; } ;
typedef TYPE_2__ AdaptationSet ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVDictionaryEntry ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int ,int ,int *,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_1, AdaptationSet *VAR_2) {
    int VAR_3;
    AVDictionaryEntry *VAR_4 = FUNC_0(VAR_1->streams[VAR_2->streams[0]]->metadata,
                                          VAR_0, ((void*)0), 0);
    if (!VAR_4) return 0;
    for (VAR_3 = 1; VAR_3 < VAR_2->nb_streams; VAR_3++) {
        AVDictionaryEntry *VAR_5 = FUNC_0(VAR_1->streams[VAR_2->streams[VAR_3]]->metadata,
                                            VAR_0, ((void*)0), 0);
        if (!VAR_5 || FUNC_2(VAR_4->value, VAR_5->value, FUNC_1(VAR_4->value))) return 0;
    }
    return 1;
}
