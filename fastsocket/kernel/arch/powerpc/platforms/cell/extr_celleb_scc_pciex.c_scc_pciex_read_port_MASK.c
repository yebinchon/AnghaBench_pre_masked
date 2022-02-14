
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct pci_controller {int cfg_addr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,unsigned int) ;
 unsigned long FUNC_3 (struct pci_controller*,unsigned long) ;
 int FUNC_4 (char*,unsigned long,unsigned long,int,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static u32 FUNC_5(struct pci_controller *VAR_5,
          unsigned long VAR_6, int VAR_7)
{
 unsigned int VAR_8;
 unsigned int VAR_9, VAR_10;
 unsigned long VAR_11;
 u32 VAR_12, VAR_13;

 FUNC_0(((VAR_6 & 0x3ul) + VAR_7) > 4);

 VAR_11 = FUNC_3(VAR_5, VAR_6);
 VAR_10 = VAR_11 & 0x3ul;
 VAR_8 = ((1 << VAR_7) - 1) << VAR_10;
 VAR_9 = VAR_3 | (VAR_8 << VAR_2);
 FUNC_2(VAR_5->cfg_addr, VAR_0, (VAR_11 & ~0x3ul));
 FUNC_2(VAR_5->cfg_addr, VAR_1, VAR_9);
 VAR_12 = FUNC_1(VAR_5->cfg_addr, VAR_4);
 VAR_13 = (VAR_12 >> (VAR_10 * 8)) & (0xFFFFFFFF >> ((4 - VAR_7) * 8));

 FUNC_4("PCIEX:PIO READ:port=0x%lx, addr=0x%lx, size=%d, be=%x,"
   " cmd=%x, data=%x, ret=%x\n", VAR_6, VAR_11, VAR_7, VAR_8,
   VAR_9, VAR_12, VAR_13);

 return VAR_13;
}
