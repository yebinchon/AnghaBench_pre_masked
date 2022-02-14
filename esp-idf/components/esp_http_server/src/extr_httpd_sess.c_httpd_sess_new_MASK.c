
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_open_sockets; scalar_t__ (* open_fn ) (struct httpd_data*,int) ;} ;
struct httpd_data {TYPE_2__* hd_sd; TYPE_1__ config; } ;
typedef scalar_t__ httpd_handle_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_4__ {int fd; int recv_fn; int send_fn; scalar_t__ handle; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct httpd_data*,int) ;
 scalar_t__ FUNC_4 (struct httpd_data*,int) ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_6 (struct httpd_data*,int) ;

esp_err_t FUNC_7(struct httpd_data *VAR_5, int VAR_6)
{
    FUNC_0(VAR_2, FUNC_2("fd = %d"), VAR_6);

    if (FUNC_4(VAR_5, VAR_6)) {
        FUNC_1(VAR_2, FUNC_2("session already exists with fd = %d"), VAR_6);
        return VAR_0;
    }

    int VAR_7;
    for (VAR_7 = 0; VAR_7 < VAR_5->config.max_open_sockets; VAR_7++) {
        if (VAR_5->hd_sd[VAR_7].fd == -1) {
            FUNC_5(&VAR_5->hd_sd[VAR_7], 0, sizeof(VAR_5->hd_sd[VAR_7]));
            VAR_5->hd_sd[VAR_7].fd = VAR_6;
            VAR_5->hd_sd[VAR_7].handle = (httpd_handle_t) VAR_5;
            VAR_5->hd_sd[VAR_7].send_fn = VAR_4;
            VAR_5->hd_sd[VAR_7].recv_fn = VAR_3;


            if (VAR_5->config.open_fn) {
                esp_err_t VAR_8 = VAR_5->config.open_fn(VAR_5, VAR_5->hd_sd[VAR_7].fd);
                if (VAR_8 != VAR_1) {
                    FUNC_3(VAR_5, VAR_5->hd_sd[VAR_7].fd);
                    FUNC_0(VAR_2, FUNC_2("open_fn failed for fd = %d"), VAR_6);
                    return VAR_8;
                }
            }
            return VAR_1;
        }
    }
    FUNC_0(VAR_2, FUNC_2("unable to launch session for fd = %d"), VAR_6);
    return VAR_0;
}
