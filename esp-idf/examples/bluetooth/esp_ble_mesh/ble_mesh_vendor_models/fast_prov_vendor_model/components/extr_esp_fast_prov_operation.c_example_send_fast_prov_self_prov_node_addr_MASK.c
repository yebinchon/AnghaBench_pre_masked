
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_buf_simple {int len; int data; } ;
struct TYPE_5__ {int role; int timeout; int dst; int app_idx; int net_idx; } ;
typedef TYPE_1__ example_msg_common_info_t ;
typedef int esp_err_t ;
struct TYPE_6__ {int send_rel; int send_ttl; int addr; int app_idx; int net_idx; } ;
typedef TYPE_2__ esp_ble_mesh_msg_ctx_t ;
typedef int esp_ble_mesh_model_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int *,TYPE_2__*,int ,int,int ,int ,int,int ) ;

esp_err_t FUNC_2(esp_ble_mesh_model_t *VAR_2,
        example_msg_common_info_t *VAR_3,
        struct net_buf_simple *VAR_4)
{
    if (!VAR_2 || !VAR_3 || !VAR_4 || (VAR_4->len % 2)) {
        return VAR_1;
    }

    FUNC_0("Send node address", VAR_4->data, VAR_4->len);

    esp_ble_mesh_msg_ctx_t VAR_5 = {
        .net_idx = VAR_3->net_idx,
        .app_idx = VAR_3->app_idx,
        .addr = VAR_3->dst,
        .send_rel = 0,
        .send_ttl = 0,
    };

    return FUNC_1(VAR_2, &VAR_5,
            VAR_0,
            VAR_4->len, VAR_4->data, VAR_3->timeout, 1, VAR_3->role);
}
