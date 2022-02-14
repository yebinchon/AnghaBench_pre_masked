
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int parent; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (int ) ;
 struct clk* VAR_4 ;

__attribute__((used)) static unsigned long FUNC_2(struct clk *VAR_5)
{
 unsigned long VAR_6 = FUNC_0(VAR_0);

 if (VAR_5 == &VAR_4[1]) {
  VAR_6 &= VAR_2;
  VAR_6 >>= VAR_3;
 } else {
  VAR_6 &= VAR_1;
 }

 return FUNC_1(VAR_5->parent) / (VAR_6 + 1);
}
