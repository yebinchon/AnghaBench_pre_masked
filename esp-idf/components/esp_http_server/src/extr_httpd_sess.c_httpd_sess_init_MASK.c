
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_open_sockets; } ;
struct httpd_data {TYPE_2__* hd_sd; TYPE_1__ config; } ;
struct TYPE_4__ {int fd; int * ctx; } ;



void FUNC_0(struct httpd_data *VAR_0)
{
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->config.max_open_sockets; VAR_1++) {
        VAR_0->hd_sd[VAR_1].fd = -1;
        VAR_0->hd_sd[VAR_1].ctx = ((void*)0);
    }
}
