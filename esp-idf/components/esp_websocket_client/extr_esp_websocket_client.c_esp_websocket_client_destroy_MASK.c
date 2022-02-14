
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* esp_websocket_client_handle_t ;
typedef int esp_err_t ;
struct TYPE_6__ {scalar_t__ status_bits; struct TYPE_6__* rx_buffer; struct TYPE_6__* tx_buffer; int lock; int transport_list; scalar_t__ event_handle; scalar_t__ run; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;

esp_err_t FUNC_7(esp_websocket_client_handle_t VAR_2)
{
    if (VAR_2 == ((void*)0)) {
        return VAR_0;
    }
    if (VAR_2->run) {
        FUNC_3(VAR_2);
    }
    if (VAR_2->event_handle) {
        FUNC_0(VAR_2->event_handle);
    }
    FUNC_2(VAR_2);
    FUNC_1(VAR_2->transport_list);
    FUNC_6(VAR_2->lock);
    FUNC_4(VAR_2->tx_buffer);
    FUNC_4(VAR_2->rx_buffer);
    if (VAR_2->status_bits) {
        FUNC_5(VAR_2->status_bits);
    }
    FUNC_4(VAR_2);
    VAR_2 = ((void*)0);
    return VAR_1;
}
