
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct qlcnic_adapter {TYPE_1__* pdev; int msix_entries; struct net_device* netdev; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_adapter*,struct net_device*) ;
 int FUNC_1 (struct qlcnic_adapter*,struct net_device*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct net_device*) ;
 scalar_t__ FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct qlcnic_adapter*) ;
 int FUNC_8 (struct qlcnic_adapter*) ;
 int FUNC_9 (struct qlcnic_adapter*) ;
 int FUNC_10 (struct qlcnic_adapter*) ;
 int FUNC_11 (struct qlcnic_adapter*,int) ;
 int FUNC_12 (struct qlcnic_adapter*) ;
 int FUNC_13 (struct qlcnic_adapter*) ;
 int FUNC_14 (struct qlcnic_adapter*) ;
 int FUNC_15 (struct net_device*,int ) ;
 int FUNC_16 (struct qlcnic_adapter*,int ) ;
 int FUNC_17 (struct qlcnic_adapter*) ;
 int FUNC_18 () ;
 int FUNC_19 () ;

int FUNC_20(struct qlcnic_adapter *VAR_1, u8 VAR_2, size_t VAR_3)
{
 int VAR_4;
 struct net_device *VAR_5 = VAR_1->netdev;

 FUNC_18();
 FUNC_5(VAR_5);
 if (FUNC_6(VAR_5))
  FUNC_0(VAR_1, VAR_5);

 FUNC_14(VAR_1);

 if (FUNC_7(VAR_1)) {
  FUNC_9(VAR_1);
  FUNC_10(VAR_1);
 }

 FUNC_17(VAR_1);
 VAR_4 = FUNC_16(VAR_1, VAR_2);
 if (VAR_4) {
  FUNC_3(VAR_1->msix_entries);
  FUNC_2(&VAR_1->pdev->dev, "failed to setup interrupt\n");
  return VAR_4;
 }

 if (FUNC_7(VAR_1)) {

  FUNC_11(VAR_1, 1);

  VAR_4 = FUNC_12(VAR_1);
  FUNC_8(VAR_1);
  if (VAR_4) {
   FUNC_2(&VAR_1->pdev->dev,
    "failed to setup mbx interrupt\n");
   goto done;
  }
 }

 if (FUNC_6(VAR_5)) {
  VAR_4 = FUNC_13(VAR_1);
  if (VAR_4)
   goto done;
  VAR_4 = FUNC_1(VAR_1, VAR_5);
  if (VAR_4)
   goto done;
  FUNC_15(VAR_5, VAR_0);
 }
 VAR_4 = VAR_3;
 done:
 FUNC_4(VAR_5);
 FUNC_19();
 return VAR_4;

}
