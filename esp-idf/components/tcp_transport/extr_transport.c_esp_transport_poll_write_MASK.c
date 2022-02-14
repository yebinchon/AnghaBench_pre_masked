
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* esp_transport_handle_t ;
struct TYPE_4__ {int (* _poll_write ) (TYPE_1__*,int) ;} ;


 int FUNC_0 (TYPE_1__*,int) ;

int FUNC_1(esp_transport_handle_t VAR_0, int VAR_1)
{
    if (VAR_0 && VAR_0->_poll_write) {
        return VAR_0->_poll_write(VAR_0, VAR_1);
    }
    return -1;
}
