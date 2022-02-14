
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
typedef TYPE_4__* esp_http_client_handle_t ;
struct TYPE_8__ {int * header_value; int * header_key; } ;
struct TYPE_10__ {int * current_header_value; int * current_header_key; TYPE_2__ event; int * auth_header; TYPE_1__* response; int * location; } ;
struct TYPE_7__ {int is_chunked; } ;


 int FUNC_0 (int ,char*,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*,int ,int *,int ) ;
 int FUNC_3 (int **,char const*,size_t) ;
 scalar_t__ FUNC_4 (char const*,char*,size_t) ;
 scalar_t__ FUNC_5 (int *,char*) ;

__attribute__((used)) static int FUNC_6(http_parser *VAR_2, const char *VAR_3, size_t VAR_4)
{
    esp_http_client_handle_t VAR_5 = VAR_2->data;
    if (VAR_5->current_header_key == ((void*)0)) {
        return 0;
    }
    if (FUNC_5(VAR_5->current_header_key, "Location") == 0) {
        FUNC_3(&VAR_5->location, VAR_3, VAR_4);
    } else if (FUNC_5(VAR_5->current_header_key, "Transfer-Encoding") == 0
               && FUNC_4(VAR_3, "chunked", VAR_4) == 0) {
        VAR_5->response->is_chunked = 1;
    } else if (FUNC_5(VAR_5->current_header_key, "WWW-Authenticate") == 0) {
        FUNC_3(&VAR_5->auth_header, VAR_3, VAR_4);
    }
    FUNC_3(&VAR_5->current_header_value, VAR_3, VAR_4);

    FUNC_0(VAR_1, "HEADER=%s:%s", VAR_5->current_header_key, VAR_5->current_header_value);
    VAR_5->event.header_key = VAR_5->current_header_key;
    VAR_5->event.header_value = VAR_5->current_header_value;
    FUNC_2(VAR_5, VAR_0, ((void*)0), 0);
    FUNC_1(VAR_5->current_header_key);
    FUNC_1(VAR_5->current_header_value);
    VAR_5->current_header_key = ((void*)0);
    VAR_5->current_header_value = ((void*)0);
    return 0;
}
