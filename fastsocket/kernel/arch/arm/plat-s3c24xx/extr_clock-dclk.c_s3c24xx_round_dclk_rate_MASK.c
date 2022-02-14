
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int parent; } ;


 unsigned long FUNC_0 (int ) ;
 unsigned long FUNC_1 (struct clk*,unsigned long) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk *VAR_0,
 unsigned long VAR_1)
{
 unsigned long VAR_2 = FUNC_1(VAR_0, VAR_1);

 if (VAR_2 == 0)
  return 0;

 return FUNC_0(VAR_0->parent) / VAR_2;
}
