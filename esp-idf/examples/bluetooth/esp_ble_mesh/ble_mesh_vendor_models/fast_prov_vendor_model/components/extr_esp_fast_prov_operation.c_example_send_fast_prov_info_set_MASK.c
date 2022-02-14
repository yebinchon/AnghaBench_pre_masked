
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct net_buf_simple {int data; int len; } ;
struct TYPE_7__ {int role; int timeout; int dst; int app_idx; int net_idx; } ;
typedef TYPE_1__ example_msg_common_info_t ;
struct TYPE_8__ {int ctx_flags; int unicast_min; int unicast_max; int net_idx; int group_addr; int node_addr_cnt; int prov_addr; int action; int match_len; int match_val; int iv_index; int flags; } ;
typedef TYPE_2__ example_fast_prov_info_set_t ;
typedef int esp_err_t ;
struct TYPE_9__ {int send_rel; int send_ttl; int addr; int app_idx; int net_idx; } ;
typedef TYPE_3__ esp_ble_mesh_msg_ctx_t ;
typedef int esp_ble_mesh_model_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (char*,int ,int ) ;
 int VAR_3 ;
 struct net_buf_simple* FUNC_3 (int ) ;
 int FUNC_4 (struct net_buf_simple*) ;
 int FUNC_5 (int *,TYPE_3__*,int ,int ,int ,int ,int,int ) ;
 int FUNC_6 (struct net_buf_simple*,int) ;
 int FUNC_7 (struct net_buf_simple*,int ) ;
 int FUNC_8 (struct net_buf_simple*,int ,int ) ;
 int FUNC_9 (struct net_buf_simple*,int ) ;

esp_err_t FUNC_10(esp_ble_mesh_model_t *VAR_4,
        example_msg_common_info_t *VAR_5,
        example_fast_prov_info_set_t *VAR_6)
{
    struct net_buf_simple *VAR_7 = ((void*)0);
    esp_err_t VAR_8;

    if (!VAR_4 || !VAR_6 || !VAR_6->ctx_flags || !VAR_5) {
        return VAR_1;
    }

    FUNC_1(VAR_3, "min:       0x%04x, max:        0x%04x", VAR_6->unicast_min, VAR_6->unicast_max);
    FUNC_1(VAR_3, "flags:     0x%02x,   iv_index:   0x%08x", VAR_6->flags, VAR_6->iv_index);
    FUNC_1(VAR_3, "net_idx:   0x%04x, group_addr: 0x%04x", VAR_6->net_idx, VAR_6->group_addr);
    FUNC_1(VAR_3, "action:    0x%02x", VAR_6->action);
    FUNC_2("FAST_PROV_OP: match_val", VAR_6->match_val, VAR_6->match_len);

    VAR_7 = FUNC_3(18 + VAR_6->match_len);
    if (!VAR_7) {
        return VAR_2;
    }

    FUNC_6(VAR_7, VAR_6->ctx_flags);
    if (VAR_6->ctx_flags & FUNC_0(0)) {
        FUNC_6(VAR_7, VAR_6->node_addr_cnt);
    }
    if (VAR_6->ctx_flags & FUNC_0(1)) {
        FUNC_6(VAR_7, VAR_6->unicast_min);
    }
    if (VAR_6->ctx_flags & FUNC_0(2)) {
        FUNC_6(VAR_7, VAR_6->unicast_max);
    }
    if (VAR_6->ctx_flags & FUNC_0(3)) {
        FUNC_9(VAR_7, VAR_6->flags);
    }
    if (VAR_6->ctx_flags & FUNC_0(4)) {
        FUNC_7(VAR_7, VAR_6->iv_index);
    }
    if (VAR_6->ctx_flags & FUNC_0(5)) {
        FUNC_6(VAR_7, VAR_6->net_idx);
    }
    if (VAR_6->ctx_flags & FUNC_0(6)) {
        FUNC_6(VAR_7, VAR_6->group_addr);
    }
    if (VAR_6->ctx_flags & FUNC_0(7)) {
        FUNC_6(VAR_7, VAR_6->prov_addr);
    }
    if (VAR_6->ctx_flags & FUNC_0(8)) {
        FUNC_8(VAR_7, VAR_6->match_val, VAR_6->match_len);
    }
    if (VAR_6->ctx_flags & FUNC_0(9)) {
        FUNC_9(VAR_7, VAR_6->action);
    }

    esp_ble_mesh_msg_ctx_t VAR_9 = {
        .net_idx = VAR_5->net_idx,
        .app_idx = VAR_5->app_idx,
        .addr = VAR_5->dst,
        .send_rel = 0,
        .send_ttl = 0,
    };
    VAR_8 = FUNC_5(VAR_4, &VAR_9,
            VAR_0,
            VAR_7->len, VAR_7->data, VAR_5->timeout, 1, VAR_5->role);

    FUNC_4(VAR_7);
    return VAR_8;
}
