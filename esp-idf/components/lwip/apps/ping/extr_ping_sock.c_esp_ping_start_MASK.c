
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ping_task_hdl; int flags; } ;
typedef TYPE_1__ esp_ping_t ;
typedef scalar_t__ esp_ping_handle_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;

esp_err_t FUNC_2(esp_ping_handle_t VAR_4)
{
    esp_err_t VAR_5 = VAR_1;
    esp_ping_t *VAR_6 = (esp_ping_t *)VAR_4;
    FUNC_0(VAR_6, "ping handle can't be null", VAR_3, VAR_0);
    VAR_6->flags |= VAR_2;
    FUNC_1(VAR_6->ping_task_hdl);
    return VAR_1;
err:
    return VAR_5;
}
