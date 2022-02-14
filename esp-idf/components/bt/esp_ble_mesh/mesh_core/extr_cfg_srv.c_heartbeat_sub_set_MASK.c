
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8_t ;
typedef scalar_t__ u16_t ;
struct net_buf_simple {int dummy; } ;
struct bt_mesh_msg_ctx {int addr; } ;
struct bt_mesh_model {struct bt_mesh_cfg_srv* user_data; } ;
struct TYPE_2__ {unsigned int min_hops; unsigned int max_hops; unsigned int count; scalar_t__ expiry; scalar_t__ dst; scalar_t__ src; } ;
struct bt_mesh_cfg_srv {TYPE_1__ hb_sub; } ;
typedef int s32_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (char*,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 unsigned int FUNC_7 (int,int) ;
 int FUNC_8 (struct bt_mesh_model*,struct bt_mesh_msg_ctx*,int ) ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 (struct net_buf_simple*) ;
 int FUNC_11 (struct net_buf_simple*) ;

__attribute__((used)) static void FUNC_12(struct bt_mesh_model *VAR_3,
                              struct bt_mesh_msg_ctx *VAR_4,
                              struct net_buf_simple *VAR_5)
{
    struct bt_mesh_cfg_srv *VAR_6 = VAR_3->user_data;
    u16_t VAR_7, VAR_8;
    u8_t VAR_9;
    s32_t VAR_10;

    FUNC_3("src 0x%04x", VAR_4->addr);

    VAR_7 = FUNC_10(VAR_5);
    VAR_8 = FUNC_10(VAR_5);
    VAR_9 = FUNC_11(VAR_5);

    FUNC_3("sub_src 0x%04x sub_dst 0x%04x period 0x%02x",
           VAR_7, VAR_8, VAR_9);

    if (VAR_7 != VAR_0 &&
            !FUNC_1(VAR_7)) {
        FUNC_4("Prohibited source address");
        return;
    }

    if (FUNC_2(VAR_8) || FUNC_0(VAR_8) ||
            (FUNC_1(VAR_8) &&
             VAR_8 != FUNC_5())) {
        FUNC_4("Prohibited destination address");
        return;
    }

    if (VAR_9 > 0x11) {
        FUNC_4("Prohibited subscription period 0x%02x", VAR_9);
        return;
    }

    if (VAR_7 == VAR_0 ||
            VAR_8 == VAR_0 ||
            VAR_9 == 0x00) {




        if (VAR_7 == VAR_0 ||
                VAR_8 == VAR_0) {
            VAR_6->hb_sub.src = VAR_0;
            VAR_6->hb_sub.dst = VAR_0;
            VAR_6->hb_sub.min_hops = VAR_1;
            VAR_6->hb_sub.max_hops = 0U;
            VAR_6->hb_sub.count = 0U;
        }

        VAR_10 = 0;
    } else {
        VAR_6->hb_sub.src = VAR_7;
        VAR_6->hb_sub.dst = VAR_8;
        VAR_6->hb_sub.min_hops = VAR_1;
        VAR_6->hb_sub.max_hops = 0U;
        VAR_6->hb_sub.count = 0U;
        VAR_10 = FUNC_7(VAR_9, 1) * 1000U;
    }


    FUNC_6(VAR_6->hb_sub.dst);

    FUNC_3("period_ms %u", VAR_10);

    if (VAR_10) {
        VAR_6->hb_sub.expiry = FUNC_9() + VAR_10;
    } else {
        VAR_6->hb_sub.expiry = 0;
    }

    FUNC_8(VAR_3, VAR_4, VAR_2);




    if (!VAR_10) {
        VAR_6->hb_sub.min_hops = 0U;
    }
}
