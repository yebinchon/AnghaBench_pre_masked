
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_controller {int cfg_addr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int) ;
 unsigned long FUNC_2 (struct pci_controller*,unsigned long) ;
 int FUNC_3 (char*,unsigned long,unsigned long,int,int,unsigned int,unsigned int,int) ;

__attribute__((used)) static void FUNC_4(struct pci_controller *VAR_5,
     unsigned long VAR_6, int VAR_7, u32 VAR_8)
{
 unsigned int VAR_9;
 unsigned int VAR_10, VAR_11;
 unsigned long VAR_12;
 u32 VAR_13;

 FUNC_0(((VAR_6 & 0x3ul) + VAR_7) > 4);

 VAR_12 = FUNC_2(VAR_5, VAR_6);
 VAR_11 = VAR_12 & 0x3ul;
 VAR_9 = ((1 << VAR_7) - 1) << VAR_11;
 VAR_10 = VAR_3 | (VAR_9 << VAR_2);
 VAR_13 = (VAR_8 & (0xFFFFFFFF >> (4 - VAR_7) * 8)) << (VAR_11 * 8);
 FUNC_1(VAR_5->cfg_addr, VAR_0, (VAR_12 & ~0x3ul));
 FUNC_1(VAR_5->cfg_addr, VAR_1, VAR_10);
 FUNC_1(VAR_5->cfg_addr, VAR_4, VAR_13);

 FUNC_3("PCIEX:PIO WRITE:port=0x%lx, addr=%lx, size=%d, val=%x,"
   " be=%x, cmd=%x, data=%x\n", VAR_6, VAR_12, VAR_7, VAR_8,
   VAR_9, VAR_10, VAR_13);
}
