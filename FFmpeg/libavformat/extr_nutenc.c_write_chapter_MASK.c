
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_14__ {int start; int end; int metadata; } ;
struct TYPE_13__ {int value; int key; } ;
struct TYPE_12__ {TYPE_2__* chapter; TYPE_1__* avf; } ;
struct TYPE_11__ {int time_base; } ;
struct TYPE_10__ {TYPE_5__** chapters; } ;
typedef TYPE_3__ NUTContext ;
typedef int AVIOContext ;
typedef TYPE_4__ AVDictionaryEntry ;
typedef TYPE_5__ AVChapter ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 TYPE_4__* FUNC_1 (int ,char*,TYPE_4__*,int ) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (TYPE_3__*,int ,int *,int) ;

__attribute__((used)) static int FUNC_9(NUTContext *VAR_1, AVIOContext *VAR_2, int VAR_3)
{
    AVIOContext *VAR_4;
    uint8_t *VAR_5 = ((void*)0);
    AVDictionaryEntry *VAR_6 = ((void*)0);
    AVChapter *VAR_7 = VAR_1->avf->chapters[VAR_3];
    int VAR_8, VAR_9, VAR_10 = 0;

    VAR_8 = FUNC_4(&VAR_4);
    if (VAR_8 < 0)
        return VAR_8;

    FUNC_6(VAR_2, 0);
    FUNC_7(VAR_2, VAR_3 + 1);
    FUNC_8(VAR_1, VAR_1->chapter[VAR_3].time_base, VAR_2, VAR_7->start);
    FUNC_6(VAR_2, VAR_7->end - VAR_7->start);

    while ((VAR_6 = FUNC_1(VAR_7->metadata, "", VAR_6, VAR_0)))
        VAR_10 += FUNC_0(VAR_4, VAR_6->key, VAR_6->value);

    FUNC_6(VAR_2, VAR_10);

    VAR_9 = FUNC_3(VAR_4, &VAR_5);
    FUNC_5(VAR_2, VAR_5, VAR_9);
    FUNC_2(&VAR_5);
    return 0;
}
