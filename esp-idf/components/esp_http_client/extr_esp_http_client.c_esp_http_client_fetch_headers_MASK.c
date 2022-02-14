
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* esp_http_client_handle_t ;
struct TYPE_7__ {scalar_t__ len; int data; } ;
typedef TYPE_3__ esp_http_buffer_t ;
struct TYPE_6__ {scalar_t__ state; TYPE_1__* response; int parser_settings; int parser; int timeout_ms; int buffer_size_rx; int transport; } ;
struct TYPE_5__ {int status_code; scalar_t__ content_length; int is_chunked; TYPE_3__* buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;

int FUNC_3(esp_http_client_handle_t VAR_5)
{
    if (VAR_5->state < VAR_2) {
        return VAR_0;
    }

    VAR_5->state = VAR_1;
    esp_http_buffer_t *VAR_6 = VAR_5->response->buffer;
    VAR_5->response->status_code = -1;

    while (VAR_5->state < VAR_3) {
        VAR_6->len = FUNC_1(VAR_5->transport, VAR_6->data, VAR_5->buffer_size_rx, VAR_5->timeout_ms);
        if (VAR_6->len <= 0) {
            return VAR_0;
        }
        FUNC_2(VAR_5->parser, VAR_5->parser_settings, VAR_6->data, VAR_6->len);
    }
    FUNC_0(VAR_4, "content_length = %d", VAR_5->response->content_length);
    if (VAR_5->response->content_length <= 0) {
        VAR_5->response->is_chunked = 1;
        return 0;
    }
    return VAR_5->response->content_length;
}
