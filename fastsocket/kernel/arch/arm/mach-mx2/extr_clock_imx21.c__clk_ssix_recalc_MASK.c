
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int parent; } ;


 unsigned long FUNC_0 (int ) ;

__attribute__((used)) static unsigned long FUNC_1(struct clk *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2;

 VAR_2 = FUNC_0(VAR_0->parent);

 VAR_1 = (VAR_1 < 2) ? 124UL : VAR_1;

 return 2UL * VAR_2 / VAR_1;
}
