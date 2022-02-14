
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct net_device {int dummy; } ;
struct fcoe_port {int timer; scalar_t__ fcoe_pending_queue_active; int fcoe_pending_queue; struct bnx2fc_interface* priv; } ;
struct fcoe_ctlr {int ctl_src_addr; } ;
struct fc_lport {int vport; } ;
struct bnx2fc_interface {struct bnx2fc_hba* hba; } ;
struct bnx2fc_hba {TYPE_2__* phys_dev; } ;
struct TYPE_4__ {TYPE_1__* ethtool_ops; } ;
struct TYPE_3__ {int get_pauseparam; } ;


 int FUNC_0 (struct fc_lport*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct fcoe_ctlr* FUNC_1 (struct bnx2fc_interface*) ;
 scalar_t__ FUNC_2 (struct fc_lport*,int ) ;
 int FUNC_3 (struct fc_lport*,int ) ;
 int FUNC_4 (struct fc_lport*,int ) ;
 scalar_t__ FUNC_5 (struct net_device*,int *,int ) ;
 int FUNC_6 (struct fc_lport*) ;
 int VAR_5 ;
 int FUNC_7 (int ,int,int ) ;
 struct fcoe_port* FUNC_8 (struct fc_lport*) ;
 int FUNC_9 (int *,int ,unsigned long) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct fc_lport *VAR_6, struct net_device *VAR_7)
{
 struct bnx2fc_hba *VAR_8;
 struct bnx2fc_interface *VAR_9;
 struct fcoe_ctlr *VAR_10;
 struct fcoe_port *VAR_11;
 u64 VAR_12, VAR_13;

 VAR_11 = FUNC_8(VAR_6);
 VAR_9 = VAR_11->priv;
 VAR_10 = FUNC_1(VAR_9);
 VAR_8 = VAR_9->hba;


 if (!VAR_8->phys_dev->ethtool_ops ||
     !VAR_8->phys_dev->ethtool_ops->get_pauseparam)
  return -VAR_2;

 if (FUNC_2(VAR_6, VAR_0))
  return -VAR_1;

 FUNC_10(&VAR_11->fcoe_pending_queue);
 VAR_11->fcoe_pending_queue_active = 0;
 FUNC_9(&VAR_11->timer, VAR_5, (unsigned long) VAR_6);

 FUNC_6(VAR_6);

 if (!VAR_6->vport) {
  if (FUNC_5(VAR_7, &VAR_12, VAR_3))
   VAR_12 = FUNC_7(VAR_10->ctl_src_addr,
       1, 0);
  FUNC_0(VAR_6, "WWNN = 0x%llx\n", VAR_12);
  FUNC_3(VAR_6, VAR_12);

  if (FUNC_5(VAR_7, &VAR_13, VAR_4))
   VAR_13 = FUNC_7(VAR_10->ctl_src_addr,
       2, 0);

  FUNC_0(VAR_6, "WWPN = 0x%llx\n", VAR_13);
  FUNC_4(VAR_6, VAR_13);
 }

 return 0;
}
