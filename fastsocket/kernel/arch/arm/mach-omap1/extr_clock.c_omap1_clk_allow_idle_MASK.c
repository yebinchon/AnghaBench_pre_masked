
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int flags; } ;
struct arm_idlect1_clk {scalar_t__ no_idle_count; int idlect_shift; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct clk *VAR_2)
{
 struct arm_idlect1_clk * VAR_3 = (struct arm_idlect1_clk *)VAR_2;

 if (!(VAR_2->flags & VAR_0))
  return;

 if (VAR_3->no_idle_count > 0 && !(--VAR_3->no_idle_count))
  VAR_1 |= 1 << VAR_3->idlect_shift;
}
