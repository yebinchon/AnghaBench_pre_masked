
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int fd; } ;
struct TYPE_7__ {scalar_t__ role; TYPE_4__ server_fd; int ssl; int error_handle; int conf; int ctr_drbg; int entropy; int sockfd; } ;
typedef TYPE_1__ esp_tls_t ;
typedef int esp_tls_cfg_t ;
typedef int esp_tls_cfg_server_t ;
typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int VAR_9 ;
 int FUNC_5 (int *,int ,int *,int *,int ) ;
 int VAR_10 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (int *,int ,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,TYPE_4__*,int ,int ,int *) ;
 int FUNC_12 (int *,int *) ;
 scalar_t__ FUNC_13 (char const*,size_t,int *,TYPE_1__*) ;
 scalar_t__ FUNC_14 (int *,TYPE_1__*) ;

esp_err_t FUNC_15(const char *VAR_13, size_t VAR_14, const void *VAR_15, esp_tls_t *VAR_16)
{
    FUNC_2(VAR_15 != ((void*)0));
    FUNC_2(VAR_16 != ((void*)0));
    int VAR_17;
    esp_err_t VAR_18 = VAR_4;
    VAR_16->server_fd.fd = VAR_16->sockfd;
    FUNC_10(&VAR_16->ssl);
    FUNC_4(&VAR_16->ctr_drbg);
    FUNC_9(&VAR_16->conf);
    FUNC_6(&VAR_16->entropy);

    if (VAR_16->role == VAR_6) {
        VAR_18 = FUNC_13(VAR_13, VAR_14, (esp_tls_cfg_t *)VAR_15, VAR_16);
        if (VAR_18 != VAR_5) {
            FUNC_1(VAR_8, "Failed to set client configurations");
            goto exit;
        }
    } else if (VAR_16->role == VAR_7) {







            FUNC_1(VAR_8, "ESP_TLS_SERVER Not enabled in Kconfig");
            goto exit;

    }

    if ((VAR_17 = FUNC_5(&VAR_16->ctr_drbg,
                                     VAR_10, &VAR_16->entropy, ((void*)0), 0)) != 0) {
        FUNC_1(VAR_8, "mbedtls_ctr_drbg_seed returned -0x%x", -VAR_17);
        FUNC_0(VAR_16->error_handle, VAR_1, -VAR_17);
        VAR_18 = VAR_2;
        goto exit;
    }

    FUNC_8(&VAR_16->conf, VAR_9, &VAR_16->ctr_drbg);





    if ((VAR_17 = FUNC_12(&VAR_16->ssl, &VAR_16->conf)) != 0) {
        FUNC_1(VAR_8, "mbedtls_ssl_setup returned -0x%x", -VAR_17);
        FUNC_0(VAR_16->error_handle, VAR_1, -VAR_17);
        VAR_18 = VAR_3;
        goto exit;
    }
    FUNC_11(&VAR_16->ssl, &VAR_16->server_fd, VAR_12, VAR_11, ((void*)0));

    return VAR_5;

exit:
    FUNC_3(VAR_16);
    return VAR_18;

}
