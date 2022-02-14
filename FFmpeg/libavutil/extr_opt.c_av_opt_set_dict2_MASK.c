
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int value; int key; } ;
typedef TYPE_1__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int **) ;
 TYPE_1__* FUNC_1 (int *,char*,TYPE_1__*,int ) ;
 int FUNC_2 (int **,int ,int ,int ) ;
 int FUNC_3 (void*,int ,char*,int ,int ) ;
 int FUNC_4 (void*,int ,int ,int) ;

int FUNC_5(void *VAR_3, AVDictionary **VAR_4, int VAR_5)
{
    AVDictionaryEntry *VAR_6 = ((void*)0);
    AVDictionary *VAR_7 = ((void*)0);
    int VAR_8 = 0;

    if (!VAR_4)
        return 0;

    while ((VAR_6 = FUNC_1(*VAR_4, "", VAR_6, VAR_1))) {
        VAR_8 = FUNC_4(VAR_3, VAR_6->key, VAR_6->value, VAR_5);
        if (VAR_8 == VAR_0)
            VAR_8 = FUNC_2(&VAR_7, VAR_6->key, VAR_6->value, 0);
        if (VAR_8 < 0) {
            FUNC_3(VAR_3, VAR_2, "Error setting option %s to value %s.\n", VAR_6->key, VAR_6->value);
            FUNC_0(&VAR_7);
            return VAR_8;
        }
        VAR_8 = 0;
    }
    FUNC_0(VAR_4);
    *VAR_4 = VAR_7;
    return VAR_8;
}
