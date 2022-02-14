
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int server_port; int open_fn; int global_transport_ctx_free_fn; int * global_transport_ctx; } ;
struct httpd_ssl_config {scalar_t__ transport_mode; TYPE_1__ httpd; int port_insecure; int port_secure; } ;
typedef int * httpd_handle_t ;
typedef int esp_tls_cfg_server_t ;
typedef int esp_err_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (struct httpd_ssl_config*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int **,TYPE_1__*) ;

esp_err_t FUNC_5(httpd_handle_t *VAR_5, struct httpd_ssl_config *VAR_6)
{
    FUNC_2(VAR_6 != ((void*)0));
    FUNC_2(VAR_5 != ((void*)0));

    FUNC_1(VAR_2, "Starting server");

    if (VAR_1 == VAR_6->transport_mode) {

        esp_tls_cfg_server_t *VAR_7 = FUNC_3(VAR_6);
        if (!VAR_7) {
            return -1;
        }

        FUNC_0(VAR_2, "SSL context ready");


        VAR_6->httpd.global_transport_ctx = VAR_7;
        VAR_6->httpd.global_transport_ctx_free_fn = VAR_3;
        VAR_6->httpd.open_fn = VAR_4;

        VAR_6->httpd.server_port = VAR_6->port_secure;
    } else {
        FUNC_0(VAR_2, "SSL disabled, using plain HTTP");
        VAR_6->httpd.server_port = VAR_6->port_insecure;
    }

    httpd_handle_t VAR_8 = ((void*)0);

    esp_err_t VAR_9 = FUNC_4(&VAR_8, &VAR_6->httpd);
    if (VAR_9 != VAR_0) return VAR_9;

    *VAR_5 = VAR_8;

    FUNC_1(VAR_2, "Server listening on port %d", VAR_6->httpd.server_port);
    return VAR_0;
}
