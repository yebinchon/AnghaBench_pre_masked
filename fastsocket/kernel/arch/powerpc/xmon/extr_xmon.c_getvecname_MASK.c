
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static
const char *FUNC_0(unsigned long VAR_0)
{
 char *VAR_1;

 switch (VAR_0) {
 case 0x100: VAR_1 = "(System Reset)"; break;
 case 0x200: VAR_1 = "(Machine Check)"; break;
 case 0x300: VAR_1 = "(Data Access)"; break;
 case 0x380: VAR_1 = "(Data SLB Access)"; break;
 case 0x400: VAR_1 = "(Instruction Access)"; break;
 case 0x480: VAR_1 = "(Instruction SLB Access)"; break;
 case 0x500: VAR_1 = "(Hardware Interrupt)"; break;
 case 0x600: VAR_1 = "(Alignment)"; break;
 case 0x700: VAR_1 = "(Program Check)"; break;
 case 0x800: VAR_1 = "(FPU Unavailable)"; break;
 case 0x900: VAR_1 = "(Decrementer)"; break;
 case 0xc00: VAR_1 = "(System Call)"; break;
 case 0xd00: VAR_1 = "(Single Step)"; break;
 case 0xf00: VAR_1 = "(Performance Monitor)"; break;
 case 0xf20: VAR_1 = "(Altivec Unavailable)"; break;
 case 0x1300: VAR_1 = "(Instruction Breakpoint)"; break;
 default: VAR_1 = "";
 }
 return VAR_1;
}
