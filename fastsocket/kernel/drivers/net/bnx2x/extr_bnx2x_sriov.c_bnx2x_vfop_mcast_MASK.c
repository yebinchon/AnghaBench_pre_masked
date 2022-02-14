
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct bnx2x_virtf {int abs_vfid; } ;
struct bnx2x_vfop_args_mcast {int mc_num; TYPE_4__* mc; } ;
struct TYPE_7__ {struct bnx2x_vfop_args_mcast mc_list; } ;
struct bnx2x_vfop {int state; scalar_t__ rc; TYPE_3__ args; TYPE_1__* op_p; } ;
struct bnx2x_raw_obj {int (* check_pending ) (struct bnx2x_raw_obj*) ;} ;
struct bnx2x_mcast_ramrod_params {int mcast_list; TYPE_2__* mcast_obj; } ;
struct bnx2x {int dummy; } ;
typedef enum bnx2x_vfop_mcast_state { ____Placeholder_bnx2x_vfop_mcast_state } bnx2x_vfop_mcast_state ;
struct TYPE_8__ {int link; } ;
struct TYPE_6__ {struct bnx2x_raw_obj raw; } ;
struct TYPE_5__ {struct bnx2x_mcast_ramrod_params mcast; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_3 (struct bnx2x*,struct bnx2x_mcast_ramrod_params*,int ) ;
 struct bnx2x_vfop* FUNC_4 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vfop*) ;
 int FUNC_7 (struct bnx2x_virtf*,scalar_t__,int ) ;
 int FUNC_8 (struct bnx2x_virtf*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (struct bnx2x_raw_obj*) ;
 int FUNC_12 (struct bnx2x_raw_obj*) ;

__attribute__((used)) static void FUNC_13(struct bnx2x *VAR_5, struct bnx2x_virtf *VAR_6)
{
 struct bnx2x_vfop *VAR_7 = FUNC_4(VAR_5, VAR_6);
 struct bnx2x_mcast_ramrod_params *VAR_8 = &VAR_7->op_p->mcast;
 struct bnx2x_raw_obj *VAR_9 = &VAR_8->mcast_obj->raw;
 struct bnx2x_vfop_args_mcast *VAR_10 = &VAR_7->args.mc_list;
 enum bnx2x_vfop_mcast_state VAR_11 = VAR_7->state;
 int VAR_12;

 FUNC_8(VAR_6);

 if (VAR_7->rc < 0)
  goto op_err;

 FUNC_1(VAR_2, "vf[%d] STATE: %d\n", VAR_6->abs_vfid, VAR_11);

 switch (VAR_11) {
 case 128:

  VAR_7->state = 130;
  VAR_7->rc = FUNC_3(VAR_5, VAR_8, VAR_1);
  FUNC_7(VAR_6, VAR_7->rc, VAR_3);

 case 130:
  if (VAR_9->check_pending(VAR_9))
   goto op_pending;

  if (VAR_10->mc_num) {

   FUNC_2(&VAR_8->mcast_list);
   for (VAR_12 = 0; VAR_12 < VAR_10->mc_num; VAR_12++)
    FUNC_10(&(VAR_10->mc[VAR_12].link),
           &VAR_8->mcast_list);

   VAR_7->state = 129;
   VAR_7->rc = FUNC_3(VAR_5, VAR_8,
            VAR_0);
  }
  FUNC_7(VAR_6, VAR_7->rc, VAR_4);

 case 129:
  VAR_7->rc = VAR_9->check_pending(VAR_9) ? 1 : 0;
  FUNC_7(VAR_6, VAR_7->rc, VAR_4);
 default:
  FUNC_5(VAR_11);
 }
op_err:
 FUNC_0("MCAST CONFIG error: rc %d\n", VAR_7->rc);
op_done:
 FUNC_9(VAR_10->mc);
 FUNC_6(VAR_5, VAR_6, VAR_7);
op_pending:
 return;
}
