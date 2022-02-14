
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * sub_protocol; } ;
typedef TYPE_1__ transport_ws_t ;
typedef int * esp_transport_handle_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*) ;

esp_err_t FUNC_3(esp_transport_handle_t VAR_3, const char *VAR_4)
{
    if (VAR_3 == ((void*)0)) {
        return VAR_0;
    }
    transport_ws_t *VAR_5 = FUNC_0(VAR_3);
    if (VAR_5->sub_protocol) {
        FUNC_1(VAR_5->sub_protocol);
    }
    if (VAR_4 == ((void*)0)) {
        VAR_5->sub_protocol = ((void*)0);
        return VAR_2;
    }
    VAR_5->sub_protocol = FUNC_2(VAR_4);
    if (VAR_5->sub_protocol == ((void*)0)) {
        return VAR_1;
    }
    return VAR_2;
}
