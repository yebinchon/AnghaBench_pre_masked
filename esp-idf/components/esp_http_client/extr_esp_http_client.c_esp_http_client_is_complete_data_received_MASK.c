
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* esp_http_client_handle_t ;
struct TYPE_5__ {TYPE_1__* response; int is_chunk_complete; } ;
struct TYPE_4__ {scalar_t__ data_process; scalar_t__ content_length; scalar_t__ is_chunked; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;

bool FUNC_1(esp_http_client_handle_t VAR_1)
{
    if (VAR_1->response->is_chunked) {
        if (!VAR_1->is_chunk_complete) {
            FUNC_0(VAR_0, "Chunks were not completely read");
            return 0;
        }
    } else {
        if (VAR_1->response->data_process != VAR_1->response->content_length) {
            FUNC_0(VAR_0, "Data processed %d != Data specified in content length %d", VAR_1->response->data_process, VAR_1->response->content_length);
            return 0;
        }
    }
    return 1;
}
