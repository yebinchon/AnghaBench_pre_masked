
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock_db {int fd; } ;
struct TYPE_4__ {int max_open_sockets; } ;
struct TYPE_3__ {struct sock_db* sd; } ;
struct httpd_data {struct sock_db* hd_sd; TYPE_2__ config; TYPE_1__ hd_req_aux; } ;



struct sock_db *FUNC_0(struct httpd_data *VAR_0, int VAR_1)
{
    if (VAR_0 == ((void*)0)) {
        return ((void*)0);
    }



    if ((VAR_0->hd_req_aux.sd) && (VAR_0->hd_req_aux.sd->fd == VAR_1)) {


        return VAR_0->hd_req_aux.sd;
    }

    int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_0->config.max_open_sockets; VAR_2++) {
        if (VAR_0->hd_sd[VAR_2].fd == VAR_1) {
            return &VAR_0->hd_sd[VAR_2];
        }
    }
    return ((void*)0);
}
