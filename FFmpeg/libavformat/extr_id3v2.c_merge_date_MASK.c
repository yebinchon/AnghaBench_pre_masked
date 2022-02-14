
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int date ;
struct TYPE_3__ {char* value; } ;
typedef TYPE_1__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int FUNC_0 (int **,char*,char*,int ) ;
 int FUNC_1 (char*,char*,int) ;
 TYPE_1__* FUNC_2 (int *,char*) ;
 int FUNC_3 (char*,int,char*,char*,char*) ;

__attribute__((used)) static void FUNC_4(AVDictionary **VAR_0)
{
    AVDictionaryEntry *VAR_1;
    char VAR_2[17] = { 0 };

    if (!(VAR_1 = FUNC_2(*VAR_0, "TYER")) &&
        !(VAR_1 = FUNC_2(*VAR_0, "TYE")))
        return;
    FUNC_1(VAR_2, VAR_1->value, 5);
    FUNC_0(VAR_0, "TYER", ((void*)0), 0);
    FUNC_0(VAR_0, "TYE", ((void*)0), 0);

    if (!(VAR_1 = FUNC_2(*VAR_0, "TDAT")) &&
        !(VAR_1 = FUNC_2(*VAR_0, "TDA")))
        goto finish;
    FUNC_3(VAR_2 + 4, sizeof(VAR_2) - 4, "-%.2s-%.2s", VAR_1->value + 2, VAR_1->value);
    FUNC_0(VAR_0, "TDAT", ((void*)0), 0);
    FUNC_0(VAR_0, "TDA", ((void*)0), 0);

    if (!(VAR_1 = FUNC_2(*VAR_0, "TIME")) &&
        !(VAR_1 = FUNC_2(*VAR_0, "TIM")))
        goto finish;
    FUNC_3(VAR_2 + 10, sizeof(VAR_2) - 10,
             " %.2s:%.2s", VAR_1->value, VAR_1->value + 2);
    FUNC_0(VAR_0, "TIME", ((void*)0), 0);
    FUNC_0(VAR_0, "TIM", ((void*)0), 0);

finish:
    if (VAR_2[0])
        FUNC_0(VAR_0, "date", VAR_2, 0);
}
