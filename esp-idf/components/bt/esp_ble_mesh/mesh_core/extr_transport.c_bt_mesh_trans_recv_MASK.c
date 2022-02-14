
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned int u8_t ;
typedef scalar_t__ u64_t ;
struct net_buf_simple_state {int dummy; } ;
struct net_buf_simple {int data; int len; } ;
struct TYPE_4__ {int recv_dst; int addr; } ;
struct bt_mesh_net_rx {int friend_match; scalar_t__ net_if; int local_match; int friend_cred; int seq; TYPE_2__ ctx; TYPE_1__* sub; } ;
typedef enum bt_mesh_friend_pdu_type { ____Placeholder_bt_mesh_friend_pdu_type } bt_mesh_friend_pdu_type ;
struct TYPE_3__ {int net_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct bt_mesh_net_rx*,int,scalar_t__*,unsigned int,struct net_buf_simple*) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (struct bt_mesh_net_rx*) ;
 scalar_t__ FUNC_10 () ;
 scalar_t__ FUNC_11 () ;
 int FUNC_12 (struct net_buf_simple*,int ) ;
 int FUNC_13 (struct net_buf_simple*,struct net_buf_simple_state*) ;
 int FUNC_14 (struct net_buf_simple*,struct net_buf_simple_state*) ;
 int FUNC_15 (struct net_buf_simple*,struct bt_mesh_net_rx*,int*,scalar_t__*,unsigned int*) ;
 int FUNC_16 (struct net_buf_simple*,struct bt_mesh_net_rx*,scalar_t__*) ;

int FUNC_17(struct net_buf_simple *VAR_8, struct bt_mesh_net_rx *VAR_9)
{
    u64_t VAR_10 = VAR_7;
    enum bt_mesh_friend_pdu_type VAR_11 = VAR_0;
    struct net_buf_simple_state VAR_12;
    u8_t VAR_13 = 0U;
    int VAR_14;

    if (FUNC_2(VAR_3)) {
        VAR_9->friend_match = FUNC_6(VAR_9->sub->net_idx,
                                                VAR_9->ctx.recv_dst);
    } else {
        VAR_9->friend_match = 0;
    }

    FUNC_0("src 0x%04x dst 0x%04x seq 0x%08x friend_match %u",
           VAR_9->ctx.addr, VAR_9->ctx.recv_dst, VAR_9->seq, VAR_9->friend_match);


    FUNC_12(VAR_8, VAR_1);

    FUNC_0("Payload %s", FUNC_4(VAR_8->data, VAR_8->len));





    if (FUNC_2(VAR_5) && FUNC_7()) {
        if (FUNC_2(VAR_4) &&
                FUNC_8() && VAR_9->net_if == VAR_2 &&
                (!FUNC_11() || !VAR_9->friend_cred)) {
            FUNC_1("Ignoring unexpected message in Low Power mode");
            return -VAR_6;
        }
    }




    FUNC_14(VAR_8, &VAR_12);

    if (FUNC_3(VAR_8->data)) {



        if (!VAR_9->local_match && !VAR_9->friend_match) {
            return 0;
        }

        VAR_14 = FUNC_15(VAR_8, VAR_9, &VAR_11, &VAR_10, &VAR_13);
    } else {
        VAR_13 = 1U;
        VAR_14 = FUNC_16(VAR_8, VAR_9, &VAR_10);
    }
    if (FUNC_2(VAR_5) && FUNC_7()) {
        if (FUNC_2(VAR_4) &&
                (FUNC_10() ||
                 (FUNC_8() && FUNC_11()))) {
            FUNC_9(VAR_9);
        }
    }

    FUNC_13(VAR_8, &VAR_12);

    if (FUNC_2(VAR_5) && FUNC_7()) {
        if (FUNC_2(VAR_3) && VAR_9->friend_match && !VAR_14) {
            if (VAR_10 == VAR_7) {
                FUNC_5(VAR_9, VAR_11, ((void*)0),
                                          VAR_13, VAR_8);
            } else {
                FUNC_5(VAR_9, VAR_11, &VAR_10,
                                          VAR_13, VAR_8);
            }
        }
    }

    return VAR_14;
}
