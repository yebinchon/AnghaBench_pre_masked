
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int event_id; int data; int client; int data_len; int header_value; int header_key; } ;
typedef TYPE_1__ esp_http_client_event_t ;
typedef int esp_err_t ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_0 ;







 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int*,int *) ;

esp_err_t FUNC_4(esp_http_client_event_t *VAR_2)
{
    switch(VAR_2->event_id) {
        case 133:
            FUNC_0(VAR_1, "HTTP_EVENT_ERROR");
            break;
        case 131:
            FUNC_0(VAR_1, "HTTP_EVENT_ON_CONNECTED");
            break;
        case 132:
            FUNC_0(VAR_1, "HTTP_EVENT_HEADER_SENT");
            break;
        case 128:
            FUNC_0(VAR_1, "HTTP_EVENT_ON_HEADER, key=%s, value=%s", VAR_2->header_key, VAR_2->header_value);
            break;
        case 130:
            FUNC_0(VAR_1, "HTTP_EVENT_ON_DATA, len=%d", VAR_2->data_len);
            if (!FUNC_2(VAR_2->client)) {


            }

            break;
        case 129:
            FUNC_0(VAR_1, "HTTP_EVENT_ON_FINISH");
            break;
        case 134:
            FUNC_1(VAR_1, "HTTP_EVENT_DISCONNECTED");
            int VAR_3 = 0;
            esp_err_t VAR_4 = FUNC_3(VAR_2->data, &VAR_3, ((void*)0));
            if (VAR_4 != 0) {
                FUNC_1(VAR_1, "Last esp error code: 0x%x", VAR_4);
                FUNC_1(VAR_1, "Last mbedtls failure: 0x%x", VAR_3);
            }
            break;
    }
    return VAR_0;
}
