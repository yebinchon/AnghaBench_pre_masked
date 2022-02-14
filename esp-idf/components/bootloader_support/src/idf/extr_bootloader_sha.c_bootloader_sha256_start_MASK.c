
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_sha256_context ;
typedef int * bootloader_sha256_handle_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

bootloader_sha256_handle_t FUNC_3(void)
{
    mbedtls_sha256_context *VAR_0 = (mbedtls_sha256_context *)FUNC_0(sizeof(mbedtls_sha256_context));
    if (!VAR_0) {
        return ((void*)0);
    }
    FUNC_1(VAR_0);
    int VAR_1 = FUNC_2(VAR_0, 0);
    if (VAR_1 != 0) {
        return ((void*)0);
    }
    return VAR_0;
}
