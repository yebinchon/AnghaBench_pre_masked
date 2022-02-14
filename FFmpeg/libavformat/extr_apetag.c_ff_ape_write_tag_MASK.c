
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char uint8_t ;
struct TYPE_9__ {char* value; int key; } ;
struct TYPE_8__ {int * pb; int metadata; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVFormatContext ;
typedef TYPE_2__ AVDictionaryEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (int ,char*,TYPE_2__*,int ) ;
 int FUNC_1 (char**) ;
 int FUNC_2 (TYPE_1__*,int ,char*) ;
 int FUNC_3 (int *,char**) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,char*,int) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;

int FUNC_12(AVFormatContext *VAR_6)
{
    AVDictionaryEntry *VAR_7 = ((void*)0);
    int VAR_8, VAR_9, VAR_10 = 0;
    AVIOContext *VAR_11 = ((void*)0);
    uint8_t *VAR_12 = ((void*)0);

    if ((VAR_9 = FUNC_4(&VAR_11)) < 0)
        goto end;

    FUNC_8(VAR_6);
    while ((VAR_7 = FUNC_0(VAR_6->metadata, "", VAR_7, VAR_4))) {
        int VAR_13;

        if (!FUNC_10(VAR_7->key)) {
            FUNC_2(VAR_6, VAR_5, "Non ASCII keys are not allowed\n");
            continue;
        }

        VAR_13 = FUNC_11(VAR_7->value);
        FUNC_6(VAR_11, VAR_13);
        FUNC_6(VAR_11, 0);
        FUNC_5(VAR_11, VAR_7->key);
        FUNC_7(VAR_11, VAR_7->value, VAR_13);
        VAR_10++;
    }
    if (!VAR_10)
        goto end;

    VAR_8 = FUNC_3(VAR_11, &VAR_12);
    if (VAR_8 <= 0)
        goto end;
    VAR_8 += VAR_2;


    FUNC_7(VAR_6->pb, "APETAGEX", 8);
    FUNC_6(VAR_6->pb, VAR_3);
    FUNC_6(VAR_6->pb, VAR_8);
    FUNC_6(VAR_6->pb, VAR_10);


    FUNC_6(VAR_6->pb, VAR_0 | VAR_1);
    FUNC_9(VAR_6->pb, 0, 8);

    FUNC_7(VAR_6->pb, VAR_12, VAR_8 - VAR_2);


    FUNC_7(VAR_6->pb, "APETAGEX", 8);
    FUNC_6(VAR_6->pb, VAR_3);
    FUNC_6(VAR_6->pb, VAR_8);
    FUNC_6(VAR_6->pb, VAR_10);


    FUNC_6(VAR_6->pb, VAR_0);
    FUNC_9(VAR_6->pb, 0, 8);

end:
    if (VAR_11 && !VAR_12)
        FUNC_3(VAR_11, &VAR_12);
    FUNC_1(&VAR_12);

    return VAR_9;
}
