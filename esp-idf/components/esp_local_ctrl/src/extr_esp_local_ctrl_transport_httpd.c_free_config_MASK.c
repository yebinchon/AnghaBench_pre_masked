
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * httpd; } ;
typedef TYPE_1__ esp_local_ctrl_transport_config_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(esp_local_ctrl_transport_config_t *VAR_0)
{
    if (VAR_0 && VAR_0->httpd) {
        FUNC_0(VAR_0->httpd);
        VAR_0->httpd = ((void*)0);
    }
}
