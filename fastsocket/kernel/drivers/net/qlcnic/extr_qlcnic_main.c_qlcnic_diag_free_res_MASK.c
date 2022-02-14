
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_host_sds_ring {int dummy; } ;
struct qlcnic_adapter {int max_sds_rings; TYPE_2__* ahw; TYPE_1__* recv_ctx; int state; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ diag_test; } ;
struct TYPE_3__ {struct qlcnic_host_sds_ring* sds_rings; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qlcnic_adapter*,struct net_device*) ;
 int FUNC_1 (int ,int *) ;
 struct qlcnic_adapter* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*) ;
 int FUNC_7 (struct qlcnic_host_sds_ring*) ;
 int FUNC_8 (struct qlcnic_adapter*) ;

void FUNC_9(struct net_device *VAR_2, int VAR_3)
{
 struct qlcnic_adapter *VAR_4 = FUNC_2(VAR_2);
 struct qlcnic_host_sds_ring *VAR_5;
 int VAR_6;

 FUNC_1(VAR_1, &VAR_4->state);
 if (VAR_4->ahw->diag_test == VAR_0) {
  for (VAR_6 = 0; VAR_6 < VAR_4->max_sds_rings; VAR_6++) {
   VAR_5 = &VAR_4->recv_ctx->sds_rings[VAR_6];
   FUNC_7(VAR_5);
  }
 }

 FUNC_8(VAR_4);

 FUNC_6(VAR_4);

 VAR_4->ahw->diag_test = 0;
 VAR_4->max_sds_rings = VAR_3;

 if (FUNC_5(VAR_4))
  goto out;

 if (FUNC_4(VAR_2))
  FUNC_0(VAR_4, VAR_2);
out:
 FUNC_3(VAR_2);
}
