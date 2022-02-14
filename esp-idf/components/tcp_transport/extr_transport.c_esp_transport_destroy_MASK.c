
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* esp_transport_handle_t ;
typedef int esp_err_t ;
struct TYPE_5__ {struct TYPE_5__* scheme; int (* _destroy ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

esp_err_t FUNC_2(esp_transport_handle_t VAR_1)
{
    if (VAR_1->_destroy) {
        VAR_1->_destroy(VAR_1);
    }
    if (VAR_1->scheme) {
        FUNC_0(VAR_1->scheme);
    }
    FUNC_0(VAR_1);
    return VAR_0;
}
