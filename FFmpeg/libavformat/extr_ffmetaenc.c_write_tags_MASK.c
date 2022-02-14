
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int value; int key; } ;
typedef int AVIOContext ;
typedef TYPE_1__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,char*,TYPE_1__*,int ) ;
 int FUNC_1 (int *,char) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(AVIOContext *VAR_1, AVDictionary *VAR_2)
{
    AVDictionaryEntry *VAR_3 = ((void*)0);
    while ((VAR_3 = FUNC_0(VAR_2, "", VAR_3, VAR_0))) {
        FUNC_2(VAR_1, VAR_3->key);
        FUNC_1(VAR_1, '=');
        FUNC_2(VAR_1, VAR_3->value);
        FUNC_1(VAR_1, '\n');
    }
}
