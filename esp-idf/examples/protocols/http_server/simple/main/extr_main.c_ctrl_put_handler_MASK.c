
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int handle; } ;
typedef TYPE_1__ httpd_req_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (TYPE_1__*,char*,int) ;
 int FUNC_4 (TYPE_1__*,int *,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static esp_err_t FUNC_7(httpd_req_t *VAR_8)
{
    char VAR_9;
    int VAR_10;

    if ((VAR_10 = FUNC_3(VAR_8, &VAR_9, 1)) <= 0) {
        if (VAR_10 == VAR_3) {
            FUNC_5(VAR_8);
        }
        return VAR_0;
    }

    if (VAR_9 == '0') {

        FUNC_0(VAR_4, "Unregistering /hello and /echo URIs");
        FUNC_6(VAR_8->handle, "/hello");
        FUNC_6(VAR_8->handle, "/echo");

        FUNC_1(VAR_8->handle, VAR_2, VAR_7);
    }
    else {
        FUNC_0(VAR_4, "Registering /hello and /echo URIs");
        FUNC_2(VAR_8->handle, &VAR_6);
        FUNC_2(VAR_8->handle, &VAR_5);

        FUNC_1(VAR_8->handle, VAR_2, ((void*)0));
    }


    FUNC_4(VAR_8, ((void*)0), 0);
    return VAR_1;
}
