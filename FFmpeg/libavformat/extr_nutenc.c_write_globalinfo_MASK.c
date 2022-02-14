
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {int value; int key; } ;
struct TYPE_9__ {int metadata; } ;
struct TYPE_8__ {TYPE_2__* avf; } ;
typedef TYPE_1__ NUTContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;
typedef TYPE_3__ AVDictionaryEntry ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int ) ;
 TYPE_3__* FUNC_1 (int ,char*,TYPE_3__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_8(NUTContext *VAR_1, AVIOContext *VAR_2)
{
    AVFormatContext *VAR_3 = VAR_1->avf;
    AVDictionaryEntry *VAR_4 = ((void*)0);
    AVIOContext *VAR_5;
    uint8_t *VAR_6 = ((void*)0);
    int VAR_7 = 0, VAR_8;
    int VAR_9 = FUNC_4(&VAR_5);
    if (VAR_9 < 0)
        return VAR_9;

    FUNC_7(VAR_3);
    while ((VAR_4 = FUNC_1(VAR_3->metadata, "", VAR_4, VAR_0)))
        VAR_7 += FUNC_0(VAR_5, VAR_4->key, VAR_4->value);

    FUNC_6(VAR_2, 0);
    FUNC_6(VAR_2, 0);
    FUNC_6(VAR_2, 0);
    FUNC_6(VAR_2, 0);

    FUNC_6(VAR_2, VAR_7);

    VAR_8 = FUNC_3(VAR_5, &VAR_6);
    FUNC_5(VAR_2, VAR_6, VAR_8);
    FUNC_2(VAR_6);
    return 0;
}
