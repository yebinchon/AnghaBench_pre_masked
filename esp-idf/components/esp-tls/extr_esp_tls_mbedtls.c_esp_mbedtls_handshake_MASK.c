
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int conn_state; int error_handle; int ssl; } ;
typedef TYPE_1__ esp_tls_t ;
struct TYPE_7__ {int use_global_ca_store; int * cacert_buf; } ;
typedef TYPE_2__ esp_tls_cfg_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;

int FUNC_4(esp_tls_t *VAR_8, const esp_tls_cfg_t *VAR_9)
{
    int VAR_10;
    VAR_10 = FUNC_3(&VAR_8->ssl);
    if (VAR_10 == 0) {
        VAR_8->conn_state = VAR_3;
        return 1;
    } else {
        if (VAR_10 != VAR_4 && VAR_10 != VAR_5) {
            FUNC_1(VAR_7, "mbedtls_ssl_handshake returned -0x%x", -VAR_10);
            FUNC_0(VAR_8->error_handle, VAR_1, -VAR_10);
            FUNC_0(VAR_8->error_handle, VAR_0, VAR_2);
            if (VAR_9->cacert_buf != ((void*)0) || VAR_9->use_global_ca_store == 1) {

                FUNC_2(VAR_8);
            }
            VAR_8->conn_state = VAR_6;
            return -1;
        }


        return 0;
    }
}
