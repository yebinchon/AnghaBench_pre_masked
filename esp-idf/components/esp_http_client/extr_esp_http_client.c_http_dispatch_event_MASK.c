
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int data_len; void* data; int user_data; int event_id; } ;
struct TYPE_5__ {int (* event_handler ) (TYPE_2__*) ;int user_data; TYPE_2__ event; } ;
typedef TYPE_1__ esp_http_client_t ;
typedef TYPE_2__ esp_http_client_event_t ;
typedef int esp_http_client_event_id_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static esp_err_t FUNC_1(esp_http_client_t *VAR_1, esp_http_client_event_id_t VAR_2, void *VAR_3, int VAR_4)
{
    esp_http_client_event_t *VAR_5 = &VAR_1->event;

    if (VAR_1->event_handler) {
        VAR_5->event_id = VAR_2;
        VAR_5->user_data = VAR_1->user_data;
        VAR_5->data = VAR_3;
        VAR_5->data_len = VAR_4;
        return VAR_1->event_handler(VAR_5);
    }
    return VAR_0;
}
