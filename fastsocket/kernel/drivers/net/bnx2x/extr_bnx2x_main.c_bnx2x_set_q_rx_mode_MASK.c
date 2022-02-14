
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct bnx2x_rx_mode_ramrod_params {unsigned long ramrod_flags; unsigned long rx_mode_flags; unsigned long rx_accept_flags; unsigned long tx_accept_flags; int rdata_mapping; int rdata; int state; int * pstate; int func_id; int * rx_mode_obj; int cl_id; scalar_t__ cid; } ;
struct bnx2x {int rx_mode; int sp_state; int rx_mode_obj; } ;
typedef int ramrod_param ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct bnx2x*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_rx_mode_ramrod_params*) ;
 int FUNC_3 (struct bnx2x*,int ) ;
 int FUNC_4 (struct bnx2x*,int ) ;
 int FUNC_5 (struct bnx2x_rx_mode_ramrod_params*,int ,int) ;
 int VAR_1 ;
 int FUNC_6 (int ,int *) ;

int FUNC_7(struct bnx2x *VAR_2, u8 VAR_3,
   unsigned long VAR_4,
   unsigned long VAR_5,
   unsigned long VAR_6,
   unsigned long VAR_7)
{
 struct bnx2x_rx_mode_ramrod_params VAR_8;
 int VAR_9;

 FUNC_5(&VAR_8, 0, sizeof(VAR_8));


 VAR_8.cid = 0;
 VAR_8.cl_id = VAR_3;
 VAR_8.rx_mode_obj = &VAR_2->rx_mode_obj;
 VAR_8.func_id = FUNC_1(VAR_2);

 VAR_8.pstate = &VAR_2->sp_state;
 VAR_8.state = VAR_0;

 VAR_8.rdata = FUNC_3(VAR_2, VAR_1);
 VAR_8.rdata_mapping = FUNC_4(VAR_2, VAR_1);

 FUNC_6(VAR_0, &VAR_2->sp_state);

 VAR_8.ramrod_flags = VAR_7;
 VAR_8.rx_mode_flags = VAR_4;

 VAR_8.rx_accept_flags = VAR_5;
 VAR_8.tx_accept_flags = VAR_6;

 VAR_9 = FUNC_2(VAR_2, &VAR_8);
 if (VAR_9 < 0) {
  FUNC_0("Set rx_mode %d failed\n", VAR_2->rx_mode);
  return VAR_9;
 }

 return 0;
}
