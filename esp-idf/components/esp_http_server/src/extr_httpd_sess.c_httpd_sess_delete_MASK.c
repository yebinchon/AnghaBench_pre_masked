
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int max_open_sockets; int (* close_fn ) (struct httpd_data*,int) ;} ;
struct httpd_data {TYPE_2__* hd_sd; TYPE_1__ config; } ;
struct TYPE_4__ {int fd; int (* free_transport_ctx ) (int *) ;int * transport_ctx; int (* free_ctx ) (int *) ;int * ctx; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct httpd_data*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct httpd_data *VAR_1, int VAR_2)
{
    FUNC_0(VAR_0, FUNC_1("fd = %d"), VAR_2);
    int VAR_3;
    int VAR_4 = -1;
    for (VAR_3 = 0; VAR_3 < VAR_1->config.max_open_sockets; VAR_3++) {
        if (VAR_1->hd_sd[VAR_3].fd == VAR_2) {

            if (VAR_1->config.close_fn) {
                VAR_1->config.close_fn(VAR_1, VAR_2);
            }


            if (VAR_1->hd_sd[VAR_3].ctx) {
                if (VAR_1->hd_sd[VAR_3].free_ctx) {
                    VAR_1->hd_sd[VAR_3].free_ctx(VAR_1->hd_sd[VAR_3].ctx);
                } else {
                    FUNC_2(VAR_1->hd_sd[VAR_3].ctx);
                }
                VAR_1->hd_sd[VAR_3].ctx = ((void*)0);
                VAR_1->hd_sd[VAR_3].free_ctx = ((void*)0);
            }


            if (VAR_1->hd_sd[VAR_3].transport_ctx) {
                if (VAR_1->hd_sd[VAR_3].free_transport_ctx) {
                    VAR_1->hd_sd[VAR_3].free_transport_ctx(VAR_1->hd_sd[VAR_3].transport_ctx);
                } else {
                    FUNC_2(VAR_1->hd_sd[VAR_3].transport_ctx);
                }
                VAR_1->hd_sd[VAR_3].transport_ctx = ((void*)0);
                VAR_1->hd_sd[VAR_3].free_transport_ctx = ((void*)0);
            }


            VAR_1->hd_sd[VAR_3].fd = -1;
            break;
        } else if (VAR_1->hd_sd[VAR_3].fd != -1) {



            VAR_4 = VAR_1->hd_sd[VAR_3].fd;
        }
    }
    return VAR_4;
}
