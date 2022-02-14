
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct aer_err_info {size_t error_dev_num; struct pci_dev** dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct aer_err_info *VAR_2, struct pci_dev *VAR_3)
{
 if (VAR_2->error_dev_num < VAR_0) {
  VAR_2->dev[VAR_2->error_dev_num] = VAR_3;
  VAR_2->error_dev_num++;
  return 0;
 }
 return -VAR_1;
}
