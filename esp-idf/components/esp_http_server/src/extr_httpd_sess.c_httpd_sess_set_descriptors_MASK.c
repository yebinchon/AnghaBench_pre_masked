
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_open_sockets; } ;
struct httpd_data {TYPE_2__* hd_sd; TYPE_1__ config; } ;
typedef int fd_set ;
struct TYPE_4__ {int fd; } ;


 int FUNC_0 (int,int *) ;

void FUNC_1(struct httpd_data *VAR_0,
                                fd_set *VAR_1, int *VAR_2)
{
    int VAR_3;
    *VAR_2 = -1;
    for (VAR_3 = 0; VAR_3 < VAR_0->config.max_open_sockets; VAR_3++) {
        if (VAR_0->hd_sd[VAR_3].fd != -1) {
            FUNC_0(VAR_0->hd_sd[VAR_3].fd, VAR_1);
            if (VAR_0->hd_sd[VAR_3].fd > *VAR_2) {
                *VAR_2 = VAR_0->hd_sd[VAR_3].fd;
            }
        }
    }
}
