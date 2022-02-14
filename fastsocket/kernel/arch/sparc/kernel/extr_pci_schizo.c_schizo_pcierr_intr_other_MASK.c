
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_pbm_info {unsigned long pbm_regs; TYPE_1__* pci_bus; int name; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int self; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (char*,int ,...) ;
 unsigned long FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_5(struct pci_pbm_info *VAR_15)
{
 unsigned long VAR_16, VAR_17, VAR_18;
 irqreturn_t VAR_19 = VAR_1;
 u16 VAR_20;

 VAR_16 = VAR_15->pbm_regs + VAR_14;
 VAR_17 = FUNC_3(VAR_16);
 VAR_18 =
  VAR_17 & (VAR_8 |
         VAR_13 |
         VAR_10 |
         VAR_9 |
         VAR_11 |
         VAR_12);
 if (VAR_18) {

  FUNC_4(VAR_17, VAR_16);


  if (VAR_18 & VAR_8)
   FUNC_2("%s: Bus unusable error asserted.\n",
          VAR_15->name);
  if (VAR_18 & VAR_13)
   FUNC_2("%s: PCI TRDY# timeout error asserted.\n",
          VAR_15->name);
  if (VAR_18 & VAR_10)
   FUNC_2("%s: PCI excessive retry error asserted.\n",
          VAR_15->name);
  if (VAR_18 & VAR_9)
   FUNC_2("%s: PCI discard timeout error asserted.\n",
          VAR_15->name);
  if (VAR_18 & VAR_11)
   FUNC_2("%s: PCI streaming byte hole error asserted.\n",
          VAR_15->name);
  if (VAR_18 & VAR_12)
   FUNC_2("%s: PCI SERR signal asserted.\n",
          VAR_15->name);
  VAR_19 = VAR_0;
 }
 FUNC_0(VAR_15->pci_bus->self, VAR_2, &VAR_20);
 if (VAR_20 & (VAR_3 |
      VAR_7 |
      VAR_5 |
      VAR_4 |
      VAR_6)) {
  FUNC_2("%s: PCI bus error, PCI_STATUS[%04x]\n",
         VAR_15->name, VAR_20);
  FUNC_1(VAR_15->pci_bus->self, VAR_2, 0xffff);
  VAR_19 = VAR_0;
 }
 return VAR_19;
}
