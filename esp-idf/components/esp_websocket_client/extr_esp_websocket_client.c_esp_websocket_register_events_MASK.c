
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_websocket_event_id_t ;
typedef TYPE_1__* esp_websocket_client_handle_t ;
typedef int esp_event_handler_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int event_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ,void*) ;

esp_err_t FUNC_1(esp_websocket_client_handle_t VAR_2,
                                        esp_websocket_event_id_t VAR_3,
                                        esp_event_handler_t VAR_4,
                                        void* VAR_5) {
    if (VAR_2 == ((void*)0)) {
        return VAR_0;
    }
    return FUNC_0(VAR_2->event_handle, VAR_1, VAR_3, VAR_4, VAR_5);
}
