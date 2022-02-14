
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tv ;
struct timeval {scalar_t__ tv_usec; int tv_sec; } ;
struct sockaddr_in {int dummy; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {int lru_purge_enable; int send_wait_timeout; int recv_wait_timeout; } ;
struct httpd_data {TYPE_1__ config; } ;
typedef int socklen_t ;
typedef scalar_t__ esp_err_t ;
typedef int addr_from ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,...) ;
 int FUNC_1 (int ,int ,...) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,struct sockaddr*,int*) ;
 int FUNC_4 (int) ;
 int VAR_6 ;
 int FUNC_5 (struct httpd_data*) ;
 scalar_t__ FUNC_6 (struct httpd_data*) ;
 scalar_t__ FUNC_7 (struct httpd_data*,int) ;
 int FUNC_8 (int,int ,int ,char const*,int) ;

__attribute__((used)) static esp_err_t FUNC_9(struct httpd_data *VAR_7, int VAR_8)
{

    if (VAR_7->config.lru_purge_enable == 1) {
        if (!FUNC_5(VAR_7)) {

            return FUNC_6(VAR_7);






       }
    }

    struct sockaddr_in VAR_9;
    socklen_t VAR_10 = sizeof(VAR_9);
    int VAR_11 = FUNC_3(VAR_8, (struct sockaddr *)&VAR_9, &VAR_10);
    if (VAR_11 < 0) {
        FUNC_1(VAR_5, FUNC_2("error in accept (%d)"), VAR_6);
        return VAR_0;
    }
    FUNC_0(VAR_5, FUNC_2("newfd = %d"), VAR_11);

    struct timeval VAR_12;

    VAR_12.tv_sec = VAR_7->config.recv_wait_timeout;
    VAR_12.tv_usec = 0;
    FUNC_8(VAR_11, VAR_2, VAR_3, (const char*)&VAR_12, sizeof(VAR_12));


    VAR_12.tv_sec = VAR_7->config.send_wait_timeout;
    VAR_12.tv_usec = 0;
    FUNC_8(VAR_11, VAR_2, VAR_4, (const char*)&VAR_12, sizeof(VAR_12));

    if (VAR_1 != FUNC_7(VAR_7, VAR_11)) {
        FUNC_1(VAR_5, FUNC_2("session creation failed"));
        FUNC_4(VAR_11);
        return VAR_0;
    }
    FUNC_0(VAR_5, FUNC_2("complete"));
    return VAR_1;
}
