
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* sub_protocol; struct TYPE_4__* path; struct TYPE_4__* buffer; } ;
typedef TYPE_1__ transport_ws_t ;
typedef int esp_transport_handle_t ;
typedef int esp_err_t ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static esp_err_t FUNC_2(esp_transport_handle_t VAR_0)
{
    transport_ws_t *VAR_1 = FUNC_0(VAR_0);
    FUNC_1(VAR_1->buffer);
    FUNC_1(VAR_1->path);
    FUNC_1(VAR_1->sub_protocol);
    FUNC_1(VAR_1);
    return 0;
}
