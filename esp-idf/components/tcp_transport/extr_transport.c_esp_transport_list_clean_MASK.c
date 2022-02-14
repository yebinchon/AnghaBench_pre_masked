
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* esp_transport_list_handle_t ;
typedef int * esp_transport_handle_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int list; } ;


 int VAR_0 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;

esp_err_t FUNC_4(esp_transport_list_handle_t VAR_2)
{
    esp_transport_handle_t VAR_3 = FUNC_0(&VAR_2->list);
    esp_transport_handle_t VAR_4;
    while (VAR_3 != ((void*)0)) {
        VAR_4 = FUNC_2(VAR_3, VAR_1);
        FUNC_3(VAR_3);
        VAR_3 = VAR_4;
    }
    FUNC_1(&VAR_2->list);
    return VAR_0;
}
