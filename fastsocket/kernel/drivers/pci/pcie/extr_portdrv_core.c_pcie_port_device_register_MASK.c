
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int*,int) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int,int) ;
 int FUNC_6 (struct pci_dev*) ;

int FUNC_7(struct pci_dev *VAR_3)
{
 int VAR_4, VAR_5, VAR_6, VAR_7;
 int VAR_8[VAR_1];


 VAR_5 = FUNC_6(VAR_3);
 if (!VAR_5)
  return -VAR_0;

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  return VAR_4;
 FUNC_4(VAR_3);





 VAR_4 = FUNC_1(VAR_3, VAR_8, VAR_5);
 if (VAR_4) {
  VAR_5 &= VAR_2;
  if (!VAR_5)
   goto error_disable;
 }


 for (VAR_6 = 0, VAR_7 = 0; VAR_6 < VAR_1; VAR_6++) {
  int VAR_9 = 1 << VAR_6;

  if (!(VAR_5 & VAR_9))
   continue;

  VAR_4 = FUNC_5(VAR_3, VAR_9, VAR_8[VAR_6]);
  if (!VAR_4)
   VAR_7++;
 }
 if (!VAR_7) {
  FUNC_2(VAR_3);
  VAR_4 = -VAR_0;
  goto error_cleanup_irqs;
 }

 return 0;

error_cleanup_irqs:
 FUNC_0(VAR_3);
error_disable:
 FUNC_2(VAR_3);
 return VAR_4;
}
