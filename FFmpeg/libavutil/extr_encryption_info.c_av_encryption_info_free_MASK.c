
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* subsamples; struct TYPE_4__* iv; struct TYPE_4__* key_id; } ;
typedef TYPE_1__ AVEncryptionInfo ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(AVEncryptionInfo *VAR_0)
{
    if (VAR_0) {
        FUNC_0(VAR_0->key_id);
        FUNC_0(VAR_0->iv);
        FUNC_0(VAR_0->subsamples);
        FUNC_0(VAR_0);
    }
}
