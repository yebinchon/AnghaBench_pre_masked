
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_pbm_info {unsigned long controller_regs; int name; } ;
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
 int FUNC_0 (char*,...) ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_15, void *VAR_16)
{
 struct pci_pbm_info *VAR_17 = VAR_16;
 unsigned long VAR_18 = VAR_17->controller_regs + VAR_14;
 unsigned long VAR_19 = VAR_17->controller_regs + VAR_13;
 unsigned long VAR_20, VAR_21, VAR_22;
 int VAR_23;


 VAR_21 = FUNC_1(VAR_19);
 VAR_20 = FUNC_1(VAR_18);


 VAR_22 = VAR_20 &
  (VAR_9 | VAR_7 | VAR_8 |
   VAR_12 | VAR_10 | VAR_11);
 if (!VAR_22)
  return VAR_1;
 FUNC_2(VAR_22, VAR_18);


 FUNC_0("%s: Correctable Error, primary error type[%s]\n",
        VAR_17->name,
        (((VAR_22 & VAR_9) ?
   "PIO" :
   ((VAR_22 & VAR_7) ?
    "DMA Read" :
    ((VAR_22 & VAR_8) ?
     "DMA Write" : "???")))));




 FUNC_0("%s: syndrome[%02lx] bytemask[%04lx] dword_offset[%lx] "
        "UPA_MID[%02lx] was_block(%d)\n",
        VAR_17->name,
        (VAR_20 & VAR_5) >> 48UL,
        (VAR_20 & VAR_3) >> 32UL,
        (VAR_20 & VAR_4) >> 29UL,
        (VAR_20 & VAR_6) >> 24UL,
        ((VAR_20 & VAR_2) ? 1 : 0));
 FUNC_0("%s: CE AFAR [%016lx]\n", VAR_17->name, VAR_21);
 FUNC_0("%s: CE Secondary errors [", VAR_17->name);
 VAR_23 = 0;
 if (VAR_20 & VAR_12) {
  VAR_23++;
  FUNC_0("(PIO)");
 }
 if (VAR_20 & VAR_10) {
  VAR_23++;
  FUNC_0("(DMA Read)");
 }
 if (VAR_20 & VAR_11) {
  VAR_23++;
  FUNC_0("(DMA Write)");
 }
 if (!VAR_23)
  FUNC_0("(none)");
 FUNC_0("]\n");

 return VAR_0;
}
