
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* subprotocol; struct TYPE_6__* password; struct TYPE_6__* username; struct TYPE_6__* scheme; struct TYPE_6__* path; struct TYPE_6__* uri; struct TYPE_6__* host; } ;
typedef TYPE_1__ websocket_config_storage_t ;
typedef TYPE_2__* esp_websocket_client_handle_t ;
typedef int esp_err_t ;
struct TYPE_7__ {TYPE_1__* config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

__attribute__((used)) static esp_err_t FUNC_2(esp_websocket_client_handle_t VAR_2)
{
    if (VAR_2 == ((void*)0)) {
        return VAR_0;
    }
    websocket_config_storage_t *VAR_3 = VAR_2->config;
    if (VAR_2->config == ((void*)0)) {
        return VAR_0;
    }
    FUNC_0(VAR_3->host);
    FUNC_0(VAR_3->uri);
    FUNC_0(VAR_3->path);
    FUNC_0(VAR_3->scheme);
    FUNC_0(VAR_3->username);
    FUNC_0(VAR_3->password);
    FUNC_0(VAR_3->subprotocol);
    FUNC_1(VAR_3, 0, sizeof(websocket_config_storage_t));
    FUNC_0(VAR_2->config);
    VAR_2->config = ((void*)0);
    return VAR_1;
}
