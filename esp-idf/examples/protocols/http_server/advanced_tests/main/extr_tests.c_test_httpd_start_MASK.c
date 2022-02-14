
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int * httpd_handle_t ;
struct TYPE_4__ {int max_uri_handlers; int server_port; int max_open_sockets; int stack_size; } ;
typedef TYPE_1__ httpd_config_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ VAR_1 ;
 TYPE_1__ FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int **,TYPE_1__*) ;
 int VAR_5 ;

__attribute__((used)) static httpd_handle_t FUNC_4(void)
{
    VAR_5 = FUNC_2();
    httpd_handle_t VAR_6;
    httpd_config_t VAR_7 = FUNC_1();

    VAR_7.max_uri_handlers = 9;
    VAR_7.server_port = 1234;


    VAR_7.max_open_sockets = (VAR_0 - 3);

    if (FUNC_3(&VAR_6, &VAR_7) == VAR_1) {
        FUNC_0(VAR_4, "Started HTTP server on port: '%d'", VAR_7.server_port);
        FUNC_0(VAR_4, "Max URI handlers: '%d'", VAR_7.max_uri_handlers);
        FUNC_0(VAR_4, "Max Open Sessions: '%d'", VAR_7.max_open_sockets);
        FUNC_0(VAR_4, "Max Header Length: '%d'", VAR_2);
        FUNC_0(VAR_4, "Max URI Length: '%d'", VAR_3);
        FUNC_0(VAR_4, "Max Stack Size: '%d'", VAR_7.stack_size);
        return VAR_6;
    }
    return ((void*)0);
}
