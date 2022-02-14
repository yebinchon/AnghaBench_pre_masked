
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbedtls_x509_crt ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,int) ;
 int * VAR_3 ;
 int FUNC_2 (int *) ;

esp_err_t FUNC_3(void)
{
    if (VAR_3 == ((void*)0)) {
        VAR_3 = (mbedtls_x509_crt *)FUNC_1(1, sizeof(mbedtls_x509_crt));
        if (VAR_3 == ((void*)0)) {
            FUNC_0(VAR_2, "global_cacert not allocated");
            return VAR_0;
        }
        FUNC_2(VAR_3);
    }
    return VAR_1;
}
