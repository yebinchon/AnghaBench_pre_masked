
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_open_sockets; } ;
struct httpd_data {TYPE_2__* hd_sd; TYPE_1__ config; } ;
struct TYPE_4__ {int fd; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct httpd_data*,int) ;

void FUNC_4(struct httpd_data *VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_1->config.max_open_sockets; VAR_2++) {
        if (VAR_1->hd_sd[VAR_2].fd != -1 && !FUNC_2(VAR_1->hd_sd[VAR_2].fd)) {
            FUNC_0(VAR_0, FUNC_1("Closing invalid socket %d"), VAR_1->hd_sd[VAR_2].fd);
            FUNC_3(VAR_1, VAR_1->hd_sd[VAR_2].fd);
        }
    }
}
