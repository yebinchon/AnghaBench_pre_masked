
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* esp_websocket_client_handle_t ;
typedef int esp_err_t ;
struct TYPE_4__ {int wait_timeout_ms; int state; int reconnect_tick_ms; int transport; } ;


 int FUNC_0 (int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int ,int *,int ) ;

__attribute__((used)) static esp_err_t FUNC_4(esp_websocket_client_handle_t VAR_5)
{
    FUNC_2(VAR_5->transport);
    VAR_5->wait_timeout_ms = VAR_3;
    VAR_5->reconnect_tick_ms = FUNC_1();
    VAR_5->state = VAR_4;
    FUNC_0(VAR_1, "Reconnect after %d ms", VAR_5->wait_timeout_ms);
    FUNC_3(VAR_5, VAR_2, ((void*)0), 0);
    return VAR_0;
}
