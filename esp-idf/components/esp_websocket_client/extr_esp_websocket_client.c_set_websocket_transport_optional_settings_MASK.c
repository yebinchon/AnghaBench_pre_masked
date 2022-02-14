
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* esp_websocket_client_handle_t ;
typedef scalar_t__ esp_transport_handle_t ;
struct TYPE_5__ {TYPE_1__* config; } ;
struct TYPE_4__ {scalar_t__ subprotocol; scalar_t__ path; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_2(esp_websocket_client_handle_t VAR_0, esp_transport_handle_t VAR_1)
{
    if (VAR_1 && VAR_0->config->path) {
        FUNC_0(VAR_1, VAR_0->config->path);
    }
    if (VAR_1 && VAR_0->config->subprotocol) {
        FUNC_1(VAR_1, VAR_0->config->subprotocol);
    }
}
