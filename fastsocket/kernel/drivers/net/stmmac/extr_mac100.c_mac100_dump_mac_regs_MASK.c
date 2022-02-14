
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
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
 int FUNC_0 (char*,...) ;
 int FUNC_1 (unsigned long) ;

__attribute__((used)) static void FUNC_2(unsigned long VAR_13)
{
 FUNC_0("\t----------------------------------------------\n"
        "\t  MAC100 CSR (base addr = 0x%8x)\n"
        "\t----------------------------------------------\n",
        (unsigned int)VAR_13);
 FUNC_0("\tcontrol reg (offset 0x%x): 0x%08x\n", VAR_2,
        FUNC_1(VAR_13 + VAR_2));
 FUNC_0("\taddr HI (offset 0x%x): 0x%08x\n ", VAR_0,
        FUNC_1(VAR_13 + VAR_0));
 FUNC_0("\taddr LO (offset 0x%x): 0x%08x\n", VAR_1,
        FUNC_1(VAR_13 + VAR_1));
 FUNC_0("\tmulticast hash HI (offset 0x%x): 0x%08x\n",
   VAR_4, FUNC_1(VAR_13 + VAR_4));
 FUNC_0("\tmulticast hash LO (offset 0x%x): 0x%08x\n",
   VAR_5, FUNC_1(VAR_13 + VAR_5));
 FUNC_0("\tflow control (offset 0x%x): 0x%08x\n",
  VAR_3, FUNC_1(VAR_13 + VAR_3));
 FUNC_0("\tVLAN1 tag (offset 0x%x): 0x%08x\n", VAR_6,
        FUNC_1(VAR_13 + VAR_6));
 FUNC_0("\tVLAN2 tag (offset 0x%x): 0x%08x\n", VAR_7,
        FUNC_1(VAR_13 + VAR_7));
 FUNC_0("\n\tMAC management counter registers\n");
 FUNC_0("\t MMC crtl (offset 0x%x): 0x%08x\n",
        VAR_8, FUNC_1(VAR_13 + VAR_8));
 FUNC_0("\t MMC High Interrupt (offset 0x%x): 0x%08x\n",
        VAR_9, FUNC_1(VAR_13 + VAR_9));
 FUNC_0("\t MMC Low Interrupt (offset 0x%x): 0x%08x\n",
        VAR_11, FUNC_1(VAR_13 + VAR_11));
 FUNC_0("\t MMC High Interrupt Mask (offset 0x%x): 0x%08x\n",
        VAR_10, FUNC_1(VAR_13 + VAR_10));
 FUNC_0("\t MMC Low Interrupt Mask (offset 0x%x): 0x%08x\n",
        VAR_12, FUNC_1(VAR_13 + VAR_12));
 return;
}
