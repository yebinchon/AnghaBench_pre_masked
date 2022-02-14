
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * crypt; } ;
typedef TYPE_1__ mz_crypt_aes ;


 int FUNC_0 (int *) ;

void FUNC_1(void *VAR_0)
{
    mz_crypt_aes *VAR_1 = (mz_crypt_aes *)VAR_0;

    if (VAR_1->crypt != ((void*)0))
        FUNC_0(VAR_1->crypt);
    VAR_1->crypt = ((void*)0);
}
