
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_buf_simple_state {int dummy; } ;
struct net_buf_simple {int dummy; } ;
struct TYPE_2__ {int recv_dst; int addr; } ;
struct bt_mesh_net_rx {int local_match; size_t msg_cache_idx; int friend_match; TYPE_1__ ctx; int rssi; } ;
typedef int s8_t ;
typedef enum bt_mesh_net_if { ____Placeholder_bt_mesh_net_if } bt_mesh_net_if ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 (struct net_buf_simple*,int,struct bt_mesh_net_rx*,int *) ;
 int FUNC_9 (int *,struct bt_mesh_net_rx*) ;
 int FUNC_10 (struct net_buf_simple*,int ) ;
 int FUNC_11 (int *,struct bt_mesh_net_rx*) ;
 int VAR_3 ;
 unsigned long long* VAR_4 ;
 size_t VAR_5 ;
 int FUNC_12 (int *,struct net_buf_simple_state*) ;
 int FUNC_13 (int *,struct net_buf_simple_state*) ;
 int FUNC_14 () ;

void FUNC_15(struct net_buf_simple *VAR_6, s8_t VAR_7,
                      enum bt_mesh_net_if VAR_8)
{
    FUNC_4(VAR_3, 29);
    struct bt_mesh_net_rx VAR_9 = { .rssi = VAR_7 };
    struct net_buf_simple_state VAR_10;

    FUNC_1("rssi %d net_if %u", VAR_7, VAR_8);

    if (!FUNC_14()) {
        return;
    }

    if (FUNC_8(VAR_6, VAR_8, &VAR_9, &VAR_3)) {
        return;
    }


    FUNC_13(&VAR_3, &VAR_10);
    VAR_9.local_match = (FUNC_6(VAR_9.ctx.recv_dst) ||
                      FUNC_5(VAR_9.ctx.recv_dst));
    if (FUNC_11(&VAR_3, &VAR_9) == -VAR_2) {
        FUNC_2("Removing rejected message from Network Message Cache");
        VAR_4[VAR_9.msg_cache_idx] = 0ULL;

        VAR_5 = VAR_9.msg_cache_idx;
    }
}
