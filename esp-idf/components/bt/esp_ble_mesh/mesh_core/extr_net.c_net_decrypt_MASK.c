
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8_t ;
struct net_buf_simple {int data; } ;
struct bt_mesh_subnet {int net_idx; } ;
struct TYPE_3__ {int addr; } ;
struct bt_mesh_net_rx {int old_iv; scalar_t__ net_if; TYPE_1__ ctx; } ;
struct TYPE_4__ {int iv_index; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct bt_mesh_net_rx*) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int const*) ;
 int FUNC_6 (int const*) ;
 int FUNC_7 (int ) ;
 TYPE_2__ VAR_6 ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (int const*,struct net_buf_simple*,int ,int) ;
 scalar_t__ FUNC_10 (int ,int ,int const*) ;
 int FUNC_11 (int ,int const*,size_t) ;
 scalar_t__ FUNC_12 (struct bt_mesh_net_rx*,struct net_buf_simple*) ;
 int FUNC_13 (struct net_buf_simple*,size_t) ;
 int FUNC_14 (struct net_buf_simple*) ;

__attribute__((used)) static int FUNC_15(struct bt_mesh_subnet *VAR_7, const u8_t *VAR_8,
                       const u8_t *VAR_9, const u8_t *VAR_10,
                       size_t VAR_11, struct bt_mesh_net_rx *VAR_12,
                       struct net_buf_simple *VAR_13)
{
    FUNC_2("NID 0x%02x net_idx 0x%04x", FUNC_6(VAR_10), VAR_7->net_idx);
    FUNC_2("IVI %u net->iv_index 0x%08x", FUNC_5(VAR_10), VAR_6.iv_index);

    VAR_12->old_iv = (FUNC_5(VAR_10) != (VAR_6.iv_index & 0x01));

    FUNC_14(VAR_13);
    FUNC_11(FUNC_13(VAR_13, VAR_11), VAR_10, VAR_11);

    if (FUNC_10(VAR_13->data, FUNC_1(VAR_12), VAR_9)) {
        return -VAR_5;
    }






    if (VAR_12->net_if == VAR_0 && FUNC_12(VAR_12, VAR_13)) {
        FUNC_3("Duplicate found in Network Message Cache");
        return -VAR_3;
    }

    VAR_12->ctx.addr = FUNC_7(VAR_13->data);
    if (!FUNC_0(VAR_12->ctx.addr)) {
        FUNC_3("Ignoring non-unicast src addr 0x%04x", VAR_12->ctx.addr);
        return -VAR_4;
    }

    FUNC_2("src 0x%04x", VAR_12->ctx.addr);
    return FUNC_9(VAR_8, VAR_13, FUNC_1(VAR_12), 0);
}
