
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ status; } ;
struct TYPE_3__ {scalar_t__ lru_purge_enable; } ;
struct httpd_data {int listen_fd; int ctrl_fd; TYPE_2__ hd_td; TYPE_1__ config; } ;
typedef int fd_set ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,...) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int,int *) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_9 (struct httpd_data*,int) ;
 scalar_t__ FUNC_10 (struct httpd_data*) ;
 int FUNC_11 (struct httpd_data*) ;
 int FUNC_12 (struct httpd_data*,int) ;
 int FUNC_13 (struct httpd_data*) ;
 int FUNC_14 (struct httpd_data*,int) ;
 scalar_t__ FUNC_15 (struct httpd_data*,int) ;
 scalar_t__ FUNC_16 (struct httpd_data*,int) ;
 int FUNC_17 (struct httpd_data*,int *,int*) ;
 int FUNC_18 (int,int *,int *,int *,int *) ;

__attribute__((used)) static esp_err_t FUNC_19(struct httpd_data *VAR_5)
{
    fd_set VAR_6;
    FUNC_5(&VAR_6);
    if (VAR_5->config.lru_purge_enable || FUNC_10(VAR_5)) {



        FUNC_4(VAR_5->listen_fd, &VAR_6);
    }
    FUNC_4(VAR_5->ctrl_fd, &VAR_6);

    int VAR_7;
    FUNC_17(VAR_5, &VAR_6, &VAR_7);
    int VAR_8 = FUNC_7(VAR_5->listen_fd, VAR_7);
    VAR_7 = VAR_8;
    VAR_8 = FUNC_7(VAR_5->ctrl_fd, VAR_7);

    FUNC_0(VAR_2, FUNC_6("doing select maxfd+1 = %d"), VAR_8 + 1);
    int VAR_9 = FUNC_18(VAR_8 + 1, &VAR_6, ((void*)0), ((void*)0), ((void*)0));
    if (VAR_9 < 0) {
        FUNC_1(VAR_2, FUNC_6("error in select (%d)"), VAR_4);
        FUNC_13(VAR_5);
        return VAR_1;
    }


    if (FUNC_3(VAR_5->ctrl_fd, &VAR_6)) {
        FUNC_0(VAR_2, FUNC_6("processing ctrl message"));
        FUNC_11(VAR_5);
        if (VAR_5->hd_td.status == VAR_3) {
            FUNC_0(VAR_2, FUNC_6("stopping thread"));
            return VAR_0;
        }
    }



    int VAR_10 = -1;
    while ((VAR_10 = FUNC_14(VAR_5, VAR_10)) != -1) {
        if (FUNC_3(VAR_10, &VAR_6) || (FUNC_15(VAR_5, VAR_10))) {
            FUNC_0(VAR_2, FUNC_6("processing socket %d"), VAR_10);
            if (FUNC_16(VAR_5, VAR_10) != VAR_1) {
                FUNC_0(VAR_2, FUNC_6("closing socket %d"), VAR_10);
                FUNC_8(VAR_10);


                VAR_10 = FUNC_12(VAR_5, VAR_10);
            }
        }
    }



    if (FUNC_3(VAR_5->listen_fd, &VAR_6)) {
        FUNC_0(VAR_2, FUNC_6("processing listen socket %d"), VAR_5->listen_fd);
        if (FUNC_9(VAR_5, VAR_5->listen_fd) != VAR_1) {
            FUNC_2(VAR_2, FUNC_6("error accepting new connection"));
        }
    }
    return VAR_1;
}
