
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_7__ {int value; int key; } ;
struct TYPE_6__ {int * pb; int metadata; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ AVDictionaryEntry ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ,scalar_t__*,int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ,int *) ;
 int VAR_1 ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__** VAR_2 ;

void FUNC_7(AVFormatContext *VAR_3)
{
    AVIOContext *VAR_4 = VAR_3->pb;
    int VAR_5;
    int64_t VAR_6;
    AVDictionaryEntry *VAR_7 = ((void*)0);

    FUNC_2(&VAR_3->metadata, VAR_1, ((void*)0));


    if (!FUNC_6(VAR_3))
        return;

    VAR_6 = FUNC_4(VAR_4, "LIST");
    FUNC_5(VAR_4, "INFO");
    for (VAR_5 = 0; *VAR_2[VAR_5]; VAR_5++)
        if ((VAR_7 = FUNC_0(VAR_3->metadata, VAR_2[VAR_5],
                             ((void*)0), VAR_0)))
            FUNC_3(VAR_3->pb, VAR_7->key, VAR_7->value);
    FUNC_1(VAR_4, VAR_6);
}
