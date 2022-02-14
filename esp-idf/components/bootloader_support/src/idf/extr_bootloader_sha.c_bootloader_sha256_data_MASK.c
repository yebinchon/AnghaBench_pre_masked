
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_sha256_context ;
typedef int * bootloader_sha256_handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,void const*,size_t) ;

void FUNC_2(bootloader_sha256_handle_t VAR_0, const void *VAR_1, size_t VAR_2)
{
    FUNC_0(VAR_0 != ((void*)0));
    mbedtls_sha256_context *VAR_3 = (mbedtls_sha256_context *)VAR_0;
    int VAR_4 = FUNC_1(VAR_3, VAR_1, VAR_2);
    FUNC_0(VAR_4 == 0);
}
