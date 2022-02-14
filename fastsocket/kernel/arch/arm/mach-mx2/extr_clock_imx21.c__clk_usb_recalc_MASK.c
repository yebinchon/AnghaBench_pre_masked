
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int parent; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 () ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk *VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4;

 VAR_4 = FUNC_1(VAR_2->parent);

 VAR_3 = (FUNC_0() & VAR_0) >> VAR_1;

 return VAR_4 / (VAR_3 + 1U);
}
