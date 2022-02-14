
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bstp_state {int bs_last_tc_time; int bs_rtage_cb; int bs_state_cb; int bs_protover; int bs_txholdcount; int bs_migration_delay; int bs_hold_time; int bs_bridge_priority; int bs_bridge_fdelay; int bs_bridge_htime; int bs_bridge_max_age; int bs_bplist; } ;
struct bstp_cb_ops {int bcb_rtage; int bcb_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct bstp_state*) ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct bstp_state*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6(struct bstp_state *VAR_11, struct bstp_cb_ops *VAR_12)
{
 FUNC_0(VAR_11);
 FUNC_1(&VAR_11->bs_bplist);

 VAR_11->bs_bridge_max_age = VAR_5;
 VAR_11->bs_bridge_htime = VAR_2;
 VAR_11->bs_bridge_fdelay = VAR_1;
 VAR_11->bs_bridge_priority = VAR_0;
 VAR_11->bs_hold_time = VAR_4;
 VAR_11->bs_migration_delay = VAR_6;
 VAR_11->bs_txholdcount = VAR_3;
 VAR_11->bs_protover = VAR_7;
 VAR_11->bs_state_cb = VAR_12->bcb_state;
 VAR_11->bs_rtage_cb = VAR_12->bcb_rtage;


 FUNC_3(&VAR_11->bs_last_tc_time);

 FUNC_4(VAR_10);
 FUNC_2(&VAR_9, VAR_11, VAR_8);
 FUNC_5(VAR_10);
}
