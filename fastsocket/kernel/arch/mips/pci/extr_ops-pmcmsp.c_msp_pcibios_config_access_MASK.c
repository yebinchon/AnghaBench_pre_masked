
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct pci_bus {unsigned char number; } ;
struct msp_pci_regs {unsigned long if_status; unsigned char config_addr; } ;


 unsigned char VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char VAR_9 ;
 scalar_t__ VAR_10 ;
 unsigned long* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned long FUNC_0 (unsigned long) ;
 unsigned int FUNC_1 () ;
 int FUNC_2 (unsigned int) ;
 unsigned long FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 int FUNC_6 () ;
 int VAR_14 ;
 int FUNC_7 (int ,int ,int,char*,struct msp_pci_regs*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;

int FUNC_10(unsigned char VAR_15,
    struct pci_bus *VAR_16,
    unsigned int VAR_17,
    unsigned char VAR_18,
    u32 *VAR_19)
{
 struct msp_pci_regs *VAR_20 = (void *)VAR_10;
 unsigned char VAR_21 = VAR_16->number;
 unsigned char VAR_22 = (unsigned char)VAR_17;
 unsigned long VAR_23;
 unsigned long VAR_24;
 unsigned long VAR_25;
 static char VAR_26;
 int VAR_27;
 if (VAR_26 == 0) {
  VAR_27 = FUNC_7(VAR_7,
    VAR_12,
    VAR_6 | VAR_5,
    "PMC MSP PCI Host",
    VAR_20);
  if (VAR_27 != 0)
   return VAR_27;
  VAR_26 = ~0;
 }





 FUNC_8(&VAR_13, VAR_23);
 VAR_20->if_status = ~(VAR_3 | VAR_4);


 VAR_20->config_addr = VAR_1 |
  (VAR_21 << VAR_0) |
  (VAR_22 << VAR_2) |
  (VAR_18 & 0xFC);


 if (VAR_15 == VAR_9) {
  VAR_25 = FUNC_0(*VAR_19);
  *VAR_11 = VAR_25;
 } else {

  VAR_25 = FUNC_3(*VAR_11);
  *VAR_19 = VAR_25;
 }





 VAR_24 = VAR_20->if_status;


 VAR_20->config_addr = 0;


 if (VAR_24 & ~(VAR_3 | VAR_4)) {

  VAR_20->if_status = ~(VAR_3 | VAR_4);





  FUNC_9(&VAR_13, VAR_23);


  return -1;
 }





 FUNC_9(&VAR_13, VAR_23);


 return VAR_8;
}
