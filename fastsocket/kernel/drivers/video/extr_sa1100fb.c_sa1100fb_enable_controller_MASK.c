
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int var; } ;
struct sa1100fb_info {int* palette_cpu; int reg_lccr3; int reg_lccr2; int reg_lccr1; int reg_lccr0; int dbar1; int dbar2; TYPE_1__ fb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct sa1100fb_info *VAR_10)
{
 FUNC_0("Enabling LCD controller\n");




 VAR_10->palette_cpu[0] &= 0xcfff;
 VAR_10->palette_cpu[0] |= FUNC_2(&VAR_10->fb.var);


 VAR_8 = VAR_10->reg_lccr3;
 VAR_7 = VAR_10->reg_lccr2;
 VAR_6 = VAR_10->reg_lccr1;
 VAR_4 = VAR_10->reg_lccr0 & ~VAR_5;
 VAR_0 = VAR_10->dbar1;
 VAR_1 = VAR_10->dbar2;
 VAR_4 |= VAR_5;

 if (FUNC_1()) {
  VAR_2 |= VAR_9;
  VAR_3 |= VAR_9;
 }

 FUNC_0("DBAR1 = 0x%08x\n", VAR_0);
 FUNC_0("DBAR2 = 0x%08x\n", VAR_1);
 FUNC_0("LCCR0 = 0x%08x\n", VAR_4);
 FUNC_0("LCCR1 = 0x%08x\n", VAR_6);
 FUNC_0("LCCR2 = 0x%08x\n", VAR_7);
 FUNC_0("LCCR3 = 0x%08x\n", VAR_8);
}
