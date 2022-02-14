
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * cacert_ptr; int conf; int error_handle; int cacert; } ;
typedef TYPE_1__ esp_tls_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,unsigned char const*,size_t) ;

__attribute__((used)) static esp_err_t FUNC_7(esp_tls_t *VAR_5, const unsigned char *VAR_6, size_t VAR_7)
{
    FUNC_2(VAR_5);
    VAR_5->cacert_ptr = &VAR_5->cacert;
    FUNC_5(VAR_5->cacert_ptr);
    int VAR_8 = FUNC_6(VAR_5->cacert_ptr, VAR_6, VAR_7);
    if (VAR_8 < 0) {
        FUNC_1(VAR_4, "mbedtls_x509_crt_parse returned -0x%x", -VAR_8);
        FUNC_0(VAR_5->error_handle, VAR_0, -VAR_8);
        return VAR_1;
    }
    FUNC_3(&VAR_5->conf, VAR_3);
    FUNC_4(&VAR_5->conf, VAR_5->cacert_ptr, ((void*)0));
    return VAR_2;
}
