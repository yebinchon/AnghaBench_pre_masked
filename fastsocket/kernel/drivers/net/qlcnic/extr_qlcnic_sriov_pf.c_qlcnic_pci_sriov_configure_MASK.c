
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int state; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 struct qlcnic_adapter* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct qlcnic_adapter*) ;
 int FUNC_3 (struct qlcnic_adapter*,int) ;
 scalar_t__ FUNC_4 (int ,int *) ;

int FUNC_5(struct pci_dev *VAR_2, int VAR_3)
{
 struct qlcnic_adapter *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;

 if (FUNC_4(VAR_1, &VAR_4->state))
  return -VAR_0;

 if (VAR_3 == 0)
  VAR_5 = FUNC_2(VAR_4);
 else
  VAR_5 = FUNC_3(VAR_4, VAR_3);

 FUNC_0(VAR_1, &VAR_4->state);
 return VAR_5;
}
