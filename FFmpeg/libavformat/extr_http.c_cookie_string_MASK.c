
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int value; int key; } ;
typedef TYPE_1__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int *,char*,TYPE_1__*,int ) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,int,char*,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(AVDictionary *VAR_2, char **VAR_3)
{
    AVDictionaryEntry *VAR_4 = ((void*)0);
    int VAR_5 = 1;


    while ((VAR_4 = FUNC_1(VAR_2, "", VAR_4, VAR_0)))
        VAR_5 += FUNC_5(VAR_4->key) + FUNC_5(VAR_4->value) + 1;


    VAR_4 = ((void*)0);
    if (*VAR_3) FUNC_2(*VAR_3);
    *VAR_3 = FUNC_3(VAR_5);
    if (!*VAR_3) return FUNC_0(VAR_1);
    *VAR_3[0] = '\0';


    while ((VAR_4 = FUNC_1(VAR_2, "", VAR_4, VAR_0)))
        FUNC_4(*VAR_3, VAR_5, "%s%s\n", VAR_4->key, VAR_4->value);

    return 0;
}
