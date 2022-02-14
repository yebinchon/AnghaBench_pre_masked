
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ int64_t ;
typedef int int32_t ;
struct TYPE_11__ {int time_base; int start; int metadata; } ;
struct TYPE_10__ {int value; } ;
struct TYPE_9__ {int nb_chapters; TYPE_4__** chapters; int * pb; int * priv_data; } ;
struct TYPE_8__ {int member_0; int member_1; } ;
typedef TYPE_1__ AVRational ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVDictionaryEntry ;
typedef TYPE_4__ AVChapter ;
typedef int ASFContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (int ,char*,int *,int ) ;
 int FUNC_2 (int **) ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_1__) ;
 int FUNC_4 (int *,int **) ;
 scalar_t__ FUNC_5 (int **) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (int *,int *,int) ;
 int FUNC_11 (int *,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int *,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_14 (int *,int *) ;

__attribute__((used)) static int FUNC_15(AVFormatContext *VAR_4)
{
    ASFContext *VAR_5 = VAR_4->priv_data;
    AVIOContext *VAR_6 = VAR_4->pb;
    int VAR_7;
    AVRational VAR_8 = {1, 10000000};
    int64_t VAR_9 = FUNC_14(VAR_6, &VAR_2);

    FUNC_12(VAR_6, &VAR_3);
    FUNC_8(VAR_6, VAR_4->nb_chapters);
    FUNC_7(VAR_6, 0);
    FUNC_7(VAR_6, 0);

    for (VAR_7 = 0; VAR_7 < VAR_4->nb_chapters; VAR_7++) {
        AVChapter *VAR_10 = VAR_4->chapters[VAR_7];
        AVDictionaryEntry *VAR_11 = FUNC_1(VAR_10->metadata, "title", ((void*)0), 0);
        int64_t VAR_12 = FUNC_3(VAR_10->start, VAR_10->time_base, VAR_8);
        uint64_t VAR_13;
        int32_t VAR_14 = FUNC_13(VAR_5, VAR_12, &VAR_13);
        int VAR_15 = 0;
        uint8_t *VAR_16;
        AVIOContext *VAR_17;
        if (VAR_11) {
            if (FUNC_5(&VAR_17) < 0)
                return FUNC_0(VAR_0);
            FUNC_6(VAR_17, VAR_11->value);
            VAR_15 = FUNC_4(VAR_17, &VAR_16);
        }
        FUNC_9(VAR_6, VAR_13);
        FUNC_9(VAR_6, VAR_12 + VAR_1 * 10000);
        FUNC_7(VAR_6, 12 + VAR_15);
        FUNC_8(VAR_6, VAR_14);
        FUNC_8(VAR_6, 0);
        FUNC_8(VAR_6, VAR_15 / 2);
        if (VAR_11) {
            FUNC_10(VAR_6, VAR_16, VAR_15);
            FUNC_2(&VAR_16);
        }
    }
    FUNC_11(VAR_6, VAR_9);
    return 0;
}
