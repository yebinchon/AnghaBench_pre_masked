
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* http_header_item_handle_t ;
typedef int http_header_handle_t ;
typedef int esp_err_t ;
struct TYPE_6__ {struct TYPE_6__* value; struct TYPE_6__* key; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;

esp_err_t FUNC_4(http_header_handle_t VAR_2)
{
    http_header_item_handle_t VAR_3 = FUNC_0(VAR_2), VAR_4;
    while (VAR_3 != ((void*)0)) {
        VAR_4 = FUNC_2(VAR_3, VAR_1);
        FUNC_3(VAR_3->key);
        FUNC_3(VAR_3->value);
        FUNC_3(VAR_3);
        VAR_3 = VAR_4;
    }
    FUNC_1(VAR_2);
    return VAR_0;
}
