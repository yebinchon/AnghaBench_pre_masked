
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int metadata; int time_base; int end; int start; } ;
struct TYPE_11__ {int * pb; TYPE_4__** chapters; } ;
struct TYPE_10__ {int member_0; int member_1; } ;
struct TYPE_9__ {int len; } ;
typedef TYPE_1__ ID3v2EncContext ;
typedef TYPE_2__ AVRational ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;
typedef TYPE_4__ AVChapter ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char,char,char,char) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int ,int ,TYPE_2__ const) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int **) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (char*,int,char*,int) ;
 int FUNC_10 (int *,int *,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_11(AVFormatContext *VAR_1, ID3v2EncContext *VAR_2, int VAR_3, int VAR_4)
{
    const AVRational VAR_5 = {1, 1000};
    AVChapter *VAR_6 = VAR_1->chapters[VAR_3];
    uint8_t *VAR_7 = ((void*)0);
    AVIOContext *VAR_8 = ((void*)0);
    char VAR_9[123];
    int VAR_10, VAR_11, VAR_12, VAR_13;

    if ((VAR_13 = FUNC_4(&VAR_8)) < 0)
        goto fail;

    VAR_11 = FUNC_2(VAR_6->start, VAR_6->time_base, VAR_5);
    VAR_12 = FUNC_2(VAR_6->end, VAR_6->time_base, VAR_5);

    FUNC_9(VAR_9, 122, "ch%d", VAR_3);
    VAR_2->len += FUNC_5(VAR_8, VAR_9);
    FUNC_7(VAR_8, VAR_11);
    FUNC_7(VAR_8, VAR_12);
    FUNC_7(VAR_8, 0xFFFFFFFFu);
    FUNC_7(VAR_8, 0xFFFFFFFFu);

    if ((VAR_13 = FUNC_10(VAR_8, &VAR_6->metadata, VAR_2, VAR_4)) < 0)
        goto fail;

    VAR_10 = FUNC_3(VAR_8, &VAR_7);
    VAR_2->len += 16 + VAR_0;

    FUNC_7(VAR_1->pb, FUNC_0('C', 'H', 'A', 'P'));
    FUNC_7(VAR_1->pb, VAR_10);
    FUNC_6(VAR_1->pb, 0);
    FUNC_8(VAR_1->pb, VAR_7, VAR_10);

fail:
    if (VAR_8 && !VAR_7)
        FUNC_3(VAR_8, &VAR_7);
    FUNC_1(&VAR_7);

    return VAR_13;
}
