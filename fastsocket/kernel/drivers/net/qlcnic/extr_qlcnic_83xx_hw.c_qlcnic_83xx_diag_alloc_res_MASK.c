
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u16 ;
struct qlcnic_host_sds_ring {int dummy; } ;
struct qlcnic_host_rds_ring {int dummy; } ;
struct qlcnic_adapter {scalar_t__ is_up; int max_sds_rings; size_t max_rds_rings; int flags; int state; TYPE_3__* ahw; TYPE_1__* recv_ctx; } ;
struct net_device {int dummy; } ;
struct TYPE_6__ {int diag_test; TYPE_2__* hw_ops; scalar_t__ loopback_state; scalar_t__ linkup; } ;
struct TYPE_5__ {int (* setup_link_event ) (struct qlcnic_adapter*,int) ;} ;
struct TYPE_4__ {struct qlcnic_host_sds_ring* sds_rings; struct qlcnic_host_rds_ring* rds_rings; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct qlcnic_adapter*,struct net_device*) ;
 struct qlcnic_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct qlcnic_adapter*,struct qlcnic_host_sds_ring*) ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 int FUNC_7 (struct qlcnic_adapter*) ;
 int FUNC_8 (struct qlcnic_adapter*) ;
 int FUNC_9 (struct qlcnic_adapter*) ;
 int FUNC_10 (struct qlcnic_adapter*,struct qlcnic_host_rds_ring*,size_t) ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (struct qlcnic_adapter*,int) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_5, int VAR_6,
          int VAR_7)
{
 struct qlcnic_adapter *VAR_8 = FUNC_1(VAR_5);
 struct qlcnic_host_sds_ring *VAR_9;
 struct qlcnic_host_rds_ring *VAR_10;
 u16 VAR_11 = VAR_8->is_up;
 u8 VAR_12;
 int VAR_13;

 FUNC_3(VAR_5);

 if (FUNC_4(VAR_5))
  FUNC_0(VAR_8, VAR_5);

 FUNC_8(VAR_8);

 VAR_8->max_sds_rings = 1;
 VAR_8->ahw->diag_test = VAR_6;
 VAR_8->ahw->linkup = 0;

 VAR_13 = FUNC_7(VAR_8);
 if (VAR_13) {
  FUNC_2(VAR_5);
  return VAR_13;
 }

 VAR_13 = FUNC_9(VAR_8);
 if (VAR_13) {
  FUNC_8(VAR_8);
  if (VAR_11 == VAR_0) {
   VAR_8->max_sds_rings = VAR_7;
   FUNC_7(VAR_8);
  }
  FUNC_2(VAR_5);
  return VAR_13;
 }

 for (VAR_12 = 0; VAR_12 < VAR_8->max_rds_rings; VAR_12++) {
  VAR_10 = &VAR_8->recv_ctx->rds_rings[VAR_12];
  FUNC_10(VAR_8, VAR_10, VAR_12);
 }

 if (VAR_8->ahw->diag_test == VAR_1) {
  for (VAR_12 = 0; VAR_12 < VAR_8->max_sds_rings; VAR_12++) {
   VAR_9 = &VAR_8->recv_ctx->sds_rings[VAR_12];
   FUNC_5(VAR_8, VAR_9);
  }
 }

 if (VAR_8->ahw->diag_test == VAR_2) {

  if (!(VAR_8->flags & VAR_3))
   FUNC_6(VAR_8);
  VAR_8->ahw->loopback_state = 0;
  VAR_8->ahw->hw_ops->setup_link_event(VAR_8, 1);
 }

 FUNC_11(VAR_4, &VAR_8->state);
 return 0;
}
