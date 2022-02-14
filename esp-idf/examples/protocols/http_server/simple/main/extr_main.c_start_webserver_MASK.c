
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * httpd_handle_t ;
struct TYPE_4__ {int server_port; } ;
typedef TYPE_1__ httpd_config_t ;


 int FUNC_0 (int ,char*,...) ;
 scalar_t__ VAR_0 ;
 TYPE_1__ FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int **,TYPE_1__*) ;

__attribute__((used)) static httpd_handle_t FUNC_4(void)
{
    httpd_handle_t VAR_5 = ((void*)0);
    httpd_config_t VAR_6 = FUNC_1();


    FUNC_0(VAR_1, "Starting server on port: '%d'", VAR_6.server_port);
    if (FUNC_3(&VAR_5, &VAR_6) == VAR_0) {

        FUNC_0(VAR_1, "Registering URI handlers");
        FUNC_2(VAR_5, &VAR_4);
        FUNC_2(VAR_5, &VAR_3);
        FUNC_2(VAR_5, &VAR_2);
        return VAR_5;
    }

    FUNC_0(VAR_1, "Error starting server!");
    return ((void*)0);
}
