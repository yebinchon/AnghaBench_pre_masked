
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u64_t ;
typedef int u32_t ;
typedef int u16_t ;
struct bt_mesh_subnet {int net_idx; } ;
struct bt_mesh_net_tx {int src; int xmit; struct bt_mesh_msg_ctx* ctx; struct bt_mesh_subnet* sub; } ;
struct bt_mesh_msg_ctx {int addr; int send_ttl; int app_idx; int net_idx; } ;
typedef int buf ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int ,int) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int FUNC_3 (struct bt_mesh_net_tx*,int ,int*,int,int *,int *,int *) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int,int*) ;
 int FUNC_8 (int ,int*) ;

__attribute__((used)) static int FUNC_9(struct bt_mesh_subnet *VAR_2, u16_t VAR_3, u16_t VAR_4,
                    u8_t VAR_5, u64_t *VAR_6, u32_t VAR_7, u8_t VAR_8)
{
    struct bt_mesh_msg_ctx VAR_9 = {
        .net_idx = VAR_2->net_idx,
        .app_idx = VAR_0,
        .addr = VAR_4,
        .send_ttl = VAR_5,
    };
    struct bt_mesh_net_tx VAR_10 = {
        .sub = VAR_2,
        .ctx = &VAR_9,
        .src = VAR_8 ? FUNC_6() : VAR_3,
        .xmit = FUNC_5(),
    };
    u16_t VAR_11 = *VAR_6 & 0x1fff;
    u8_t VAR_12[6];

    FUNC_1("SeqZero 0x%04x Block 0x%08x OBO %u", VAR_11, VAR_7, VAR_8);

    if (FUNC_4()) {
        FUNC_2("Not sending ack when LPN is enabled");
        return 0;
    }




    if (!FUNC_0(VAR_3)) {
        FUNC_2("Not sending ack for non-unicast address");
        return 0;
    }

    FUNC_7(((VAR_11 << 2) & 0x7ffc) | (VAR_8 << 15), VAR_12);
    FUNC_8(VAR_7, &VAR_12[2]);

    return FUNC_3(&VAR_10, VAR_1, VAR_12, sizeof(VAR_12),
                            ((void*)0), ((void*)0), ((void*)0));
}
