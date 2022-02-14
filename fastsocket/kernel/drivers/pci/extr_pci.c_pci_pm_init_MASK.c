
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int wakeup_prepared; int pm_cap; int d1_support; int d2_support; int pme_support; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,char*,char*,char*,char*,char*,char*) ;
 int FUNC_2 (int ,int *,char*,char*,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int) ;
 int FUNC_8 (struct pci_dev*,scalar_t__,int*) ;

void FUNC_9(struct pci_dev *VAR_13)
{
 int VAR_14;
 u16 VAR_15;

 VAR_13->wakeup_prepared = 0;
 VAR_13->pm_cap = 0;


 VAR_14 = FUNC_5(VAR_13, VAR_1);
 if (!VAR_14)
  return;

 FUNC_8(VAR_13, VAR_14 + VAR_12, &VAR_15);

 if ((VAR_15 & VAR_11) > 3) {
  FUNC_0(&VAR_13->dev, "unsupported PM cap regs version (%u)\n",
   VAR_15 & VAR_11);
  return;
 }

 VAR_13->pm_cap = VAR_14;

 VAR_13->d1_support = 0;
 VAR_13->d2_support = 0;
 if (!FUNC_6(VAR_13)) {
  if (VAR_15 & VAR_2)
   VAR_13->d1_support = 1;
  if (VAR_15 & VAR_3)
   VAR_13->d2_support = 1;

  if (VAR_13->d1_support || VAR_13->d2_support)
   FUNC_2(VAR_0, &VAR_13->dev, "supports%s%s\n",
       VAR_13->d1_support ? " D1" : "",
       VAR_13->d2_support ? " D2" : "");
 }

 VAR_15 &= VAR_9;
 if (VAR_15) {
  FUNC_1(&VAR_13->dev, "PME# supported from%s%s%s%s%s\n",
    (VAR_15 & VAR_4) ? " D0" : "",
    (VAR_15 & VAR_5) ? " D1" : "",
    (VAR_15 & VAR_6) ? " D2" : "",
    (VAR_15 & VAR_7) ? " D3hot" : "",
    (VAR_15 & VAR_8) ? " D3cold" : "");
  VAR_13->pme_support = VAR_15 >> VAR_10;




  FUNC_3(&VAR_13->dev, 1);
  FUNC_4(&VAR_13->dev, 0);

  FUNC_7(VAR_13, 0);
 } else {
  VAR_13->pme_support = 0;
 }
}
