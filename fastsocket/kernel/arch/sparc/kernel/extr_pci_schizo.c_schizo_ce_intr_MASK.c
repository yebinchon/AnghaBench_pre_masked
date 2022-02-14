
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
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long VAR_17 ;
 int FUNC_0 (char*,...) ;
 unsigned long FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_18, void *VAR_19)
{
 struct pci_pbm_info *VAR_20 = VAR_19;
 unsigned long VAR_21 = VAR_20->controller_regs + VAR_8;
 unsigned long VAR_22 = VAR_20->controller_regs + VAR_7;
 unsigned long VAR_23, VAR_24, VAR_25;
 int VAR_26, VAR_27;


 VAR_24 = FUNC_1(VAR_22);





 VAR_27 = 1000;
 do {
  VAR_23 = FUNC_1(VAR_21);
 } while ((VAR_23 & VAR_12) != 0 && --VAR_27);


 VAR_25 = VAR_23 &
  (VAR_4 | VAR_2 | VAR_3 |
   VAR_6 | VAR_5);
 if (!VAR_25)
  return VAR_1;
 FUNC_2(VAR_25, VAR_21);


 FUNC_0("%s: Correctable Error, primary error type[%s]\n",
        VAR_20->name,
        (((VAR_25 & VAR_4) ?
   "PIO" :
   ((VAR_25 & VAR_2) ?
    "DMA Read" :
    ((VAR_25 & VAR_3) ?
     "DMA Write" : "???")))));




 FUNC_0("%s: bytemask[%04lx] qword_offset[%lx] SAFARI_AID[%02lx]\n",
        VAR_20->name,
        (VAR_23 & VAR_10) >> 32UL,
        (VAR_23 & VAR_17) >> 30UL,
        (VAR_23 & VAR_9) >> 24UL);
 FUNC_0("%s: partial[%d] owned_in[%d] mtag[%lx] mtag_synd[%lx] ecc_sync[%lx]\n",
        VAR_20->name,
        (VAR_23 & VAR_16) ? 1 : 0,
        (VAR_23 & VAR_15) ? 1 : 0,
        (VAR_23 & VAR_13) >> 13UL,
        (VAR_23 & VAR_14) >> 16UL,
        (VAR_23 & VAR_11) >> 0UL);
 FUNC_0("%s: CE AFAR [%016lx]\n", VAR_20->name, VAR_24);
 FUNC_0("%s: CE Secondary errors [", VAR_20->name);
 VAR_26 = 0;
 if (VAR_23 & VAR_6) {
  VAR_26++;
  FUNC_0("(PIO)");
 }
 if (VAR_23 & VAR_5) {
  VAR_26++;
  FUNC_0("(DMA)");
 }
 if (!VAR_26)
  FUNC_0("(none)");
 FUNC_0("]\n");

 return VAR_0;
}
