
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_3__* esp_http_client_handle_t ;
struct TYPE_9__ {int data; } ;
typedef TYPE_4__ esp_http_buffer_t ;
struct TYPE_6__ {scalar_t__ method; } ;
struct TYPE_8__ {scalar_t__ state; int parser_settings; int parser; int timeout_ms; int buffer_size_rx; int transport; TYPE_2__* response; TYPE_1__ connection_info; } ;
struct TYPE_7__ {int content_length; int data_process; TYPE_4__* buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_3(esp_http_client_handle_t VAR_4)
{
    if (VAR_4->state < VAR_2) {
        return VAR_0;
    }

    if (VAR_4->connection_info.method == VAR_1) {
        return 0;
    }

    esp_http_buffer_t *VAR_5 = VAR_4->response->buffer;

    FUNC_0(VAR_3, "data_process=%d, content_length=%d", VAR_4->response->data_process, VAR_4->response->content_length);

    int VAR_6 = FUNC_1(VAR_4->transport, VAR_5->data, VAR_4->buffer_size_rx, VAR_4->timeout_ms);
    if (VAR_6 >= 0) {
        FUNC_2(VAR_4->parser, VAR_4->parser_settings, VAR_5->data, VAR_6);
    }
    return VAR_6;
}
