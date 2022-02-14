
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 unsigned long FUNC_0 (struct pt_regs*) ;
 int FUNC_1 (char*,...) ;

int FUNC_2(struct pt_regs *VAR_0)
{
 unsigned long VAR_1 = FUNC_0(VAR_0);

 FUNC_1("Machine check in kernel mode.\n");
 FUNC_1("Caused by (from SRR1=%lx): ", VAR_1);
 switch (VAR_1 & 0x601F0000) {
 case 0x80000:
  FUNC_1("Machine check signal\n");
  break;
 case 0:
 case 0x40000:
 case 0x140000:
  FUNC_1("Transfer error ack signal\n");
  break;
 case 0x20000:
  FUNC_1("Data parity error signal\n");
  break;
 case 0x10000:
  FUNC_1("Address parity error signal\n");
  break;
 case 0x20000000:
  FUNC_1("L1 Data Cache error\n");
  break;
 case 0x40000000:
  FUNC_1("L1 Instruction Cache error\n");
  break;
 case 0x00100000:
  FUNC_1("L2 data cache parity error\n");
  break;
 default:
  FUNC_1("Unknown values in msr\n");
 }
 return 0;
}
