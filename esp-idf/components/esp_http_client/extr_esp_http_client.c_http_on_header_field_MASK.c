
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* data; } ;
typedef TYPE_1__ http_parser ;
struct TYPE_5__ {int current_header_key; } ;
typedef TYPE_2__ esp_http_client_t ;


 int FUNC_0 (int *,char const*,size_t) ;

__attribute__((used)) static int FUNC_1(http_parser *VAR_0, const char *VAR_1, size_t VAR_2)
{
    esp_http_client_t *VAR_3 = VAR_0->data;
    FUNC_0(&VAR_3->current_header_key, VAR_1, VAR_2);

    return 0;
}
