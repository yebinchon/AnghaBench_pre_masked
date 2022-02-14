
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int error_handle; int * pk_key; int * public_cert; int conf; int privkey_pem_bytes; int * privkey_pem_buf; int publiccert_pem_bytes; int * publiccert_pem_buf; } ;
typedef TYPE_1__ const esp_tls_t ;
typedef TYPE_1__ esp_tls_pki_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int ,int *,int ) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int ) ;

__attribute__((used)) static esp_err_t FUNC_8(esp_tls_t *VAR_7, const esp_tls_pki_t *VAR_8)
{
    FUNC_2(VAR_7);
    FUNC_2(VAR_8);
    int VAR_9;

    if (VAR_8->publiccert_pem_buf != ((void*)0) &&
        VAR_8->privkey_pem_buf != ((void*)0) &&
        VAR_8->public_cert != ((void*)0) &&
        VAR_8->pk_key != ((void*)0)) {

        FUNC_6(VAR_8->public_cert);
        FUNC_3(VAR_8->pk_key);

        VAR_9 = FUNC_7(VAR_8->public_cert, VAR_8->publiccert_pem_buf, VAR_8->publiccert_pem_bytes);
        if (VAR_9 < 0) {
            FUNC_1(VAR_6, "mbedtls_x509_crt_parse returned -0x%x", -VAR_9);
            FUNC_0(VAR_7->error_handle, VAR_0, -VAR_9);
            return VAR_4;
        }

        VAR_9 = FUNC_4(VAR_8->pk_key, VAR_8->privkey_pem_buf, VAR_8->privkey_pem_bytes,
                                   ((void*)0), 0);
        if (VAR_9 < 0) {
            FUNC_1(VAR_6, "mbedtls_pk_parse_keyfile returned -0x%x", -VAR_9);
            FUNC_0(VAR_7->error_handle, VAR_0, -VAR_9);
            return VAR_2;
        }

        VAR_9 = FUNC_5(&VAR_7->conf, VAR_8->public_cert, VAR_8->pk_key);
        if (VAR_9 < 0) {
            FUNC_1(VAR_6, "mbedtls_ssl_conf_own_cert returned -0x%x", -VAR_9);
            FUNC_0(VAR_7->error_handle, VAR_0, -VAR_9);
            return VAR_3;
        }
    } else {
        return VAR_1;
    }
    return VAR_5;
}
