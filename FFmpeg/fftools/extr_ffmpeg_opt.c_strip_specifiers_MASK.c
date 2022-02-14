
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int value; int key; } ;
typedef TYPE_1__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,char*,TYPE_1__*,int ) ;
 int FUNC_1 (int **,int ,int ,int ) ;
 char* FUNC_2 (int ,char) ;

__attribute__((used)) static AVDictionary *FUNC_3(AVDictionary *VAR_1)
{
    AVDictionaryEntry *VAR_2 = ((void*)0);
    AVDictionary *VAR_3 = ((void*)0);

    while ((VAR_2 = FUNC_0(VAR_1, "", VAR_2, VAR_0))) {
        char *VAR_4 = FUNC_2(VAR_2->key, ':');

        if (VAR_4)
            *VAR_4 = 0;
        FUNC_1(&VAR_3, VAR_2->key, VAR_2->value, 0);
        if (VAR_4)
            *VAR_4 = ':';
    }
    return VAR_3;
}
