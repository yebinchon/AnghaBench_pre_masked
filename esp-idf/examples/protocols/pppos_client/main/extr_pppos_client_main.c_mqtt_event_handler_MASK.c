
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* esp_mqtt_event_handle_t ;
typedef int esp_mqtt_client_handle_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int event_id; int msg_id; char* topic_len; char* data_len; int data; int topic; int client; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int FUNC_1 (int ,char*,char*,int ,int ,int ) ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_3 ;
 int FUNC_3 (char*,char*,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static esp_err_t FUNC_5(esp_mqtt_event_handle_t VAR_4)
{
    esp_mqtt_client_handle_t VAR_5 = VAR_4->client;
    int VAR_6;
    switch (VAR_4->event_id) {
    case 134:
        FUNC_0(VAR_2, "MQTT_EVENT_CONNECTED");
        VAR_6 = FUNC_2(VAR_5, "/topic/esp-pppos", 0);
        FUNC_0(VAR_2, "sent subscribe successful, msg_id=%d", VAR_6);
        break;
    case 132:
        FUNC_0(VAR_2, "MQTT_EVENT_DISCONNECTED");
        break;
    case 129:
        FUNC_0(VAR_2, "MQTT_EVENT_SUBSCRIBED, msg_id=%d", VAR_4->msg_id);
        VAR_6 = FUNC_1(VAR_5, "/topic/esp-pppos", "esp32-pppos", 0, 0, 0);
        FUNC_0(VAR_2, "sent publish successful, msg_id=%d", VAR_6);
        break;
    case 128:
        FUNC_0(VAR_2, "MQTT_EVENT_UNSUBSCRIBED, msg_id=%d", VAR_4->msg_id);
        break;
    case 130:
        FUNC_0(VAR_2, "MQTT_EVENT_PUBLISHED, msg_id=%d", VAR_4->msg_id);
        break;
    case 133:
        FUNC_0(VAR_2, "MQTT_EVENT_DATA");
        FUNC_3("TOPIC=%.*s\r\n", VAR_4->topic_len, VAR_4->topic);
        FUNC_3("DATA=%.*s\r\n", VAR_4->data_len, VAR_4->data);
        FUNC_4(VAR_3, VAR_1);
        break;
    case 131:
        FUNC_0(VAR_2, "MQTT_EVENT_ERROR");
        break;
    default:
        FUNC_0(VAR_2, "MQTT other event id: %d", VAR_4->event_id);
        break;
    }
    return VAR_0;
}
