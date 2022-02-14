
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {scalar_t__ is_up; struct pci_dev* pdev; struct net_device* netdev; } ;
struct pci_dev {int dev; } ;
struct net_device {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct qlcnic_adapter*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*) ;
 int FUNC_4 (struct qlcnic_adapter*) ;
 int FUNC_5 (struct qlcnic_adapter*) ;
 int FUNC_6 (struct qlcnic_adapter*,struct net_device*) ;
 int FUNC_7 (struct qlcnic_adapter*) ;
 int FUNC_8 (struct qlcnic_adapter*) ;

int
FUNC_9(struct qlcnic_adapter *VAR_1)
{
 struct net_device *VAR_2 = VAR_1->netdev;
 struct pci_dev *VAR_3 = VAR_1->pdev;
 int VAR_4;

 if (VAR_1->is_up == VAR_0)
  return 0;

 VAR_4 = FUNC_6(VAR_1, VAR_2);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4) {
  FUNC_0(&VAR_3->dev, "Error in setting sw resources\n");
  goto err_out_napi_del;
 }

 VAR_4 = FUNC_1(VAR_1);
 if (VAR_4) {
  FUNC_0(&VAR_3->dev, "Error in setting hw resources\n");
  goto err_out_free_sw;
 }

 VAR_4 = FUNC_8(VAR_1);
 if (VAR_4) {
  FUNC_0(&VAR_3->dev, "failed to setup interrupt\n");
  goto err_out_free_hw;
 }

 FUNC_3(VAR_1);

 VAR_1->is_up = VAR_0;
 return 0;

err_out_free_hw:
 FUNC_4(VAR_1);
err_out_free_sw:
 FUNC_5(VAR_1);
err_out_napi_del:
 FUNC_7(VAR_1);
 return VAR_4;
}
