
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev_flags; } ;
typedef scalar_t__ pci_power_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pci_dev*,scalar_t__) ;
 int FUNC_1 (struct pci_dev*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,scalar_t__) ;

int FUNC_4(struct pci_dev *VAR_5, pci_power_t VAR_6)
{
 int VAR_7;


 if (VAR_6 > VAR_3)
  VAR_6 = VAR_3;
 else if (VAR_6 < VAR_0)
  VAR_6 = VAR_0;
 else if ((VAR_6 == VAR_1 || VAR_6 == VAR_2) && FUNC_2(VAR_5))





  return 0;

 FUNC_1(VAR_5, VAR_6);



 if (VAR_6 == VAR_3 && (VAR_5->dev_flags & VAR_4))
  return 0;

 VAR_7 = FUNC_3(VAR_5, VAR_6);

 if (!FUNC_0(VAR_5, VAR_6))
  VAR_7 = 0;

 return VAR_7;
}
