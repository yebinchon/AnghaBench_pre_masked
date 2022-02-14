
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {scalar_t__ enabled; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(struct clk *VAR_1)
{
 unsigned long VAR_2;

 FUNC_0(VAR_1->enabled == 0);

 FUNC_2(&VAR_0, VAR_2);
 if (--VAR_1->enabled == 0)
  FUNC_1();
 FUNC_3(&VAR_0, VAR_2);
}
