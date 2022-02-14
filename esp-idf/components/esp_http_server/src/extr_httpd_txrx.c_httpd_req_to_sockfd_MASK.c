
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct httpd_req_aux {TYPE_1__* sd; } ;
struct TYPE_6__ {struct httpd_req_aux* aux; } ;
typedef TYPE_2__ httpd_req_t ;
struct TYPE_5__ {int fd; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(httpd_req_t *VAR_1)
{
    if (VAR_1 == ((void*)0)) {
        return -1;
    }

    if (!FUNC_2(VAR_1)) {
        FUNC_0(VAR_0, FUNC_1("invalid request"));
        return -1;
    }

    struct httpd_req_aux *VAR_2 = VAR_1->aux;
    return VAR_2->sd->fd;
}
