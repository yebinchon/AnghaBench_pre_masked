
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* esp_http_client_handle_t ;
typedef int esp_err_t ;
struct TYPE_7__ {struct TYPE_7__* auth_header; struct TYPE_7__* location; struct TYPE_7__* current_header_key; struct TYPE_7__* auth_data; struct TYPE_7__* parser_settings; struct TYPE_7__* parser; struct TYPE_7__* response; struct TYPE_7__* buffer; struct TYPE_7__* data; int headers; struct TYPE_7__* request; int transport_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ) ;

esp_err_t FUNC_6(esp_http_client_handle_t VAR_2)
{
    if (VAR_2 == ((void*)0)) {
        return VAR_0;
    }
    FUNC_2(VAR_2);
    FUNC_3(VAR_2->transport_list);
    FUNC_5(VAR_2->request->headers);
    FUNC_4(VAR_2->request->buffer->data);
    FUNC_4(VAR_2->request->buffer);
    FUNC_4(VAR_2->request);
    FUNC_5(VAR_2->response->headers);
    FUNC_4(VAR_2->response->buffer->data);
    FUNC_4(VAR_2->response->buffer);
    FUNC_4(VAR_2->response);

    FUNC_4(VAR_2->parser);
    FUNC_4(VAR_2->parser_settings);
    FUNC_1(VAR_2);
    FUNC_0(VAR_2);
    FUNC_4(VAR_2->auth_data);
    FUNC_4(VAR_2->current_header_key);
    FUNC_4(VAR_2->location);
    FUNC_4(VAR_2->auth_header);
    FUNC_4(VAR_2);
    return VAR_1;
}
