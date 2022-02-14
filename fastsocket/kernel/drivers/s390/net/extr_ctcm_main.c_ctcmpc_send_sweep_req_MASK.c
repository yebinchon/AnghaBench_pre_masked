
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int th_last_seq; } ;
struct TYPE_3__ {int th_seg; int th_blk_flag; int th_is_xid; int th_seq_num; int th_ch_flag; } ;
struct th_sweep {TYPE_2__ sw; TYPE_1__ th; } ;
struct sk_buff {int dummy; } ;
struct net_device {int trans_start; struct ctcm_priv* ml_priv; } ;
struct mpc_group {int in_sweep; int fsm; int * active_channels; int sweep_req_pend_num; int sweep_rsp_pend_num; } ;
struct ctcm_priv {struct channel** channel; struct mpc_group* mpcg; } ;
struct channel {int sweep_timer; int sweep_queue; int th_seq_num; struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 struct sk_buff* FUNC_0 (int ,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int *,int,int ,struct channel*) ;
 int FUNC_4 (int ,int ,struct net_device*) ;
 int FUNC_5 () ;
 int VAR_9 ;
 int FUNC_6 (struct th_sweep*) ;
 struct th_sweep* FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,struct th_sweep*,int ) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (int *,struct sk_buff*) ;

__attribute__((used)) static void FUNC_11(struct channel *VAR_10)
{
 struct net_device *VAR_11 = VAR_10->netdev;
 struct ctcm_priv *VAR_12;
 struct mpc_group *VAR_13;
 struct th_sweep *VAR_14;
 struct sk_buff *VAR_15;
 struct channel *VAR_16;


 VAR_12 = VAR_11->ml_priv;
 VAR_13 = VAR_12->mpcg;
 VAR_16 = VAR_12->channel[VAR_8];



 if (VAR_13->in_sweep == 0) {
  VAR_13->in_sweep = 1;
  VAR_13->sweep_rsp_pend_num = VAR_13->active_channels[VAR_5];
  VAR_13->sweep_req_pend_num = VAR_13->active_channels[VAR_5];
 }

 VAR_15 = FUNC_0(VAR_4, VAR_1|VAR_2);

 if (VAR_15 == ((void*)0)) {

    goto nomem;
 }

 VAR_14 = FUNC_7(VAR_6, FUNC_5());

 if (!VAR_14) {
  FUNC_2(VAR_15);

    goto nomem;
 }

 VAR_14->th.th_seg = 0x00 ;
 VAR_14->th.th_ch_flag = VAR_7;
 VAR_14->th.th_blk_flag = 0x00;
 VAR_14->th.th_is_xid = 0x00;
 VAR_14->th.th_seq_num = 0x00;
 VAR_14->sw.th_last_seq = VAR_16->th_seq_num;

 FUNC_8(FUNC_9(VAR_15, VAR_6), VAR_14, VAR_6);

 FUNC_6(VAR_14);

 VAR_11->trans_start = VAR_9;
 FUNC_10(&VAR_16->sweep_queue, VAR_15);

 FUNC_3(&VAR_16->sweep_timer, 100, VAR_0, VAR_16);

 return;

nomem:
 VAR_13->in_sweep = 0;
 FUNC_1(VAR_11);
 FUNC_4(VAR_13->fsm, VAR_3, VAR_11);

 return;
}
