
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int flags; int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;

int FUNC_3(struct clk *VAR_1, unsigned long VAR_2)
{
 int VAR_3;
 if (VAR_1->flags & VAR_0) {
  VAR_3 = FUNC_0(VAR_1->id, VAR_2);
  if (VAR_3)
   return VAR_3;
  return FUNC_1(VAR_1->id, VAR_2);
 }
 return FUNC_2(VAR_1->id, VAR_2);
}
