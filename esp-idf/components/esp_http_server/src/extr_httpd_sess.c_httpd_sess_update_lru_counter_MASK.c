
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_open_sockets; } ;
struct httpd_data {TYPE_2__* hd_sd; TYPE_1__ config; } ;
typedef int * httpd_handle_t ;
typedef int esp_err_t ;
struct TYPE_4__ {int fd; int lru_counter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;

esp_err_t FUNC_1(httpd_handle_t VAR_3, int VAR_4)
{
    if (VAR_3 == ((void*)0)) {
        return VAR_0;
    }


    struct httpd_data *VAR_5 = (struct httpd_data *) VAR_3;
    int VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_5->config.max_open_sockets; VAR_6++) {
        if (VAR_5->hd_sd[VAR_6].fd == VAR_4) {
            VAR_5->hd_sd[VAR_6].lru_counter = FUNC_0();
            return VAR_2;
        }
    }
    return VAR_1;
}
