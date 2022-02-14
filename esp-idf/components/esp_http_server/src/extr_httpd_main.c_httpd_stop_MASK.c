
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * global_transport_ctx; int (* global_transport_ctx_free_fn ) (int *) ;int * global_user_ctx; int (* global_user_ctx_free_fn ) (int *) ;int ctrl_port; } ;
struct TYPE_3__ {scalar_t__ status; } ;
struct httpd_data {TYPE_2__ config; TYPE_1__ hd_td; int msg_fd; } ;
struct httpd_ctrl_data {int hc_msg; } ;
typedef int msg ;
typedef scalar_t__ httpd_handle_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,int ,struct httpd_ctrl_data*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct httpd_data*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct httpd_ctrl_data*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

esp_err_t FUNC_9(httpd_handle_t VAR_5)
{
    struct httpd_data *VAR_6 = (struct httpd_data *) VAR_5;
    if (VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    struct httpd_ctrl_data VAR_7;
    FUNC_6(&VAR_7, 0, sizeof(VAR_7));
    VAR_7.hc_msg = VAR_2;
    FUNC_2(VAR_6->msg_fd, VAR_6->config.ctrl_port, &VAR_7, sizeof(VAR_7));

    FUNC_0(VAR_3, FUNC_1("sent control msg to stop server"));
    while (VAR_6->hd_td.status != VAR_4) {
        FUNC_5(100);
    }


    if (VAR_6->config.global_user_ctx) {
        if (VAR_6->config.global_user_ctx_free_fn) {
            VAR_6->config.global_user_ctx_free_fn(VAR_6->config.global_user_ctx);
        } else {
            FUNC_3(VAR_6->config.global_user_ctx);
        }
        VAR_6->config.global_user_ctx = ((void*)0);
    }


    if (VAR_6->config.global_transport_ctx) {
        if (VAR_6->config.global_transport_ctx_free_fn) {
            VAR_6->config.global_transport_ctx_free_fn(VAR_6->config.global_transport_ctx);
        } else {
            FUNC_3(VAR_6->config.global_transport_ctx);
        }
        VAR_6->config.global_transport_ctx = ((void*)0);
    }

    FUNC_0(VAR_3, FUNC_1("server stopped"));
    FUNC_4(VAR_6);
    return VAR_1;
}
