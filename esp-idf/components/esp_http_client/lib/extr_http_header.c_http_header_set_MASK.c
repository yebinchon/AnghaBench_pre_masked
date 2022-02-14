
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* http_header_item_handle_t ;
typedef int http_header_handle_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int value; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const*) ;
 TYPE_1__* FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,char const*,char const*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*) ;

esp_err_t FUNC_6(http_header_handle_t VAR_1, const char *VAR_2, const char *VAR_3)
{
    http_header_item_handle_t VAR_4;

    if (VAR_3 == ((void*)0)) {
        return FUNC_1(VAR_1, VAR_2);
    }

    VAR_4 = FUNC_2(VAR_1, VAR_2);

    if (VAR_4) {
        FUNC_0(VAR_4->value);
        VAR_4->value = FUNC_5(VAR_3);
        FUNC_4(&VAR_4->value);
        return VAR_0;
    }
    return FUNC_3(VAR_1, VAR_2, VAR_3);
}
