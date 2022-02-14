
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int payload_transfer_func ;
typedef TYPE_1__* esp_transport_handle_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int _parent_transfer; } ;


 int VAR_0 ;
 int VAR_1 ;

esp_err_t FUNC_0(esp_transport_handle_t VAR_2, payload_transfer_func VAR_3)
{
    if (VAR_2 == ((void*)0)) {
        return VAR_0;
    }
    VAR_2->_parent_transfer = VAR_3;
    return VAR_1;
}
