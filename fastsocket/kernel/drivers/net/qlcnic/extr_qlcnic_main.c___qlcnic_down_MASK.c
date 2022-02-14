
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ fnum; } ;
struct qlcnic_adapter {scalar_t__ is_up; int tx_clean_lock; int flags; TYPE_3__ fhash; TYPE_2__* ahw; int state; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {scalar_t__ linkup; TYPE_1__* sriov; } ;
struct TYPE_4__ {int bc; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*,int ) ;
 int FUNC_7 (struct qlcnic_adapter*) ;
 int FUNC_8 (struct qlcnic_adapter*) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (struct qlcnic_adapter*) ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int *) ;

void FUNC_15(struct qlcnic_adapter *VAR_4, struct net_device *VAR_5)
{
 if (VAR_4->is_up != VAR_0)
  return;

 if (!FUNC_14(VAR_3, &VAR_4->state))
  return;

 if (FUNC_10(VAR_4))
  FUNC_9(&VAR_4->ahw->sriov->bc);
 FUNC_11();
 FUNC_12(&VAR_4->tx_clean_lock);
 FUNC_0(VAR_5);
 VAR_4->ahw->linkup = 0;
 FUNC_1(VAR_5);

 FUNC_3(VAR_4);

 if (VAR_4->fhash.fnum)
  FUNC_2(VAR_4);

 FUNC_6(VAR_4, VAR_2);

 FUNC_5(VAR_4);

 FUNC_4(VAR_4);
 VAR_4->flags &= ~VAR_1;

 FUNC_8(VAR_4);
 FUNC_7(VAR_4);
 FUNC_13(&VAR_4->tx_clean_lock);
}
