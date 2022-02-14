
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cbe_pmd_shadow_regs {scalar_t__ counter_value_in_latch; } ;


 int VAR_0 ;
 struct cbe_pmd_shadow_regs* FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ,int) ;
 int VAR_1 ;

void FUNC_3(u32 VAR_2)
{
 struct cbe_pmd_shadow_regs *VAR_3;
 u32 VAR_4;

 VAR_3 = FUNC_0(VAR_2);
 VAR_3->counter_value_in_latch = 0;

 VAR_4 = FUNC_1(VAR_2, VAR_1) | VAR_0;
 FUNC_2(VAR_2, VAR_1, VAR_4);
}
