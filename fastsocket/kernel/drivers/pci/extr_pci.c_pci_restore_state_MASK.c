
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct pci_dev {int state_saved; scalar_t__* saved_config_space; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,char*,int,scalar_t__,int) ;
 int FUNC_1 (struct pci_dev*,int,scalar_t__*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int,scalar_t__) ;

int
FUNC_8(struct pci_dev *VAR_1)
{
 int VAR_2;
 u32 VAR_3;

 if (!VAR_1->state_saved)
  return 0;


 FUNC_5(VAR_1);
 FUNC_2(VAR_1);





 for (VAR_2 = 15; VAR_2 >= 0; VAR_2--) {
  FUNC_1(VAR_1, VAR_2 * 4, &VAR_3);
  if (VAR_3 != VAR_1->saved_config_space[VAR_2]) {
   FUNC_0(VAR_0, &VAR_1->dev, "restoring config "
    "space at offset %#x (was %#x, writing %#x)\n",
    VAR_2, VAR_3, (int)VAR_1->saved_config_space[VAR_2]);
   FUNC_7(VAR_1,VAR_2 * 4,
    VAR_1->saved_config_space[VAR_2]);
  }
 }
 FUNC_6(VAR_1);
 FUNC_4(VAR_1);
 FUNC_3(VAR_1);

 VAR_1->state_saved = 0;

 return 0;
}
