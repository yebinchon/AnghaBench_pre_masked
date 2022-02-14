
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int value; int key; } ;
typedef TYPE_1__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 size_t const VAR_1 ;
 TYPE_1__* FUNC_0 (int *,char*,TYPE_1__*,int ) ;
 int FUNC_1 (int **) ;
 int * FUNC_2 (int *,size_t const) ;
 int FUNC_3 (int *,int ,size_t const) ;
 size_t FUNC_4 (int ) ;

uint8_t *FUNC_5(AVDictionary *VAR_2, int *VAR_3)
{
    AVDictionaryEntry *VAR_4 = ((void*)0);
    uint8_t *VAR_5 = ((void*)0);
    *VAR_3 = 0;

    if (!VAR_2)
        return ((void*)0);

    while ((VAR_4 = FUNC_0(VAR_2, "", VAR_4, VAR_0))) {
        const size_t VAR_6 = FUNC_4(VAR_4->key);
        const size_t VAR_7 = FUNC_4(VAR_4->value);
        const size_t VAR_8 = *VAR_3 + VAR_6 + 1 + VAR_7 + 1;
        uint8_t *const VAR_9 = FUNC_2(VAR_5, VAR_8);

        if (!VAR_9)
            goto fail;
        VAR_5 = VAR_9;
        if (VAR_8 > VAR_1)
            goto fail;

        FUNC_3(VAR_5 + *VAR_3, VAR_4->key, VAR_6 + 1);
        FUNC_3(VAR_5 + *VAR_3 + VAR_6 + 1, VAR_4->value, VAR_7 + 1);

        *VAR_3 = VAR_8;
    }

    return VAR_5;

fail:
    FUNC_1(&VAR_5);
    *VAR_3 = 0;
    return ((void*)0);
}
