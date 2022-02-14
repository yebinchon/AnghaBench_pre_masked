
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bnx2x_virtf {int abs_vfid; } ;
struct bnx2x_vfop {int state; scalar_t__ rc; TYPE_1__* op_p; } ;
struct bnx2x_rx_mode_ramrod_params {int dummy; } ;
struct bnx2x {int dummy; } ;
typedef enum bnx2x_vfop_rxmode_state { ____Placeholder_bnx2x_vfop_rxmode_state } bnx2x_vfop_rxmode_state ;
struct TYPE_2__ {struct bnx2x_rx_mode_ramrod_params rx_mode; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;


 int FUNC_1 (int ,char*,int ,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct bnx2x*,struct bnx2x_rx_mode_ramrod_params*) ;
 struct bnx2x_vfop* FUNC_3 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vfop*) ;
 int FUNC_6 (struct bnx2x_virtf*,scalar_t__,int ) ;
 int FUNC_7 (struct bnx2x_virtf*) ;

__attribute__((used)) static void FUNC_8(struct bnx2x *VAR_2, struct bnx2x_virtf *VAR_3)
{
 struct bnx2x_vfop *VAR_4 = FUNC_3(VAR_2, VAR_3);
 struct bnx2x_rx_mode_ramrod_params *VAR_5 = &VAR_4->op_p->rx_mode;
 enum bnx2x_vfop_rxmode_state VAR_6 = VAR_4->state;

 FUNC_7(VAR_3);

 if (VAR_4->rc < 0)
  goto op_err;

 FUNC_1(VAR_0, "vf[%d] STATE: %d\n", VAR_3->abs_vfid, VAR_6);

 switch (VAR_6) {
 case 129:

  VAR_4->state = 128;

  VAR_4->rc = FUNC_2(VAR_2, VAR_5);
  FUNC_6(VAR_3, VAR_4->rc, VAR_1);
op_err:
  FUNC_0("RXMODE error: rc %d\n", VAR_4->rc);
op_done:
 case 128:
  FUNC_5(VAR_2, VAR_3, VAR_4);
  return;
 default:
  FUNC_4(VAR_6);
 }
op_pending:
 return;
}
