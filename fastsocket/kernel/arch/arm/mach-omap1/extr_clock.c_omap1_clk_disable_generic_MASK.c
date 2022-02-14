
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int flags; int enable_bit; int * enable_reg; } ;
typedef int __u32 ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static void FUNC_4(struct clk *VAR_1)
{
 __u16 VAR_2;
 __u32 VAR_3;

 if (VAR_1->enable_reg == ((void*)0))
  return;

 if (VAR_1->flags & VAR_0) {
  VAR_3 = FUNC_0(VAR_1->enable_reg);
  VAR_3 &= ~(1 << VAR_1->enable_bit);
  FUNC_2(VAR_3, VAR_1->enable_reg);
 } else {
  VAR_2 = FUNC_1(VAR_1->enable_reg);
  VAR_2 &= ~(1 << VAR_1->enable_bit);
  FUNC_3(VAR_2, VAR_1->enable_reg);
 }
}
