
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* data; } ;
typedef TYPE_2__ http_parser ;
struct TYPE_7__ {int is_chunk_complete; TYPE_1__* response; } ;
typedef TYPE_3__ esp_http_client_t ;
struct TYPE_5__ {int is_chunked; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(http_parser *VAR_1)
{
    esp_http_client_t *VAR_2 = VAR_1->data;
    FUNC_0(VAR_0, "on_message_begin");

    VAR_2->response->is_chunked = 0;
    VAR_2->is_chunk_complete = 0;
    return 0;
}
