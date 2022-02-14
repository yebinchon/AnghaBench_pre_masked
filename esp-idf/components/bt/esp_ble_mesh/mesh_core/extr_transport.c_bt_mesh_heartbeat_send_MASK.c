
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct __packed TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8_t ;
typedef unsigned int u16_t ;
struct bt_mesh_net_tx {int xmit; int src; struct bt_mesh_msg_ctx* ctx; int sub; } ;
struct bt_mesh_msg_ctx {scalar_t__ addr; int send_ttl; int app_idx; int net_idx; } ;
struct TYPE_4__ {scalar_t__ dst; int ttl; int net_idx; } ;
struct bt_mesh_cfg_srv {TYPE_1__ hb_pub; int model; } ;
typedef int hb ;
struct __packed {int init_ttl; unsigned int feat; } ;
struct TYPE_5__ {int addr; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*,int ,unsigned int) ;
 int VAR_9 ;
 struct bt_mesh_cfg_srv* FUNC_1 () ;
 int FUNC_2 (struct bt_mesh_net_tx*,int ,TYPE_3__*,int,int *,int *,int *) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 TYPE_2__* FUNC_6 (int ) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int ) ;
 unsigned int FUNC_10 (unsigned int) ;

void FUNC_11(void)
{
    struct bt_mesh_cfg_srv *VAR_10 = FUNC_1();
    u16_t VAR_11 = 0U;
    struct __packed {
        u8_t init_ttl;
        u16_t feat;
    } VAR_12;
    struct bt_mesh_msg_ctx VAR_13 = {
        .net_idx = VAR_10->hb_pub.net_idx,
        .app_idx = VAR_7,
        .addr = VAR_10->hb_pub.dst,
        .send_ttl = VAR_10->hb_pub.ttl,
    };
    struct bt_mesh_net_tx VAR_14 = {
        .sub = FUNC_9(VAR_10->hb_pub.net_idx),
        .ctx = &VAR_13,
        .src = FUNC_6(VAR_10->model)->addr,
        .xmit = FUNC_7(),
    };


    if (VAR_10->hb_pub.dst == VAR_0) {
        return;
    }

    VAR_12.init_ttl = VAR_10->hb_pub.ttl;

    if (FUNC_8() == VAR_8) {
        VAR_11 |= VAR_4;
    }

    if (FUNC_4() == VAR_6) {
        VAR_11 |= VAR_3;
    }

    if (FUNC_3() == VAR_5) {
        VAR_11 |= VAR_1;
    }

    if (FUNC_5()) {
        VAR_11 |= VAR_2;
    }

    VAR_12.feat = FUNC_10(VAR_11);

    FUNC_0("InitTTL %u feat 0x%04x", VAR_10->hb_pub.ttl, VAR_11);

    FUNC_2(&VAR_14, VAR_9, &VAR_12, sizeof(VAR_12),
                     ((void*)0), ((void*)0), ((void*)0));
}
