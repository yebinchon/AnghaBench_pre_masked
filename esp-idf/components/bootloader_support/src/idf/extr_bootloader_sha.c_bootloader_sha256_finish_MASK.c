
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int mbedtls_sha256_context ;
typedef int * bootloader_sha256_handle_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(bootloader_sha256_handle_t VAR_0, uint8_t *VAR_1)
{
    FUNC_0(VAR_0 != ((void*)0));
    mbedtls_sha256_context *VAR_2 = (mbedtls_sha256_context *)VAR_0;
    if (VAR_1 != ((void*)0)) {
        int VAR_3 = FUNC_2(VAR_2, VAR_1);
        FUNC_0(VAR_3 == 0);
    }
    FUNC_3(VAR_2);
    FUNC_1(VAR_0);
}
