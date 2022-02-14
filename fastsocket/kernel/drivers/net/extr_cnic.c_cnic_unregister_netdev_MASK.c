
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cnic_local {struct cnic_eth_dev* ethdev; } ;
struct cnic_eth_dev {int (* drv_unregister_cnic ) (int ) ;} ;
struct cnic_dev {int netdev; struct cnic_local* cnic_priv; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct cnic_dev *VAR_0)
{
 struct cnic_local *VAR_1 = VAR_0->cnic_priv;
 struct cnic_eth_dev *VAR_2 = VAR_1->ethdev;

 if (!VAR_2)
  return;

 VAR_2->drv_unregister_cnic(VAR_0->netdev);
}
