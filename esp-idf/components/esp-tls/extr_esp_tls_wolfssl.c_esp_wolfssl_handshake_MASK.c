
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int conn_state; int error_handle; scalar_t__ priv_ssl; } ;
typedef TYPE_1__ esp_tls_t ;
struct TYPE_7__ {int use_global_ca_store; int * cacert_pem_buf; } ;
typedef TYPE_2__ esp_tls_cfg_t ;
typedef int WOLFSSL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

int FUNC_5(esp_tls_t *VAR_7, const esp_tls_cfg_t *VAR_8)
{
    int VAR_9;
    VAR_9 = FUNC_3( (WOLFSSL *)VAR_7->priv_ssl);
    if (VAR_9 == VAR_6) {
        VAR_7->conn_state = VAR_1;
        return 1;
    } else {
        int VAR_10 = FUNC_4( (WOLFSSL *)VAR_7->priv_ssl, VAR_9);
        if (VAR_10 != VAR_2 && VAR_10 != VAR_3) {
            FUNC_1(VAR_5, "wolfSSL_connect returned -0x%x", -VAR_9);
            FUNC_0(VAR_7->error_handle, VAR_0, -VAR_9);

            if (VAR_8->cacert_pem_buf != ((void*)0) || VAR_8->use_global_ca_store == 1) {

                FUNC_2(VAR_7);
            }
            VAR_7->conn_state = VAR_4;
            return -1;
        }


        return 0;
    }
}
