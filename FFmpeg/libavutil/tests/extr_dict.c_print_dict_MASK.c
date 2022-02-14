
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* key; char* value; } ;
typedef TYPE_1__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int const*,char*,TYPE_1__*,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void FUNC_2(const AVDictionary *VAR_1)
{
    AVDictionaryEntry *VAR_2 = ((void*)0);
    while ((VAR_2 = FUNC_0(VAR_1, "", VAR_2, VAR_0)))
        FUNC_1("%s %s   ", VAR_2->key, VAR_2->value);
    FUNC_1("\n");
}
