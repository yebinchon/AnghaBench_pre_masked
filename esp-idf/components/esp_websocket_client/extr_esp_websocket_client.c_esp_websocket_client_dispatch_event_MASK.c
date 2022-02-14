
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int esp_websocket_event_id_t ;
struct TYPE_5__ {char const* data_ptr; int data_len; int op_code; } ;
typedef TYPE_1__ esp_websocket_event_data_t ;
typedef TYPE_2__* esp_websocket_client_handle_t ;
typedef int esp_err_t ;
struct TYPE_6__ {int event_handle; int last_opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,TYPE_1__*,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static esp_err_t FUNC_2(esp_websocket_client_handle_t VAR_3,
                                                     esp_websocket_event_id_t VAR_4,
                                                     const char *VAR_5,
                                                     int VAR_6)
{
    esp_err_t VAR_7;
    esp_websocket_event_data_t VAR_8;
    VAR_8.data_ptr = VAR_5;
    VAR_8.data_len = VAR_6;
    VAR_8.op_code = VAR_3->last_opcode;

    if ((VAR_7 = FUNC_1(VAR_3->event_handle,
                                 VAR_1, VAR_4,
                                 &VAR_8,
                                 sizeof(esp_websocket_event_data_t),
                                 VAR_2)) != VAR_0) {
        return VAR_7;
    }
    return FUNC_0(VAR_3->event_handle, 0);
}
