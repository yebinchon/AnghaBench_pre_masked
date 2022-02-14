
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int value; int key; } ;
typedef TYPE_1__ AVDictionaryEntry ;
typedef int AVDictionary ;
typedef int AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,char const*,int) ;
 int FUNC_2 (int *,int ,char*,int ,int ) ;
 int FUNC_3 (int *,char**) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int const*) ;
 TYPE_1__* FUNC_6 (int const*,char*,TYPE_1__*,int ) ;
 char* FUNC_7 (char*) ;

int FUNC_8(const AVDictionary *VAR_5, char **VAR_6,
                       const char VAR_7, const char VAR_8)
{
    AVDictionaryEntry *VAR_9 = ((void*)0);
    AVBPrint VAR_10;
    int VAR_11 = 0;
    char VAR_12[] = {VAR_8, VAR_7, '\0'};

    if (!VAR_6 || VAR_8 == '\0' || VAR_7 == '\0' || VAR_8 == VAR_7 ||
        VAR_8 == '\\' || VAR_7 == '\\')
        return FUNC_0(VAR_3);

    if (!FUNC_5(VAR_5)) {
        *VAR_6 = FUNC_7("");
        return *VAR_6 ? 0 : FUNC_0(VAR_4);
    }

    FUNC_4(&VAR_10, 64, VAR_0);
    while ((VAR_9 = FUNC_6(VAR_5, "", VAR_9, VAR_1))) {
        if (VAR_11++)
            FUNC_1(&VAR_10, &VAR_8, 1);
        FUNC_2(&VAR_10, VAR_9->key, VAR_12, VAR_2, 0);
        FUNC_1(&VAR_10, &VAR_7, 1);
        FUNC_2(&VAR_10, VAR_9->value, VAR_12, VAR_2, 0);
    }
    return FUNC_3(&VAR_10, VAR_6);
}
