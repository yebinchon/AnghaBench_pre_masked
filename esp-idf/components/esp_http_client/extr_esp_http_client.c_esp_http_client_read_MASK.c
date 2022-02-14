
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int esp_log_level_t ;
typedef TYPE_2__* esp_http_client_handle_t ;
struct TYPE_7__ {int raw_len; int raw_data; char* output_ptr; int data; } ;
typedef TYPE_3__ esp_http_buffer_t ;
struct TYPE_6__ {int buffer_size_rx; int parser_settings; int parser; TYPE_1__* response; int timeout_ms; int transport; int is_chunk_complete; } ;
struct TYPE_5__ {int is_chunked; int content_length; int data_process; TYPE_3__* buffer; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int,int,...) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,char*,int,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (char*,int,int) ;

int FUNC_5(esp_http_client_handle_t VAR_6, char *VAR_7, int VAR_8)
{
    esp_http_buffer_t *VAR_9 = VAR_6->response->buffer;

    int VAR_10 = VAR_1, VAR_11 = 0;
    if (VAR_9->raw_len) {
        int VAR_12 = VAR_6->response->buffer->raw_len;
        if (VAR_12 > VAR_8) {
            VAR_12 = VAR_8;
        }
        FUNC_4(VAR_7, VAR_9->raw_data, VAR_12);
        VAR_9->raw_len -= VAR_12;
        VAR_9->raw_data += VAR_12;
        VAR_11 = VAR_12;
    }
    int VAR_13 = VAR_8 - VAR_11;
    bool VAR_14 = 1;
    while (VAR_13 > 0 && VAR_14) {
        if (VAR_6->response->is_chunked) {
            VAR_14 = !VAR_6->is_chunk_complete;
        } else {
            VAR_14 = VAR_6->response->data_process < VAR_6->response->content_length;
        }
        FUNC_0(VAR_4, "is_data_remain=%d, is_chunked=%d, content_length=%d", VAR_14, VAR_6->response->is_chunked, VAR_6->response->content_length);
        if (!VAR_14) {
            break;
        }
        int VAR_15 = VAR_13;
        if (VAR_15 > VAR_6->buffer_size_rx) {
            VAR_15 = VAR_6->buffer_size_rx;
        }
        VAR_5 = 0;
        VAR_10 = FUNC_2(VAR_6->transport, VAR_9->data, VAR_15, VAR_6->timeout_ms);
        FUNC_0(VAR_4, "need_read=%d, byte_to_read=%d, rlen=%d, ridx=%d", VAR_13, VAR_15, VAR_10, VAR_11);

        if (VAR_10 <= 0) {
            if (VAR_5 != 0) {
                esp_log_level_t VAR_16 = VAR_3;


                if (VAR_10 == -1 && VAR_5 == VAR_0 && VAR_6->response->is_chunked) {

                    FUNC_3(VAR_6->parser, VAR_6->parser_settings, VAR_9->data, 0);

                    VAR_16 = VAR_2;
                }
                FUNC_1(VAR_16, VAR_4, "esp_transport_read returned:%d and errno:%d ", VAR_10, VAR_5);
            }
            return VAR_11;
        }
        VAR_9->output_ptr = VAR_7 + VAR_11;
        FUNC_3(VAR_6->parser, VAR_6->parser_settings, VAR_9->data, VAR_10);
        VAR_11 += VAR_9->raw_len;
        VAR_13 -= VAR_9->raw_len;

        VAR_9->raw_len = 0;
        VAR_9->output_ptr = ((void*)0);
    }

    return VAR_11;
}
