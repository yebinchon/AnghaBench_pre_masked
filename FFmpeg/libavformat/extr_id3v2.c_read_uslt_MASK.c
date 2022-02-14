
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int AVIOContext ;
typedef int AVFormatContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 char* FUNC_0 (char*,char*,char*,char*) ;
 int FUNC_1 (int **,char*,char*,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,int) ;
 scalar_t__ FUNC_6 (int *,int *,int,char**,int*) ;

__attribute__((used)) static void FUNC_7(AVFormatContext *VAR_1, AVIOContext *VAR_2, int VAR_3,
                      AVDictionary **VAR_4)
{
    uint8_t VAR_5[4];
    uint8_t *VAR_6 = ((void*)0);
    uint8_t *VAR_7 = ((void*)0);
    char *VAR_8 = ((void*)0);
    int VAR_9;
    int VAR_10 = 0;

    if (VAR_3 < 1)
        goto error;

    VAR_9 = FUNC_4(VAR_2);
    VAR_3--;

    if (FUNC_5(VAR_2, VAR_5, 3) < 3)
        goto error;
    VAR_5[3] = '\0';
    VAR_3 -= 3;

    if (FUNC_6(VAR_1, VAR_2, VAR_9, &VAR_6, &VAR_3) < 0)
        goto error;

    if (FUNC_6(VAR_1, VAR_2, VAR_9, &VAR_7, &VAR_3) < 0)
        goto error;


    VAR_8 = FUNC_0("lyrics-%s%s%s", VAR_6[0] ? (char *)VAR_6 : "",
                                       VAR_6[0] ? "-" : "",
                                       VAR_5);
    if (!VAR_8)
        goto error;

    FUNC_1(VAR_4, VAR_8, VAR_7, 0);

    VAR_10 = 1;
error:
    if (!VAR_10)
        FUNC_3(VAR_1, VAR_0, "Error reading lyrics, skipped\n");
    FUNC_2(VAR_6);
    FUNC_2(VAR_7);
    FUNC_2(VAR_8);
}
