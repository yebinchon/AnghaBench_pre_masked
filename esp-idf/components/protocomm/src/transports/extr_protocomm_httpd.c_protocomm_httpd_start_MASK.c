
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int remove_endpoint; int add_endpoint; scalar_t__ priv; } ;
typedef TYPE_3__ protocomm_t ;
struct TYPE_11__ {int task_priority; int stack_size; int port; } ;
struct TYPE_12__ {TYPE_1__ config; scalar_t__ handle; } ;
struct TYPE_14__ {TYPE_2__ data; scalar_t__ ext_handle_provided; } ;
typedef TYPE_4__ protocomm_httpd_config_t ;
typedef int httpd_handle_t ;
struct TYPE_15__ {int lru_purge_enable; int max_open_sockets; int task_priority; int stack_size; int server_port; } ;
typedef TYPE_5__ httpd_config_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_4 ;
 TYPE_5__ FUNC_1 () ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,TYPE_5__*) ;
 int VAR_7 ;
 TYPE_3__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

esp_err_t FUNC_6(protocomm_t *VAR_12, const protocomm_httpd_config_t *VAR_13)
{
    if (!VAR_12 || !VAR_13) {
        return VAR_0;
    }

    if (VAR_8) {
        if (VAR_12 == VAR_8) {
            FUNC_0(VAR_6, "HTTP server already running for this protocomm instance");
            return VAR_1;
        }
        FUNC_0(VAR_6, "HTTP server started for another protocomm instance");
        return VAR_2;
    }

    if (VAR_13->ext_handle_provided) {
        if (VAR_13->data.handle) {
            VAR_12->priv = VAR_13->data.handle;
            VAR_7 = 1;
        } else {
            return VAR_0;
        }
    } else {

        VAR_12->priv = FUNC_2(1, sizeof(httpd_handle_t));
        if (!VAR_12->priv) {
            FUNC_0(VAR_6, "Malloc failed for HTTP server handle");
            return VAR_3;
        }


        httpd_config_t VAR_14 = FUNC_1();
        VAR_14.server_port = VAR_13->data.config.port;
        VAR_14.stack_size = VAR_13->data.config.stack_size;
        VAR_14.task_priority = VAR_13->data.config.task_priority;
        VAR_14.lru_purge_enable = 1;
        VAR_14.max_open_sockets = 1;

        esp_err_t VAR_15;
        if ((VAR_15 = FUNC_5((httpd_handle_t *)VAR_12->priv, &VAR_14)) != VAR_4) {
            FUNC_0(VAR_6, "Failed to start http server: %s", FUNC_3(VAR_15));
            FUNC_4(VAR_12->priv);
            return VAR_15;
        }
    }
    VAR_12->add_endpoint = VAR_9;
    VAR_12->remove_endpoint = VAR_10;
    VAR_8 = VAR_12;
    VAR_11 = VAR_5;
    return VAR_4;
}
