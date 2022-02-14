
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8_t ;
typedef int u64_t ;
struct net_buf_simple {int len; } ;
struct TYPE_4__ {scalar_t__ addr; } ;
struct bt_mesh_net_rx {int friend_cred; TYPE_1__ ctx; int local_match; } ;
struct TYPE_5__ {scalar_t__ frnd; } ;
struct TYPE_6__ {TYPE_2__ lpn; } ;


 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int*) ;



 int VAR_4 ;







 TYPE_3__ VAR_5 ;
 int FUNC_4 (struct bt_mesh_net_rx*,struct net_buf_simple*) ;
 int FUNC_5 (struct bt_mesh_net_rx*,struct net_buf_simple*) ;
 int FUNC_6 (struct bt_mesh_net_rx*,struct net_buf_simple*) ;
 int FUNC_7 (struct bt_mesh_net_rx*,struct net_buf_simple*) ;
 int FUNC_8 (struct bt_mesh_net_rx*,struct net_buf_simple*) ;
 int FUNC_9 (struct bt_mesh_net_rx*,struct net_buf_simple*) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (struct bt_mesh_net_rx*,struct net_buf_simple*) ;
 int FUNC_13 (struct bt_mesh_net_rx*,struct net_buf_simple*) ;
 int FUNC_14 (struct bt_mesh_net_rx*,struct net_buf_simple*) ;
 int FUNC_15 (struct bt_mesh_net_rx*,struct net_buf_simple*) ;
 int FUNC_16 (struct bt_mesh_net_rx*,int,struct net_buf_simple*,int *) ;
 int FUNC_17 (struct bt_mesh_net_rx*,struct net_buf_simple*) ;

__attribute__((used)) static int FUNC_18(struct bt_mesh_net_rx *VAR_6, u8_t VAR_7,
                    struct net_buf_simple *VAR_8, u64_t *VAR_9)
{
    u8_t VAR_10 = FUNC_3(&VAR_7);

    FUNC_0("OpCode 0x%02x len %u", VAR_10, VAR_8->len);

    switch (VAR_10) {
    case 137:
        return FUNC_16(VAR_6, VAR_7, VAR_8, VAR_9);
    case 128:
        return FUNC_17(VAR_6, VAR_8);
    }


    if (!VAR_6->local_match) {
        return 0;
    }

    if (FUNC_2(VAR_1) && FUNC_10()) {
        if (FUNC_2(VAR_0) && !FUNC_11()) {
            switch (VAR_10) {
            case 134:
                return FUNC_6(VAR_6, VAR_8);
            case 133:
                return FUNC_7(VAR_6, VAR_8);
            case 136:
                return FUNC_4(VAR_6, VAR_8);
            case 135:
                return FUNC_5(VAR_6, VAR_8);
            case 132:
                return FUNC_8(VAR_6, VAR_8);
            case 130:
                return FUNC_9(VAR_6, VAR_8);
            }
        }
    }

    FUNC_1("Unhandled TransOpCode 0x%02x", VAR_10);

    return -VAR_3;
}
