
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {int max_open_sockets; } ;
struct httpd_data {TYPE_2__* hd_sd; TYPE_1__ config; } ;
typedef int esp_err_t ;
struct TYPE_4__ {int fd; scalar_t__ lru_counter; } ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct httpd_data*,int) ;

esp_err_t FUNC_3(struct httpd_data *VAR_3)
{
    uint64_t VAR_4 = VAR_2;
    int VAR_5 = -1;
    int VAR_6;
    for (VAR_6 = 0; VAR_6 < VAR_3->config.max_open_sockets; VAR_6++) {




        if (VAR_3->hd_sd[VAR_6].fd == -1) {
            return VAR_0;
        }
        if (VAR_3->hd_sd[VAR_6].lru_counter < VAR_4) {
            VAR_4 = VAR_3->hd_sd[VAR_6].lru_counter;
            VAR_5 = VAR_3->hd_sd[VAR_6].fd;
        }
    }
    FUNC_0(VAR_1, FUNC_1("fd = %d"), VAR_5);
    return FUNC_2(VAR_3, VAR_5);
}
