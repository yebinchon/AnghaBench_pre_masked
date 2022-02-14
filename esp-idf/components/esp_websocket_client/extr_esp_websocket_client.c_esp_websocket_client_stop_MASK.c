
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* esp_websocket_client_handle_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int run; int state; int status_bits; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ,int,int,int ) ;

esp_err_t FUNC_2(esp_websocket_client_handle_t VAR_7)
{
    if (VAR_7 == ((void*)0)) {
        return VAR_0;
    }
    if (!VAR_7->run) {
        FUNC_0(VAR_4, "Client was not started");
        return VAR_1;
    }
    VAR_7->run = 0;
    FUNC_1(VAR_7->status_bits, VAR_3, 0, 1, VAR_6);
    VAR_7->state = VAR_5;
    return VAR_2;
}
