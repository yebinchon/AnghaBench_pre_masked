
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int irq; scalar_t__ pin; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int*,int) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_5, int *VAR_6, int VAR_7)
{
 int VAR_8, VAR_9 = -1;





 if (((VAR_7 & VAR_3) && (0)) ||
     ((VAR_7 & VAR_2) && FUNC_2())) {
  if (VAR_5->pin)
   VAR_9 = VAR_5->irq;
  goto no_msi;
 }


 if (!FUNC_1(VAR_5, VAR_6, VAR_7))
  return 0;


 if (!FUNC_0(VAR_5) || VAR_5->pin)
  VAR_9 = VAR_5->irq;

 no_msi:
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
  VAR_6[VAR_8] = VAR_9;
 VAR_6[VAR_4] = -1;

 if (VAR_9 < 0)
  return -VAR_0;
 return 0;
}
