
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct ide_host {int host_flags; scalar_t__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ide_host*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct ide_host* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int) ;
 struct pci_dev* FUNC_4 (scalar_t__) ;

void FUNC_5(struct pci_dev *VAR_3)
{
 struct ide_host *VAR_4 = FUNC_2(VAR_3);
 struct pci_dev *VAR_5 = VAR_4->dev[1] ? FUNC_4(VAR_4->dev[1]) : ((void*)0);
 int VAR_6;

 if (VAR_4->host_flags & VAR_2)
  VAR_6 = (1 << 2) - 1;
 else
  VAR_6 = (1 << 4) - 1;

 if ((VAR_4->host_flags & VAR_1) == 0) {
  if (VAR_4->host_flags & VAR_0)
   VAR_6 |= (1 << 2);
  else
   VAR_6 |= (1 << 4);
 }

 FUNC_0(VAR_4);

 if (VAR_5)
  FUNC_3(VAR_5, VAR_6);
 FUNC_3(VAR_3, VAR_6);

 if (VAR_5)
  FUNC_1(VAR_5);
 FUNC_1(VAR_3);
}
