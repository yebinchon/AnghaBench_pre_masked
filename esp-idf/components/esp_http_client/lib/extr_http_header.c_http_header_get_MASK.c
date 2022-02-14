
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* http_header_item_handle_t ;
typedef int http_header_handle_t ;
typedef int esp_err_t ;
struct TYPE_3__ {char* value; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ,char const*) ;

esp_err_t FUNC_1(http_header_handle_t VAR_1, const char *VAR_2, char **VAR_3)
{
    http_header_item_handle_t VAR_4;

    VAR_4 = FUNC_0(VAR_1, VAR_2);
    if (VAR_4) {
        *VAR_3 = VAR_4->value;
    } else {
        *VAR_3 = ((void*)0);
    }

    return VAR_0;
}
