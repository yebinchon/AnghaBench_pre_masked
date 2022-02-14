
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct cnic_eth_dev {scalar_t__ drv_state; } ;
struct bnx2x {int cnic_enabled; int * cnic_kwq; int cnic_mutex; int cnic_ops; struct cnic_eth_dev cnic_eth_dev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct bnx2x* FUNC_4 (struct net_device*) ;
 int FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_0)
{
 struct bnx2x *VAR_1 = FUNC_4(VAR_0);
 struct cnic_eth_dev *VAR_2 = &VAR_1->cnic_eth_dev;

 FUNC_2(&VAR_1->cnic_mutex);
 VAR_2->drv_state = 0;
 FUNC_0(VAR_1->cnic_ops, ((void*)0));
 FUNC_3(&VAR_1->cnic_mutex);
 FUNC_5();
 VAR_1->cnic_enabled = 0;
 FUNC_1(VAR_1->cnic_kwq);
 VAR_1->cnic_kwq = ((void*)0);

 return 0;
}
