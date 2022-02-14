
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
 int VAR_18 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct pci_pbm_info*,int ) ;
 unsigned long FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_19, void *VAR_20)
{
 struct pci_pbm_info *VAR_21 = VAR_20;
 unsigned long VAR_22 = VAR_21->controller_regs + VAR_17;
 unsigned long VAR_23 = VAR_21->controller_regs + VAR_16;
 unsigned long VAR_24, VAR_25, VAR_26;
 int VAR_27, VAR_28;


 VAR_25 = FUNC_2(VAR_23);





 VAR_28 = 1000;
 do {
  VAR_24 = FUNC_2(VAR_22);
 } while ((VAR_24 & VAR_5) != 0 && --VAR_28);


 VAR_26 = VAR_24 &
  (VAR_12 | VAR_10 | VAR_11 |
   VAR_15 | VAR_14);
 if (!VAR_26)
  return VAR_1;
 FUNC_3(VAR_26, VAR_22);


 FUNC_0("%s: Uncorrectable Error, primary error type[%s]\n",
        VAR_21->name,
        (((VAR_26 & VAR_12) ?
   "PIO" :
   ((VAR_26 & VAR_10) ?
    "DMA Read" :
    ((VAR_26 & VAR_11) ?
     "DMA Write" : "???")))));
 FUNC_0("%s: bytemask[%04lx] qword_offset[%lx] SAFARI_AID[%02lx]\n",
        VAR_21->name,
        (VAR_24 & VAR_3) >> 32UL,
        (VAR_24 & VAR_13) >> 30UL,
        (VAR_24 & VAR_2) >> 24UL);
 FUNC_0("%s: partial[%d] owned_in[%d] mtag[%lx] mtag_synd[%lx] ecc_sync[%lx]\n",
        VAR_21->name,
        (VAR_24 & VAR_9) ? 1 : 0,
        (VAR_24 & VAR_8) ? 1 : 0,
        (VAR_24 & VAR_6) >> 13UL,
        (VAR_24 & VAR_7) >> 16UL,
        (VAR_24 & VAR_4) >> 0UL);
 FUNC_0("%s: UE AFAR [%016lx]\n", VAR_21->name, VAR_25);
 FUNC_0("%s: UE Secondary errors [", VAR_21->name);
 VAR_27 = 0;
 if (VAR_24 & VAR_15) {
  VAR_27++;
  FUNC_0("(PIO)");
 }
 if (VAR_24 & VAR_14) {
  VAR_27++;
  FUNC_0("(DMA)");
 }
 if (!VAR_27)
  FUNC_0("(none)");
 FUNC_0("]\n");


 FUNC_1(VAR_21, VAR_18);

 return VAR_0;
}
