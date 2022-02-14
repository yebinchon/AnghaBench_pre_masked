
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void mz_crypt_aes ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (void*,int ,int) ;

void *FUNC_2(void **VAR_0)
{
    mz_crypt_aes *VAR_1 = ((void*)0);

    VAR_1 = (mz_crypt_aes *)FUNC_0(sizeof(mz_crypt_aes));
    if (VAR_1 != ((void*)0))
        FUNC_1(VAR_1, 0, sizeof(mz_crypt_aes));
    if (VAR_0 != ((void*)0))
        *VAR_0 = VAR_1;

    return VAR_1;
}
