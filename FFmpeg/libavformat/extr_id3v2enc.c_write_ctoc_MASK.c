
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int nb_chapters; int pb; } ;
struct TYPE_5__ {int len; } ;
typedef TYPE_1__ ID3v2EncContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char,char,char,char) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *,int **) ;
 int FUNC_3 (int **) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int *,int) ;
 int FUNC_9 (char*,int,char*,int) ;

__attribute__((used)) static int FUNC_10(AVFormatContext *VAR_1, ID3v2EncContext *VAR_2, int VAR_3)
{
    uint8_t *VAR_4 = ((void*)0);
    AVIOContext *VAR_5 = ((void*)0);
    char VAR_6[123];
    int VAR_7, VAR_8;

    if (VAR_1->nb_chapters == 0)
        return 0;

    if ((VAR_8 = FUNC_3(&VAR_5)) < 0)
        goto fail;

    VAR_2->len += FUNC_4(VAR_5, "toc");
    FUNC_5(VAR_5, 0x03);
    FUNC_5(VAR_5, VAR_1->nb_chapters);
    for (int VAR_9 = 0; VAR_9 < VAR_1->nb_chapters; VAR_9++) {
        FUNC_9(VAR_6, 122, "ch%d", VAR_9);
        VAR_2->len += FUNC_4(VAR_5, VAR_6);
    }
    VAR_7 = FUNC_2(VAR_5, &VAR_4);
    VAR_2->len += 16 + VAR_0;

    FUNC_7(VAR_1->pb, FUNC_0('C', 'T', 'O', 'C'));
    FUNC_7(VAR_1->pb, VAR_7);
    FUNC_6(VAR_1->pb, 0);
    FUNC_8(VAR_1->pb, VAR_4, VAR_7);

fail:
    if (VAR_5 && !VAR_4)
        FUNC_2(VAR_5, &VAR_4);
    FUNC_1(&VAR_4);

    return VAR_8;
}
