
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct httpd_req_aux {TYPE_1__* sd; } ;
struct TYPE_6__ {struct httpd_req_aux* aux; } ;
typedef TYPE_2__ httpd_req_t ;
struct TYPE_5__ {int (* send_fn ) (int ,int ,char const*,size_t,int ) ;int fd; int handle; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ,char const*,size_t,int ) ;

int FUNC_4(httpd_req_t *VAR_2, const char *VAR_3, size_t VAR_4)
{
    if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0)) {
        return VAR_0;
    }

    if (!FUNC_2(VAR_2)) {
        return VAR_0;
    }

    struct httpd_req_aux *VAR_5 = VAR_2->aux;
    int VAR_6 = VAR_5->sd->send_fn(VAR_5->sd->handle, VAR_5->sd->fd, VAR_3, VAR_4, 0);
    if (VAR_6 < 0) {
        FUNC_0(VAR_1, FUNC_1("error in send_fn"));
        return VAR_6;
    }
    return VAR_6;
}
