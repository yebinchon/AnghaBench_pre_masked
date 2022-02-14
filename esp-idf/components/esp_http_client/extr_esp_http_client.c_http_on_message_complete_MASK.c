
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ http_parser ;
typedef TYPE_2__* esp_http_client_handle_t ;
struct TYPE_5__ {int is_chunk_complete; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(http_parser *VAR_1)
{
    FUNC_0(VAR_0, "http_on_message_complete, parser=%x", (int)VAR_1);
    esp_http_client_handle_t VAR_2 = VAR_1->data;
    VAR_2->is_chunk_complete = 1;
    return 0;
}
