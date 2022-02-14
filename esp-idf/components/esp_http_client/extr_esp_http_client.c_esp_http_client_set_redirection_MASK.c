
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* esp_http_client_handle_t ;
typedef int esp_err_t ;
struct TYPE_4__ {int * location; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int *) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*,int *) ;

esp_err_t FUNC_2(esp_http_client_handle_t VAR_2)
{
    if (VAR_2 == ((void*)0)) {
        return VAR_0;
    }
    if (VAR_2->location == ((void*)0)) {
        return VAR_0;
    }
    FUNC_0(VAR_1, "Redirect to %s", VAR_2->location);
    return FUNC_1(VAR_2, VAR_2->location);
}
