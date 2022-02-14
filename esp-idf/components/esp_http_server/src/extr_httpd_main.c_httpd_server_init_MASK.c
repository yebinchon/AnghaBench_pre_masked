
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
struct sockaddr_in6 {int sin6_port; struct in6_addr sin6_addr; int sin6_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {int ctrl_port; int backlog_conn; int server_port; } ;
struct httpd_data {int listen_fd; int ctrl_fd; int msg_fd; TYPE_1__ config; } ;
typedef int serv_addr ;
typedef int esp_err_t ;
typedef int enable ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 struct in6_addr VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int,struct sockaddr*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_11 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (int,int ,int ,int*,int) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static esp_err_t FUNC_10(struct httpd_data *VAR_12)
{
    int VAR_13 = FUNC_9(VAR_5, VAR_7, 0);
    if (VAR_13 < 0) {
        FUNC_0(VAR_10, FUNC_2("error in socket (%d)"), VAR_11);
        return VAR_1;
    }

    struct in6_addr VAR_14 = VAR_3;
    struct sockaddr_in6 VAR_15 = {
        .sin6_family = VAR_5,
        .sin6_addr = VAR_14,
        .sin6_port = FUNC_6(VAR_12->config.server_port)
    };



    int VAR_16 = 1;
    if (FUNC_8(VAR_13, VAR_8, VAR_9, &VAR_16, sizeof(VAR_16)) < 0) {


        FUNC_1(VAR_10, FUNC_2("error enabling SO_REUSEADDR (%d)"), VAR_11);
    }

    int VAR_17 = FUNC_3(VAR_13, (struct sockaddr *)&VAR_15, sizeof(VAR_15));
    if (VAR_17 < 0) {
        FUNC_0(VAR_10, FUNC_2("error in bind (%d)"), VAR_11);
        FUNC_4(VAR_13);
        return VAR_1;
    }

    VAR_17 = FUNC_7(VAR_13, VAR_12->config.backlog_conn);
    if (VAR_17 < 0) {
        FUNC_0(VAR_10, FUNC_2("error in listen (%d)"), VAR_11);
        FUNC_4(VAR_13);
        return VAR_1;
    }

    int VAR_18 = FUNC_5(VAR_12->config.ctrl_port);
    if (VAR_18 < 0) {
        FUNC_0(VAR_10, FUNC_2("error in creating ctrl socket (%d)"), VAR_11);
        FUNC_4(VAR_13);
        return VAR_1;
    }

    int VAR_19 = FUNC_9(VAR_0, VAR_6, VAR_4);
    if (VAR_19 < 0) {
        FUNC_0(VAR_10, FUNC_2("error in creating msg socket (%d)"), VAR_11);
        FUNC_4(VAR_13);
        FUNC_4(VAR_18);
        return VAR_1;
    }

    VAR_12->listen_fd = VAR_13;
    VAR_12->ctrl_fd = VAR_18;
    VAR_12->msg_fd = VAR_19;
    return VAR_2;
}
