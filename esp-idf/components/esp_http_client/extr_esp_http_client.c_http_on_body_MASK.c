
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_4__* data; } ;
typedef TYPE_3__ http_parser ;
struct TYPE_10__ {TYPE_2__* response; } ;
typedef TYPE_4__ esp_http_client_t ;
struct TYPE_8__ {size_t data_process; TYPE_1__* buffer; } ;
struct TYPE_7__ {char* raw_data; size_t raw_len; scalar_t__ output_ptr; } ;


 int FUNC_0 (int ,char*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,int ,void*,size_t) ;
 int FUNC_2 (scalar_t__,char*,size_t) ;

__attribute__((used)) static int FUNC_3(http_parser *VAR_2, const char *VAR_3, size_t VAR_4)
{
    esp_http_client_t *VAR_5 = VAR_2->data;
    FUNC_0(VAR_1, "http_on_body %d", VAR_4);
    VAR_5->response->buffer->raw_data = (char *)VAR_3;
    if (VAR_5->response->buffer->output_ptr) {
        FUNC_2(VAR_5->response->buffer->output_ptr, (char *)VAR_3, VAR_4);
        VAR_5->response->buffer->output_ptr += VAR_4;
    }

    VAR_5->response->data_process += VAR_4;
    VAR_5->response->buffer->raw_len += VAR_4;
    FUNC_1(VAR_5, VAR_0, (void *)VAR_3, VAR_4);
    return 0;
}
