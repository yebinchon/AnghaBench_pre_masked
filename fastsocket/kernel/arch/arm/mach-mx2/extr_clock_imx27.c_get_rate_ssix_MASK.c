
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int parent; } ;


 scalar_t__ VAR_0 ;
 unsigned long FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static unsigned long FUNC_2(struct clk *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = FUNC_0(VAR_1->parent);

 if (FUNC_1() >= VAR_0)
  VAR_2 += 4;
 else
  VAR_2 = (VAR_2 < 2) ? 124UL : VAR_2;

 return 2UL * VAR_3 / VAR_2;
}
