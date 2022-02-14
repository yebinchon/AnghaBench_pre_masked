
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlcnic_adapter {int flags; int max_drv_tx_rings; TYPE_1__* ahw; int state; int * tx_ring; int pdev; } ;
struct TYPE_2__ {scalar_t__ diag_test; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*,int) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*,int *,int) ;
 int FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*,int *) ;
 int FUNC_7 (int ,int *) ;

int FUNC_8(struct qlcnic_adapter *VAR_4)
{
 int VAR_5, VAR_6, VAR_7;

 if (VAR_4->flags & VAR_2) {
  FUNC_0(VAR_4->pdev);
  VAR_4->flags &= ~VAR_2;
 }

 if (FUNC_1(VAR_4) && (VAR_4->flags & VAR_1)) {
  if (VAR_4->ahw->diag_test != VAR_0) {
   VAR_6 = FUNC_2(VAR_4, 1);
   if (VAR_6)
    return VAR_6;
  }
 }

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6)
  goto err_out;

 for (VAR_7 = 0; VAR_7 < VAR_4->max_drv_tx_rings; VAR_7++) {
  VAR_6 = FUNC_4(VAR_4,
        &VAR_4->tx_ring[VAR_7],
        VAR_7);
  if (VAR_6) {
   FUNC_5(VAR_4);
   if (VAR_7 == 0)
    goto err_out;

   for (VAR_5 = 0; VAR_5 < VAR_7; VAR_5++)
    FUNC_6(VAR_4, &VAR_4->tx_ring[VAR_5]);

   goto err_out;
  }
 }

 FUNC_7(VAR_3, &VAR_4->state);
 return 0;

err_out:
 if (FUNC_1(VAR_4) && (VAR_4->flags & VAR_1)) {
  if (VAR_4->ahw->diag_test != VAR_0)
   FUNC_2(VAR_4, 0);
 }
 return VAR_6;
}
