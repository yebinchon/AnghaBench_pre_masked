
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int key; } ;
typedef TYPE_1__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,char*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(AVDictionary *VAR_1, uint32_t VAR_2)
{
    AVDictionaryEntry *VAR_3 = ((void*)0);

    while ((VAR_3 = FUNC_0(VAR_1, "", VAR_3, VAR_0)))
        if (FUNC_1(VAR_3->key, VAR_2))
            return 1;

    return 0;
}
