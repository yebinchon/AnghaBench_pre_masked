
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* esp_transport_handle_t ;
struct TYPE_6__ {TYPE_1__* (* _parent_transfer ) (TYPE_1__*) ;scalar_t__ _read; } ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;

esp_transport_handle_t FUNC_1(esp_transport_handle_t VAR_0)
{
    if (VAR_0 && VAR_0->_read) {
        return VAR_0->_parent_transfer(VAR_0);
    }
    return ((void*)0);
}
