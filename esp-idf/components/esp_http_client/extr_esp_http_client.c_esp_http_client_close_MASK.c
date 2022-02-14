
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* esp_http_client_handle_t ;
typedef int esp_err_t ;
struct TYPE_4__ {scalar_t__ state; int transport; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ) ;

esp_err_t FUNC_3(esp_http_client_handle_t VAR_3)
{
    if (VAR_3->state >= VAR_2) {
        FUNC_2(VAR_3, VAR_1, FUNC_1(VAR_3->transport), 0);
        VAR_3->state = VAR_2;
        return FUNC_0(VAR_3->transport);
    }
    return VAR_0;
}
