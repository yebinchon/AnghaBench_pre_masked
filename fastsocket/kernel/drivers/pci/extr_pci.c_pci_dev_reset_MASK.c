
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sem; } ;
struct pci_dev {TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (struct pci_dev*,int) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int) ;
 int FUNC_6 (struct pci_dev*,int) ;
 int FUNC_7 (struct pci_dev*,int) ;
 int FUNC_8 (struct pci_dev*,int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct pci_dev *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_1();

 if (!VAR_2) {
  FUNC_3(VAR_1);

  FUNC_0(&VAR_1->dev.sem);
 }

 VAR_3 = FUNC_5(VAR_1, VAR_2);
 if (VAR_3 != -VAR_0)
  goto done;

 VAR_3 = FUNC_8(VAR_1, VAR_2);
 if (VAR_3 != -VAR_0)
  goto done;

 VAR_3 = FUNC_2(VAR_1, VAR_2);
 if (VAR_3 != -VAR_0)
  goto done;

 VAR_3 = FUNC_7(VAR_1, VAR_2);
 if (VAR_3 != -VAR_0)
  goto done;

 VAR_3 = FUNC_6(VAR_1, VAR_2);
done:
 if (!VAR_2) {
  FUNC_9(&VAR_1->dev.sem);
  FUNC_4(VAR_1);
 }

 return VAR_3;
}
