
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_host_rds_ring {int dummy; } ;
struct qlcnic_adapter {scalar_t__ is_up; int max_rds_rings; int max_sds_rings; int state; TYPE_2__* ahw; TYPE_1__* recv_ctx; } ;
struct net_device {int features; int mtu; } ;
struct TYPE_4__ {scalar_t__ reset_context; scalar_t__ linkup; } ;
struct TYPE_3__ {struct qlcnic_host_rds_ring* rds_rings; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct qlcnic_adapter*,int ) ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*,int) ;
 int FUNC_3 (struct qlcnic_adapter*,int ) ;
 scalar_t__ FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*,int) ;
 int FUNC_7 (struct qlcnic_adapter*) ;
 int FUNC_8 (struct qlcnic_adapter*,struct qlcnic_host_rds_ring*,int) ;
 scalar_t__ FUNC_9 (struct qlcnic_adapter*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;

int FUNC_13(struct qlcnic_adapter *VAR_5, struct net_device *VAR_6)
{
 int VAR_7;
 struct qlcnic_host_rds_ring *VAR_8;

 if (VAR_5->is_up != VAR_2)
  return -VAR_0;

 if (FUNC_12(VAR_4, &VAR_5->state))
  return 0;
 if (FUNC_9(VAR_5))
  return -VAR_0;
 FUNC_5(VAR_5);

 if (FUNC_4(VAR_5))
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < VAR_5->max_rds_rings; VAR_7++) {
  VAR_8 = &VAR_5->recv_ctx->rds_rings[VAR_7];
  FUNC_8(VAR_5, VAR_8, VAR_7);
 }

 FUNC_10(VAR_6);
 FUNC_3(VAR_5, VAR_6->mtu);

 VAR_5->ahw->linkup = 0;

 if (VAR_5->max_sds_rings > 1)
  FUNC_2(VAR_5, 1);

 FUNC_1(VAR_5);

 if (VAR_6->features & VAR_1)
  FUNC_0(VAR_5, VAR_3);

 FUNC_7(VAR_5);

 FUNC_6(VAR_5, 1);

 VAR_5->ahw->reset_context = 0;
 FUNC_11(VAR_4, &VAR_5->state);
 return 0;
}
