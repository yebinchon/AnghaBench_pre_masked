
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int key; } ;
typedef TYPE_1__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,char*,int *,int ) ;
 int FUNC_1 (int *,int ,char*,int ) ;
 int FUNC_2 (int) ;

void FUNC_3(AVDictionary *VAR_2)
{
    AVDictionaryEntry *VAR_3;
    if ((VAR_3 = FUNC_0(VAR_2, "", ((void*)0), VAR_0))) {
        FUNC_1(((void*)0), VAR_1, "Option %s not found.\n", VAR_3->key);
        FUNC_2(1);
    }
}
