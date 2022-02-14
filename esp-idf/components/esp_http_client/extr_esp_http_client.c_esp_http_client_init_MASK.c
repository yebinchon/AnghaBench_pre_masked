
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_10__ ;


struct http_parser_settings {int dummy; } ;
struct http_parser {int dummy; } ;
typedef int esp_transport_handle_t ;
typedef int esp_http_data_t ;
typedef int esp_http_client_t ;
typedef TYPE_9__* esp_http_client_handle_t ;
struct TYPE_18__ {int use_global_ca_store; int * url; int * path; int * host; scalar_t__ skip_cert_common_name_check; int client_key_pem; int client_cert_pem; int cert_pem; } ;
typedef TYPE_10__ esp_http_client_config_t ;
typedef int esp_http_buffer_t ;
typedef int esp_http_auth_data_t ;
struct TYPE_26__ {TYPE_9__* client; } ;
struct TYPE_23__ {int host; } ;
struct TYPE_27__ {int state; TYPE_8__ event; TYPE_7__* parser; TYPE_6__* parser_settings; TYPE_5__ connection_info; int buffer_size_rx; TYPE_4__* response; int buffer_size_tx; TYPE_2__* request; int transport_list; void* auth_data; } ;
struct TYPE_25__ {TYPE_9__* data; } ;
struct TYPE_24__ {int on_chunk_complete; int on_message_complete; int on_body; int on_headers_complete; int on_header_value; int on_header_field; int on_status; int on_url; int on_message_begin; } ;
struct TYPE_22__ {TYPE_3__* buffer; void* headers; } ;
struct TYPE_21__ {void* data; } ;
struct TYPE_20__ {TYPE_1__* buffer; void* headers; } ;
struct TYPE_19__ {void* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_9__*,TYPE_10__ const*) ;
 void* FUNC_2 (int,int) ;
 int FUNC_3 (TYPE_9__*) ;
 scalar_t__ FUNC_4 (TYPE_9__*,char*,int ) ;
 scalar_t__ FUNC_5 (TYPE_9__*,int *) ;
 scalar_t__ FUNC_6 (int ,int ,char*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (int ,int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;
 void* FUNC_16 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* FUNC_17 (int ) ;
 int FUNC_18 (int ) ;

esp_http_client_handle_t FUNC_19(const esp_http_client_config_t *VAR_15)
{

    esp_http_client_handle_t VAR_16;
    esp_transport_handle_t VAR_17;
    bool VAR_18;

    VAR_18 = (
                   (VAR_16 = FUNC_2(1, sizeof(esp_http_client_t))) &&
                   (VAR_16->parser = FUNC_2(1, sizeof(struct http_parser))) &&
                   (VAR_16->parser_settings = FUNC_2(1, sizeof(struct http_parser_settings))) &&
                   (VAR_16->auth_data = FUNC_2(1, sizeof(esp_http_auth_data_t))) &&
                   (VAR_16->request = FUNC_2(1, sizeof(esp_http_data_t))) &&
                   (VAR_16->request->headers = FUNC_16()) &&
                   (VAR_16->request->buffer = FUNC_2(1, sizeof(esp_http_buffer_t))) &&
                   (VAR_16->response = FUNC_2(1, sizeof(esp_http_data_t))) &&
                   (VAR_16->response->headers = FUNC_16()) &&
                   (VAR_16->response->buffer = FUNC_2(1, sizeof(esp_http_buffer_t)))
               );

    if (!VAR_18) {
        FUNC_0(VAR_5, "Error allocate memory");
        goto error;
    }

    VAR_18 = (
                   (VAR_16->transport_list = FUNC_7()) &&
                   (VAR_17 = FUNC_15()) &&
                   (FUNC_8(VAR_17, VAR_1) == VAR_3) &&
                   (FUNC_6(VAR_16->transport_list, VAR_17, "http") == VAR_3)
               );
    if (!VAR_18) {
        FUNC_0(VAR_5, "Error initialize transport");
        goto error;
    }
    if (FUNC_1(VAR_16, VAR_15) != VAR_3) {
        FUNC_0(VAR_5, "Error set configurations");
        goto error;
    }
    VAR_18 = (
                   (VAR_16->request->buffer->data = FUNC_17(VAR_16->buffer_size_tx)) &&
                   (VAR_16->response->buffer->data = FUNC_17(VAR_16->buffer_size_rx))
               );

    if (!VAR_18) {
        FUNC_0(VAR_5, "Allocation failed");
        goto error;
    }

    if (VAR_15->host != ((void*)0) && VAR_15->path != ((void*)0)) {
        VAR_18 = (
            (FUNC_4(VAR_16, "User-Agent", VAR_2) == VAR_3) &&
            (FUNC_4(VAR_16, "Host", VAR_16->connection_info.host) == VAR_3)
        );

        if (!VAR_18) {
            FUNC_0(VAR_5, "Error while setting default configurations");
            goto error;
        }
    } else if (VAR_15->url != ((void*)0)) {
        VAR_18 = (
                    (FUNC_5(VAR_16, VAR_15->url) == VAR_3) &&
                    (FUNC_4(VAR_16, "User-Agent", VAR_2) == VAR_3) &&
                    (FUNC_4(VAR_16, "Host", VAR_16->connection_info.host) == VAR_3)
                );

        if (!VAR_18) {
            FUNC_0(VAR_5, "Error while setting default configurations");
            goto error;
        }
    } else {
        FUNC_0(VAR_5, "config should have either URL or host & path");
        goto error;
    }

    VAR_16->parser_settings->on_message_begin = VAR_11;
    VAR_16->parser_settings->on_url = VAR_14;
    VAR_16->parser_settings->on_status = VAR_13;
    VAR_16->parser_settings->on_header_field = VAR_8;
    VAR_16->parser_settings->on_header_value = VAR_9;
    VAR_16->parser_settings->on_headers_complete = VAR_10;
    VAR_16->parser_settings->on_body = VAR_6;
    VAR_16->parser_settings->on_message_complete = VAR_12;
    VAR_16->parser_settings->on_chunk_complete = VAR_7;
    VAR_16->parser->data = VAR_16;
    VAR_16->event.client = VAR_16;

    VAR_16->state = VAR_4;
    return VAR_16;
error:
    FUNC_3(VAR_16);
    return ((void*)0);
}
