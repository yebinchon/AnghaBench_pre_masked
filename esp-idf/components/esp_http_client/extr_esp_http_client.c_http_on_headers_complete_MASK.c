
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nread; int status_code; int content_length; TYPE_3__* data; } ;
typedef TYPE_2__ http_parser ;
typedef TYPE_3__* esp_http_client_handle_t ;
struct TYPE_7__ {int state; TYPE_1__* response; } ;
struct TYPE_5__ {int data_offset; scalar_t__ data_process; int content_length; int status_code; } ;


 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(http_parser *VAR_2)
{
    esp_http_client_handle_t VAR_3 = VAR_2->data;
    VAR_3->response->status_code = VAR_2->status_code;
    VAR_3->response->data_offset = VAR_2->nread;
    VAR_3->response->content_length = VAR_2->content_length;
    VAR_3->response->data_process = 0;
    FUNC_0(VAR_1, "http_on_headers_complete, status=%d, offset=%d, nread=%d", VAR_2->status_code, VAR_3->response->data_offset, VAR_2->nread);
    VAR_3->state = VAR_0;
    return 0;
}
