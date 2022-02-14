
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct seq_file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct seq_file*,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct seq_file *VAR_9, void *VAR_10)
{
 u32 VAR_11,VAR_12,VAR_13,VAR_14;
 u32 VAR_15, VAR_16, VAR_17;
 u32 VAR_18,VAR_19,VAR_20,VAR_21;
 u32 VAR_22,VAR_23,VAR_24,VAR_25;

 VAR_11 = FUNC_1(VAR_2);
 VAR_12 = FUNC_1(VAR_6);
 VAR_13 = FUNC_1(VAR_1);
 VAR_14 = FUNC_1(VAR_8);
 VAR_15 = FUNC_1(VAR_0);
 VAR_16 = FUNC_1(VAR_7);
 FUNC_2(0, VAR_3);
 VAR_17 = FUNC_1(VAR_4);
 FUNC_2(1, VAR_3);
 VAR_18 = FUNC_1(VAR_4);
 VAR_19 = FUNC_1(VAR_5);
 VAR_20 = FUNC_1(VAR_4);
 VAR_21 = FUNC_1(VAR_5);
 FUNC_2(2, VAR_3);
 VAR_22 = FUNC_1(VAR_4);
 VAR_23 = FUNC_1(VAR_5);
 VAR_24 = FUNC_1(VAR_4);
 VAR_25 = FUNC_1(VAR_5);

 FUNC_0(VAR_9, "FUNC_ADDR_REG  : 0x%04X\n"
   "PWR_REG        : 0x%04X\n"
   "EP_INT_REG     : 0x%04X\n"
   "USB_INT_REG    : 0x%04X\n"
   "EP_INT_EN_REG  : 0x%04X\n"
   "USB_INT_EN_REG : 0x%04X\n"
   "EP0_CSR        : 0x%04X\n"
   "EP1_I_CSR1     : 0x%04X\n"
   "EP1_I_CSR2     : 0x%04X\n"
   "EP1_O_CSR1     : 0x%04X\n"
   "EP1_O_CSR2     : 0x%04X\n"
   "EP2_I_CSR1     : 0x%04X\n"
   "EP2_I_CSR2     : 0x%04X\n"
   "EP2_O_CSR1     : 0x%04X\n"
   "EP2_O_CSR2     : 0x%04X\n",
   VAR_11,VAR_12,VAR_13,VAR_14,
   VAR_15, VAR_16, VAR_17,
   VAR_18,VAR_19,VAR_20,VAR_21,
   VAR_22,VAR_23,VAR_24,VAR_25
  );

 return 0;
}
