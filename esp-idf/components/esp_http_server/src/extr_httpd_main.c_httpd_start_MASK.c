
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int core_id; int task_priority; int stack_size; } ;
struct TYPE_6__ {int handle; } ;
struct httpd_data {TYPE_2__ config; TYPE_1__ hd_td; } ;
typedef int **** httpd_handle_t ;
struct TYPE_8__ {scalar_t__ max_open_sockets; } ;
typedef TYPE_3__ httpd_config_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct httpd_data* FUNC_1 (TYPE_3__ const*) ;
 int FUNC_2 (struct httpd_data*) ;
 scalar_t__ FUNC_3 (int *,char*,int ,int ,int ,struct httpd_data*,int ) ;
 scalar_t__ FUNC_4 (struct httpd_data*) ;
 int FUNC_5 (struct httpd_data*) ;
 int VAR_7 ;

esp_err_t FUNC_6(httpd_handle_t *VAR_8, const httpd_config_t *VAR_9)
{
    if (VAR_8 == ((void*)0) || VAR_9 == ((void*)0)) {
        return VAR_3;
    }
    if (VAR_0 < VAR_9->max_open_sockets + 3) {
        FUNC_0(VAR_6, "Configuration option max_open_sockets is too large (max allowed %d)\n\t"
                      "Either decrease this or configure LWIP_MAX_SOCKETS to a larger value",
                      VAR_0 - 3);
        return VAR_3;
    }

    struct httpd_data *VAR_10 = FUNC_1(VAR_9);
    if (VAR_10 == ((void*)0)) {

        return VAR_1;
    }

    if (FUNC_4(VAR_10) != VAR_5) {
        FUNC_2(VAR_10);
        return VAR_4;
    }

    FUNC_5(VAR_10);
    if (FUNC_3(&VAR_10->hd_td.handle, "httpd",
                               VAR_10->config.stack_size,
                               VAR_10->config.task_priority,
                               VAR_7, VAR_10,
                               VAR_10->config.core_id) != VAR_5) {

        FUNC_2(VAR_10);
        return VAR_2;
    }

    *VAR_8 = *(httpd_handle_t *)VAR_10;
    return VAR_5;
}
