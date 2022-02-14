
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct httpd_req_aux {TYPE_1__* sd; } ;
struct TYPE_5__ {struct httpd_req_aux* aux; } ;
typedef TYPE_2__ httpd_req_t ;
typedef int esp_err_t ;
struct TYPE_4__ {int (* send_fn ) (int ,int ,char const*,size_t,int ) ;int fd; int handle; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,...) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,char const*,size_t,int ) ;

__attribute__((used)) static esp_err_t FUNC_3(httpd_req_t *VAR_3, const char *VAR_4, size_t VAR_5)
{
    struct httpd_req_aux *VAR_6 = VAR_3->aux;
    int VAR_7;

    while (VAR_5 > 0) {
        VAR_7 = VAR_6->sd->send_fn(VAR_6->sd->handle, VAR_6->sd->fd, VAR_4, VAR_5, 0);
        if (VAR_7 < 0) {
            FUNC_0(VAR_2, FUNC_1("error in send_fn"));
            return VAR_0;
        }
        FUNC_0(VAR_2, FUNC_1("sent = %d"), VAR_7);
        VAR_4 += VAR_7;
        VAR_5 -= VAR_7;
    }
    return VAR_1;
}
