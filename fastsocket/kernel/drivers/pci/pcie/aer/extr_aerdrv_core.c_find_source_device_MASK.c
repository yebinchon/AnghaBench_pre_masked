
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; int subordinate; } ;
struct aer_err_info {int id; scalar_t__ error_dev_num; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,char*,int ) ;
 int FUNC_1 (struct pci_dev*,struct aer_err_info*) ;
 int FUNC_2 (int ,int (*) (struct pci_dev*,struct aer_err_info*),struct aer_err_info*) ;

__attribute__((used)) static bool FUNC_3(struct pci_dev *VAR_1,
  struct aer_err_info *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_1;
 int VAR_4;


 VAR_2->error_dev_num = 0;


 VAR_4 = FUNC_1(VAR_3, VAR_2);
 if (VAR_4)
  return 1;

 FUNC_2(VAR_1->subordinate, FUNC_1, VAR_2);

 if (!VAR_2->error_dev_num) {
  FUNC_0(VAR_0, &VAR_1->dev,
    "can't find device of ID%04x\n",
    VAR_2->id);
  return 0;
 }
 return 1;
}
