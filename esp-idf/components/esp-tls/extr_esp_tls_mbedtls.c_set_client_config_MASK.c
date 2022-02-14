
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int clientkey; int clientcert; int conf; int error_handle; int cacert_ptr; int ssl; } ;
typedef TYPE_2__ esp_tls_t ;
struct TYPE_13__ {int privkey_password_len; int privkey_password; int privkey_pem_bytes; int * privkey_pem_buf; int publiccert_pem_bytes; int * publiccert_pem_buf; int * pk_key; int * public_cert; } ;
typedef TYPE_3__ esp_tls_pki_t ;
struct TYPE_14__ {char const* common_name; int use_global_ca_store; int * clientkey_buf; int * clientcert_buf; int clientkey_password_len; int clientkey_password; int clientkey_bytes; int clientcert_bytes; TYPE_1__* psk_hint_key; int cacert_bytes; int * cacert_buf; scalar_t__ alpn_protos; int skip_common_name; } ;
typedef TYPE_4__ esp_tls_cfg_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_11__ {char const* hint; int key_size; int key; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int *) ;
 int FUNC_8 (int *,int ,int ,unsigned char const*,size_t) ;
 int FUNC_9 (int *,int ,int ,int ) ;
 int FUNC_10 (int *,char*) ;
 scalar_t__ FUNC_11 (TYPE_2__*,int *,int ) ;
 scalar_t__ FUNC_12 (TYPE_2__*) ;
 scalar_t__ FUNC_13 (TYPE_2__*,TYPE_3__*) ;
 size_t FUNC_14 (char const*) ;
 char* FUNC_15 (char const*,size_t) ;

esp_err_t FUNC_16(const char *VAR_13, size_t VAR_14, esp_tls_cfg_t *VAR_15, esp_tls_t *VAR_16)
{
    FUNC_3(VAR_15 != ((void*)0));
    FUNC_3(VAR_16 != ((void*)0));
    int VAR_17;
    if (!VAR_15->skip_common_name) {
        char *VAR_18 = ((void*)0);
        if (VAR_15->common_name != ((void*)0)) {
            VAR_18 = FUNC_15(VAR_15->common_name, FUNC_14(VAR_15->common_name));
        } else {
            VAR_18 = FUNC_15(VAR_13, VAR_14);
        }

        if (VAR_18 == ((void*)0)) {
            return VAR_6;
        }

        if ((VAR_17 = FUNC_10(&VAR_16->ssl, VAR_18)) != 0) {
            FUNC_2(VAR_12, "mbedtls_ssl_set_hostname returned -0x%x", -VAR_17);
            FUNC_0(VAR_16->error_handle, VAR_0, -VAR_17);
            FUNC_4(VAR_18);
            return VAR_5;
        }
        FUNC_4(VAR_18);
    }

    if ((VAR_17 = FUNC_9(&VAR_16->conf,
                                           VAR_8,
                                           VAR_10,
                                           VAR_9)) != 0) {
        FUNC_2(VAR_12, "mbedtls_ssl_config_defaults returned -0x%x", -VAR_17);
        FUNC_0(VAR_16->error_handle, VAR_0, -VAR_17);
        return VAR_2;
    }
    if (VAR_15->use_global_ca_store == 1) {
        esp_err_t VAR_19 = FUNC_12(VAR_16);
        if (VAR_19 != VAR_7) {
            return VAR_19;
        }
    } else if (VAR_15->cacert_buf != ((void*)0)) {
        esp_err_t VAR_20 = FUNC_11(VAR_16, VAR_15->cacert_buf, VAR_15->cacert_bytes);
        if (VAR_20 != VAR_7) {
            return VAR_20;
        }
        FUNC_7(&VAR_16->conf, VAR_16->cacert_ptr, ((void*)0));
    } else if (VAR_15->psk_hint_key) {
        FUNC_2(VAR_12, "psk_hint_key configured but not enabled in menuconfig: Please enable ESP_TLS_PSK_VERIFICATION option");
        return VAR_1;

    } else {
        FUNC_6(&VAR_16->conf, VAR_11);
    }

    if (VAR_15->clientcert_buf != ((void*)0) && VAR_15->clientkey_buf != ((void*)0)) {
        esp_tls_pki_t VAR_21 = {
            .public_cert = &VAR_16->clientcert,
            .pk_key = &VAR_16->clientkey,
            .publiccert_pem_buf = VAR_15->clientcert_buf,
            .publiccert_pem_bytes = VAR_15->clientcert_bytes,
            .privkey_pem_buf = VAR_15->clientkey_buf,
            .privkey_pem_bytes = VAR_15->clientkey_bytes,
            .privkey_password = VAR_15->clientkey_password,
            .privkey_password_len = VAR_15->clientkey_password_len,
        };
        esp_err_t VAR_22 = FUNC_13(VAR_16, &VAR_21);
        if (VAR_22 != VAR_7) {
            FUNC_2(VAR_12, "Failed to set client pki context");
            return VAR_22;
        }
    } else if (VAR_15->clientcert_buf != ((void*)0) || VAR_15->clientkey_buf != ((void*)0)) {
        FUNC_2(VAR_12, "You have to provide both clientcert_buf and clientkey_buf for mutual authentication");
        return VAR_1;
    }
    return VAR_7;
}
