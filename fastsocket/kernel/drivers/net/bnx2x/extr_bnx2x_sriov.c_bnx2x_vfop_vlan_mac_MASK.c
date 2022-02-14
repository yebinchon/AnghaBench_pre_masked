
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int vlan_mac_flags; } ;
struct bnx2x_vlan_mac_ramrod_params {int ramrod_flags; TYPE_4__ user_req; struct bnx2x_vlan_mac_obj* vlan_mac_obj; } ;
struct TYPE_10__ {int (* check_pending ) (TYPE_5__*) ;} ;
struct bnx2x_vlan_mac_obj {scalar_t__ (* delete_all ) (struct bnx2x*,struct bnx2x_vlan_mac_obj*,int *,int *) ;TYPE_5__ raw; } ;
struct bnx2x_virtf {int abs_vfid; } ;
struct bnx2x_vfop_filters {int dummy; } ;
struct TYPE_7__ {struct bnx2x_vfop_filters* multi_filter; } ;
struct TYPE_8__ {TYPE_2__ filters; } ;
struct bnx2x_vfop {int state; scalar_t__ rc; TYPE_3__ args; TYPE_1__* op_p; } ;
struct bnx2x {int dummy; } ;
typedef enum bnx2x_vfop_vlan_mac_state { ____Placeholder_bnx2x_vfop_vlan_mac_state } bnx2x_vfop_vlan_mac_state ;
struct TYPE_6__ {struct bnx2x_vlan_mac_ramrod_params vlan_mac; } ;


 int FUNC_0 (char*,scalar_t__) ;
 int VAR_0 ;





 int FUNC_1 (int ,char*,int ,int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_2 (struct bnx2x*,struct bnx2x_vlan_mac_ramrod_params*) ;
 void* FUNC_3 (struct bnx2x*,struct bnx2x_vfop_filters*,struct bnx2x_vlan_mac_ramrod_params*) ;
 int FUNC_4 (struct bnx2x*,struct bnx2x_vfop*,struct bnx2x_vlan_mac_obj*) ;
 struct bnx2x_vfop* FUNC_5 (struct bnx2x*,struct bnx2x_virtf*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_vfop*) ;
 int FUNC_8 (struct bnx2x_virtf*,scalar_t__,int ) ;
 int FUNC_9 (struct bnx2x_virtf*) ;
 int FUNC_10 (struct bnx2x_vfop_filters*) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (struct bnx2x*,struct bnx2x_vlan_mac_obj*,int *,int *) ;
 int FUNC_13 (TYPE_5__*) ;

__attribute__((used)) static void FUNC_14(struct bnx2x *VAR_4, struct bnx2x_virtf *VAR_5)
{
 struct bnx2x_vfop *VAR_6 = FUNC_5(VAR_4, VAR_5);
 struct bnx2x_vlan_mac_ramrod_params *VAR_7 = &VAR_6->op_p->vlan_mac;
 struct bnx2x_vlan_mac_obj *VAR_8 = VAR_7->vlan_mac_obj;
 struct bnx2x_vfop_filters *VAR_9 = VAR_6->args.filters.multi_filter;

 enum bnx2x_vfop_vlan_mac_state VAR_10 = VAR_6->state;

 if (VAR_6->rc < 0)
  goto op_err;

 FUNC_1(VAR_0, "vf[%d] STATE: %d\n", VAR_5->abs_vfid, VAR_10);

 FUNC_9(VAR_5);

 switch (VAR_10) {
 case 129:

  VAR_6->state = 130;


  VAR_6->rc = VAR_8->delete_all(VAR_4, VAR_8,
        &VAR_7->user_req.vlan_mac_flags,
        &VAR_7->ramrod_flags);

  FUNC_8(VAR_5, VAR_6->rc, VAR_3);

 case 128:

  VAR_6->state = 130;


  VAR_6->rc = FUNC_2(VAR_4, VAR_7);
  if (VAR_6->rc == -VAR_1)
   VAR_6->rc = 0;

  FUNC_8(VAR_5, VAR_6->rc, VAR_3);

 case 130:
  VAR_6->rc = !!VAR_8->raw.check_pending(&VAR_8->raw);
  FUNC_8(VAR_5, VAR_6->rc, VAR_3);

 case 132:

  VAR_6->state = 130;


  VAR_6->rc = FUNC_3(VAR_4, VAR_9, VAR_7);
  if (VAR_6->rc)
   goto op_err;

  FUNC_11(VAR_2, &VAR_7->ramrod_flags);
  VAR_6->rc = FUNC_2(VAR_4, VAR_7);
  FUNC_8(VAR_5, VAR_6->rc, VAR_3);

 case 131:

  VAR_6->state = 130;


  VAR_6->rc = FUNC_3(VAR_4, VAR_9, VAR_7);
  if (!VAR_6->rc) {
   FUNC_11(VAR_2, &VAR_7->ramrod_flags);
   VAR_6->rc = FUNC_2(VAR_4, VAR_7);
  }
  FUNC_8(VAR_5, VAR_6->rc, VAR_3);

 default:
  FUNC_6(VAR_10);
 }
op_err:
 FUNC_0("VLAN-MAC error: rc %d\n", VAR_6->rc);
op_done:
 FUNC_10(VAR_9);
 FUNC_4(VAR_4, VAR_6, VAR_8);
 FUNC_7(VAR_4, VAR_5, VAR_6);
op_pending:
 return;
}
