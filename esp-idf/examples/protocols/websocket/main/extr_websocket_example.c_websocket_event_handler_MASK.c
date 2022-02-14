
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_2__ {scalar_t__ data_ptr; int data_len; int op_code; } ;
typedef TYPE_1__ esp_websocket_event_data_t ;
typedef int esp_event_base_t ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int ,char*) ;
 int VAR_0 ;





__attribute__((used)) static void FUNC_2(void *VAR_1, esp_event_base_t VAR_2, int32_t VAR_3, void *VAR_4)
{

    esp_websocket_event_data_t *VAR_5 = (esp_websocket_event_data_t *)VAR_4;
    switch (VAR_3) {
        case 131:
            FUNC_0(VAR_0, "WEBSOCKET_EVENT_CONNECTED");


            break;
        case 129:
            FUNC_0(VAR_0, "WEBSOCKET_EVENT_DISCONNECTED");
            break;

        case 130:
            FUNC_0(VAR_0, "WEBSOCKET_EVENT_DATA");
            FUNC_0(VAR_0, "Received opcode=%d", VAR_5->op_code);
            FUNC_1(VAR_0, "Received=%.*s\r\n", VAR_5->data_len, (char*)VAR_5->data_ptr);
            break;
        case 128:
            FUNC_0(VAR_0, "WEBSOCKET_EVENT_ERROR");
            break;
    }
}
