
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned int count; TYPE_1__ const* elems; } ;
struct TYPE_6__ {char* key; } ;
typedef TYPE_1__ const AVDictionaryEntry ;
typedef TYPE_2__ AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char const) ;

AVDictionaryEntry *FUNC_1(const AVDictionary *VAR_2, const char *VAR_3,
                               const AVDictionaryEntry *VAR_4, int VAR_5)
{
    unsigned int VAR_6, VAR_7;

    if (!VAR_2)
        return ((void*)0);

    if (VAR_4)
        VAR_6 = VAR_4 - VAR_2->elems + 1;
    else
        VAR_6 = 0;

    for (; VAR_6 < VAR_2->count; VAR_6++) {
        const char *VAR_8 = VAR_2->elems[VAR_6].key;
        if (VAR_5 & VAR_1)
            for (VAR_7 = 0; VAR_8[VAR_7] == VAR_3[VAR_7] && VAR_3[VAR_7]; VAR_7++)
                ;
        else
            for (VAR_7 = 0; FUNC_0(VAR_8[VAR_7]) == FUNC_0(VAR_3[VAR_7]) && VAR_3[VAR_7]; VAR_7++)
                ;
        if (VAR_3[VAR_7])
            continue;
        if (VAR_8[VAR_7] && !(VAR_5 & VAR_0))
            continue;
        return &VAR_2->elems[VAR_6];
    }
    return ((void*)0);
}
