
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {unsigned long rate_hz; struct clk* parent; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

unsigned long FUNC_2(struct clk *VAR_1)
{
 unsigned long VAR_2;
 unsigned long VAR_3;

 FUNC_0(&VAR_0, VAR_2);
 for (;;) {
  VAR_3 = VAR_1->rate_hz;
  if (VAR_3 || !VAR_1->parent)
   break;
  VAR_1 = VAR_1->parent;
 }
 FUNC_1(&VAR_0, VAR_2);
 return VAR_3;
}
