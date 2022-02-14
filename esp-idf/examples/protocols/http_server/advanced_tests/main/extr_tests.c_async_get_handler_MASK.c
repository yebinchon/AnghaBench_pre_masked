
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct async_resp_arg {scalar_t__ fd; int hd; } ;
struct TYPE_5__ {int handle; } ;
typedef TYPE_1__ httpd_req_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,struct async_resp_arg*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 struct async_resp_arg* FUNC_4 (int) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static esp_err_t FUNC_6(httpd_req_t *VAR_5)
{

    FUNC_3(VAR_5, "Hello World!", FUNC_5("Hello World!"));



    struct async_resp_arg *VAR_6 = FUNC_4(sizeof(struct async_resp_arg));
    VAR_6->hd = VAR_5->handle;
    VAR_6->fd = FUNC_2(VAR_5);
    if (VAR_6->fd < 0) {
        return VAR_0;
    }

    FUNC_0(VAR_3, "Queuing work fd : %d", VAR_6->fd);
    FUNC_1(VAR_5->handle, VAR_4, VAR_6);
    return VAR_1;

}
