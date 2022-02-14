
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* esp_websocket_client_handle_t ;
typedef int esp_err_t ;
struct TYPE_6__ {scalar_t__ state; int status_bits; TYPE_1__* config; } ;
struct TYPE_5__ {int task_prio; int task_stack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,char*,int ,TYPE_2__*,int ,int *) ;

esp_err_t FUNC_3(esp_websocket_client_handle_t VAR_8)
{
    if (VAR_8 == ((void*)0)) {
        return VAR_0;
    }
    if (VAR_8->state >= VAR_5) {
        FUNC_0(VAR_4, "The client has started");
        return VAR_1;
    }
    if (FUNC_2(VAR_6, "websocket_task", VAR_8->config->task_stack, VAR_8, VAR_8->config->task_prio, ((void*)0)) != VAR_7) {
        FUNC_0(VAR_4, "Error create websocket task");
        return VAR_1;
    }
    FUNC_1(VAR_8->status_bits, VAR_3);
    return VAR_2;
}
