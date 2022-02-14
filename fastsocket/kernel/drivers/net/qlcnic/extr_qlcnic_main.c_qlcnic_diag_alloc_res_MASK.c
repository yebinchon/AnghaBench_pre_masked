
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_host_sds_ring {int dummy; } ;
struct qlcnic_host_rds_ring {int dummy; } ;
struct qlcnic_adapter {int max_sds_rings; int max_rds_rings; int state; TYPE_2__* ahw; TYPE_1__* recv_ctx; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int diag_test; scalar_t__ loopback_state; scalar_t__ linkup; } ;
struct TYPE_3__ {struct qlcnic_host_sds_ring* sds_rings; struct qlcnic_host_rds_ring* rds_rings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct qlcnic_adapter*,struct net_device*) ;
 struct qlcnic_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 int FUNC_7 (struct qlcnic_host_sds_ring*) ;
 int FUNC_8 (struct qlcnic_adapter*) ;
 int FUNC_9 (struct qlcnic_adapter*,int) ;
 int FUNC_10 (struct qlcnic_adapter*,struct qlcnic_host_rds_ring*,int) ;
 int FUNC_11 (int ,int *) ;

int FUNC_12(struct net_device *VAR_3, int VAR_4)
{
 struct qlcnic_adapter *VAR_5 = FUNC_1(VAR_3);
 struct qlcnic_host_sds_ring *VAR_6;
 struct qlcnic_host_rds_ring *VAR_7;
 int VAR_8;
 int VAR_9;

 FUNC_3(VAR_3);

 if (FUNC_4(VAR_3))
  FUNC_0(VAR_5, VAR_3);

 FUNC_6(VAR_5);

 VAR_5->max_sds_rings = 1;
 VAR_5->ahw->diag_test = VAR_4;
 VAR_5->ahw->linkup = 0;

 VAR_9 = FUNC_5(VAR_5);
 if (VAR_9) {
  FUNC_2(VAR_3);
  return VAR_9;
 }

 VAR_9 = FUNC_8(VAR_5);
 if (VAR_9) {
  FUNC_6(VAR_5);
  FUNC_2(VAR_3);
  return VAR_9;
 }

 for (VAR_8 = 0; VAR_8 < VAR_5->max_rds_rings; VAR_8++) {
  VAR_7 = &VAR_5->recv_ctx->rds_rings[VAR_8];
  FUNC_10(VAR_5, VAR_7, VAR_8);
 }

 if (VAR_5->ahw->diag_test == VAR_0) {
  for (VAR_8 = 0; VAR_8 < VAR_5->max_sds_rings; VAR_8++) {
   VAR_6 = &VAR_5->recv_ctx->sds_rings[VAR_8];
   FUNC_7(VAR_6);
  }
 }

 if (VAR_5->ahw->diag_test == VAR_1) {
  VAR_5->ahw->loopback_state = 0;
  FUNC_9(VAR_5, 1);
 }

 FUNC_11(VAR_2, &VAR_5->state);

 return 0;
}
