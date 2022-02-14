
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* http_header_item_handle_t ;
typedef int http_header_handle_t ;
typedef int esp_err_t ;
struct TYPE_5__ {struct TYPE_5__* value; struct TYPE_5__* key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (int ,char const*) ;
 int VAR_2 ;
 int VAR_3 ;

esp_err_t FUNC_3(http_header_handle_t VAR_4, const char *VAR_5)
{
    http_header_item_handle_t VAR_6 = FUNC_2(VAR_4, VAR_5);
    if (VAR_6) {
        FUNC_0(VAR_4, VAR_6, VAR_2, VAR_3);
        FUNC_1(VAR_6->key);
        FUNC_1(VAR_6->value);
        FUNC_1(VAR_6);
    } else {
        return VAR_0;
    }
    return VAR_1;
}
