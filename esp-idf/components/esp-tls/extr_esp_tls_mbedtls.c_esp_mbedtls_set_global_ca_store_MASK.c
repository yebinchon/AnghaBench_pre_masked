
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int * VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned char const*,unsigned int const) ;

esp_err_t FUNC_4(const unsigned char *VAR_6, const unsigned int VAR_7)
{
    if (VAR_6 == ((void*)0)) {
        FUNC_0(VAR_4, "cacert_pem_buf is null");
        return VAR_0;
    }
    int VAR_8;
    if (VAR_5 == ((void*)0)) {
        VAR_8 = FUNC_1();
        if (VAR_8 != VAR_3) {
            return VAR_8;
        }
    }
    VAR_8 = FUNC_3(VAR_5, VAR_6, VAR_7);
    if (VAR_8 < 0) {
        FUNC_0(VAR_4, "mbedtls_x509_crt_parse returned -0x%x", -VAR_8);
        FUNC_2(VAR_5);
        VAR_5 = ((void*)0);
        return VAR_2;
    } else if (VAR_8 > 0) {
        FUNC_0(VAR_4, "mbedtls_x509_crt_parse was partly successful. No. of failed certificates: %d", VAR_8);
        return VAR_1;
    }
    return VAR_3;
}
