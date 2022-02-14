
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_pbm_info {unsigned long pbm_regs; int pci_bus; int name; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 unsigned long VAR_18 ;
 unsigned long VAR_19 ;
 unsigned long VAR_20 ;
 int FUNC_0 (struct pci_pbm_info*,int ) ;
 int FUNC_1 (struct pci_pbm_info*,int ) ;
 int FUNC_2 (struct pci_pbm_info*,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct pci_pbm_info*,int ) ;
 int FUNC_5 (struct pci_pbm_info*) ;
 unsigned long FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_21, void *VAR_22)
{
 struct pci_pbm_info *VAR_23 = VAR_22;
 unsigned long VAR_24, VAR_25, VAR_26;
 unsigned long VAR_27, VAR_28, VAR_29;
 int VAR_30;

 VAR_26 = VAR_23->pbm_regs;

 VAR_24 = VAR_26 + VAR_20;
 VAR_25 = VAR_26 + VAR_19;


 VAR_28 = FUNC_6(VAR_25);
 VAR_27 = FUNC_6(VAR_24);


 VAR_29 = VAR_27 &
  (VAR_7 | VAR_10 |
   VAR_9 | VAR_8 |
   VAR_11 | VAR_12 |
   VAR_13 | VAR_16 |
   VAR_15 | VAR_14 |
   VAR_17 | VAR_18);
 if (!VAR_29)
  return FUNC_5(VAR_23);
 FUNC_7(VAR_29, VAR_24);


 FUNC_3("%s: PCI Error, primary error type[%s]\n",
        VAR_23->name,
        (((VAR_29 & VAR_7) ?
   "Master Abort" :
   ((VAR_29 & VAR_10) ?
    "Target Abort" :
    ((VAR_29 & VAR_9) ?
     "Excessive Retries" :
     ((VAR_29 & VAR_8) ?
      "Parity Error" :
      ((VAR_29 & VAR_11) ?
       "Timeout" :
       ((VAR_29 & VAR_12) ?
        "Bus Unusable" : "???"))))))));
 FUNC_3("%s: bytemask[%04lx] was_block(%d) space(%s)\n",
        VAR_23->name,
        (VAR_27 & VAR_3) >> 32UL,
        (VAR_27 & VAR_2) ? 1 : 0,
        ((VAR_27 & VAR_4) ?
  "Config" :
  ((VAR_27 & VAR_6) ?
   "Memory" :
   ((VAR_27 & VAR_5) ?
    "I/O" : "???"))));
 FUNC_3("%s: PCI AFAR [%016lx]\n",
        VAR_23->name, VAR_28);
 FUNC_3("%s: PCI Secondary errors [",
        VAR_23->name);
 VAR_30 = 0;
 if (VAR_27 & VAR_13) {
  VAR_30++;
  FUNC_3("(Master Abort)");
 }
 if (VAR_27 & VAR_16) {
  VAR_30++;
  FUNC_3("(Target Abort)");
 }
 if (VAR_27 & VAR_15) {
  VAR_30++;
  FUNC_3("(Excessive Retries)");
 }
 if (VAR_27 & VAR_14) {
  VAR_30++;
  FUNC_3("(Parity Error)");
 }
 if (VAR_27 & VAR_17) {
  VAR_30++;
  FUNC_3("(Timeout)");
 }
 if (VAR_27 & VAR_18) {
  VAR_30++;
  FUNC_3("(Bus Unusable)");
 }
 if (!VAR_30)
  FUNC_3("(none)");
 FUNC_3("]\n");
 if (VAR_29 & (VAR_10 | VAR_16)) {
  FUNC_4(VAR_23, VAR_1);
  FUNC_2(VAR_23, VAR_23->pci_bus);
 }
 if (VAR_29 & (VAR_7 | VAR_13))
  FUNC_0(VAR_23, VAR_23->pci_bus);
 if (VAR_29 & (VAR_8 | VAR_14))
  FUNC_1(VAR_23, VAR_23->pci_bus);

 return VAR_0;
}
