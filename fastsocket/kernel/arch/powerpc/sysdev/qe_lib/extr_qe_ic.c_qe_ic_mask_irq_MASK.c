
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct qe_ic {int regs; } ;
struct TYPE_2__ {int mask; int mask_reg; } ;


 int FUNC_0 () ;
 struct qe_ic* FUNC_1 (unsigned int) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 unsigned int FUNC_6 (unsigned int) ;

__attribute__((used)) static void FUNC_7(unsigned int VAR_2)
{
 struct qe_ic *VAR_3 = FUNC_1(VAR_2);
 unsigned int VAR_4 = FUNC_6(VAR_2);
 unsigned long VAR_5;
 u32 VAR_6;

 FUNC_4(&VAR_1, VAR_5);

 VAR_6 = FUNC_2(VAR_3->regs, VAR_0[VAR_4].mask_reg);
 FUNC_3(VAR_3->regs, VAR_0[VAR_4].mask_reg,
      VAR_6 & ~VAR_0[VAR_4].mask);
 FUNC_0();

 FUNC_5(&VAR_1, VAR_5);
}
