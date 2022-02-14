
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctrl_port; } ;
struct httpd_data {TYPE_1__ config; int msg_fd; } ;
struct httpd_ctrl_data {void* hc_work_arg; int * hc_work; int hc_msg; } ;
typedef int msg ;
typedef int * httpd_work_fn_t ;
typedef int * httpd_handle_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,struct httpd_ctrl_data*,int) ;

esp_err_t FUNC_3(httpd_handle_t VAR_5, httpd_work_fn_t VAR_6, void *VAR_7)
{
    if (VAR_5 == ((void*)0) || VAR_6 == ((void*)0)) {
        return VAR_0;
    }

    struct httpd_data *VAR_8 = (struct httpd_data *) VAR_5;
    struct httpd_ctrl_data VAR_9 = {
        .hc_msg = VAR_3,
        .hc_work = VAR_6,
        .hc_work_arg = VAR_7,
    };

    int VAR_10 = FUNC_2(VAR_8->msg_fd, VAR_8->config.ctrl_port, &VAR_9, sizeof(VAR_9));
    if (VAR_10 < 0) {
        FUNC_0(VAR_4, FUNC_1("failed to queue work"));
        return VAR_1;
    }

    return VAR_2;
}
