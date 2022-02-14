
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct aer_err_info {size_t severity; int id; scalar_t__ multi_error_valid; } ;


 int * VAR_0 ;
 int FUNC_0 (int *,char*,char*,int ,int ) ;

void FUNC_1(struct pci_dev *VAR_1, struct aer_err_info *VAR_2)
{
 FUNC_0(&VAR_1->dev, "AER: %s%s error received: id=%04x\n",
  VAR_2->multi_error_valid ? "Multiple " : "",
  VAR_0[VAR_2->severity], VAR_2->id);
}
