
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pt_regs {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static u32 FUNC_6(u32 VAR_2, u32 VAR_3, struct pt_regs *VAR_4)
{
 u32 VAR_5 = VAR_0;

 FUNC_2("VFP: emulate: INST=0x%08x SCR=0x%08x\n", VAR_2, VAR_3);

 if (FUNC_1(VAR_2)) {
  if (!FUNC_0(VAR_2)) {



   if (FUNC_4(VAR_2)) {
    VAR_5 = FUNC_5(VAR_2, VAR_3);
   } else {
    VAR_5 = FUNC_3(VAR_2, VAR_3);
   }
  } else {





  }
 } else {





 }
 return VAR_5 & ~VAR_1;
}
