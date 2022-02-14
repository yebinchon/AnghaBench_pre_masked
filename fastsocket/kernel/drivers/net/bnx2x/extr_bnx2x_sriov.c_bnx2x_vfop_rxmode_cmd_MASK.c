
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bnx2x_rx_mode_ramrod_params {unsigned long rx_accept_flags; unsigned long tx_accept_flags; int rdata_mapping; int rdata; int ramrod_flags; int state; int * pstate; int func_id; int * rx_mode_obj; int cl_id; int cid; } ;
struct TYPE_3__ {struct bnx2x_rx_mode_ramrod_params rx_mode; } ;
struct bnx2x_virtf {int filter_state; int abs_vfid; TYPE_1__ op_params; } ;
struct bnx2x_vfop_cmd {int block; int done; } ;
struct bnx2x_vfop {int dummy; } ;
struct bnx2x_vf_queue {int cid; } ;
struct bnx2x {int rx_mode_obj; } ;
struct TYPE_4__ {int e2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bnx2x*,struct bnx2x_virtf*,int ) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_virtf*,int ) ;
 struct bnx2x_vfop* FUNC_3 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_4 (int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_5 (struct bnx2x*,struct bnx2x_virtf*,int ,int ) ;
 int FUNC_6 (struct bnx2x_rx_mode_ramrod_params*,int ,int) ;
 TYPE_2__ VAR_6 ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct bnx2x_virtf*,struct bnx2x_vf_queue*) ;
 struct bnx2x_vf_queue* FUNC_9 (struct bnx2x_virtf*,int) ;

int FUNC_10(struct bnx2x *VAR_7,
     struct bnx2x_virtf *VAR_8,
     struct bnx2x_vfop_cmd *VAR_9,
     int VAR_10, unsigned long VAR_11)
{
 struct bnx2x_vf_queue *VAR_12 = FUNC_9(VAR_8, VAR_10);
 struct bnx2x_vfop *VAR_13 = FUNC_3(VAR_7, VAR_8);

 if (VAR_13) {
  struct bnx2x_rx_mode_ramrod_params *VAR_14 =
   &VAR_8->op_params.rx_mode;

  FUNC_6(VAR_14, 0, sizeof(*VAR_14));


  VAR_14->cid = VAR_12->cid;
  VAR_14->cl_id = FUNC_8(VAR_8, VAR_12);
  VAR_14->rx_mode_obj = &VAR_7->rx_mode_obj;
  VAR_14->func_id = FUNC_0(VAR_8->abs_vfid);

  VAR_14->rx_accept_flags = VAR_11;
  VAR_14->tx_accept_flags = VAR_11;
  VAR_14->pstate = &VAR_8->filter_state;
  VAR_14->state = VAR_0;

  FUNC_7(VAR_0, &VAR_8->filter_state);
  FUNC_7(VAR_3, &VAR_14->ramrod_flags);
  FUNC_7(VAR_4, &VAR_14->ramrod_flags);

  VAR_14->rdata =
   FUNC_1(VAR_7, VAR_8, VAR_6.e2);
  VAR_14->rdata_mapping =
   FUNC_2(VAR_7, VAR_8, VAR_6.e2);

  FUNC_4(VAR_1,
     VAR_5, VAR_9->done);
  return FUNC_5(VAR_7, VAR_8, VAR_5,
          VAR_9->block);
 }
 return -VAR_2;
}
