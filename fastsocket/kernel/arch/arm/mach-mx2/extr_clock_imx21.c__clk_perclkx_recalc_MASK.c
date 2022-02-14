
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int id; int parent; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 (int ) ;

__attribute__((used)) static unsigned long FUNC_2(struct clk *VAR_1)
{
 unsigned long VAR_2;
 unsigned long VAR_3;

 VAR_3 = FUNC_1(VAR_1->parent);

 if (VAR_1->id < 0 || VAR_1->id > 3)
  return 0;

 VAR_2 = (FUNC_0() >> (VAR_1->id << 3)) & VAR_0;

 return VAR_3 / (VAR_2 + 1);
}
