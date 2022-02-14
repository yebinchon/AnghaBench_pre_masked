
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int count; int id; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct clk *VAR_1)
{
 unsigned long VAR_2;
 FUNC_1(&VAR_0, VAR_2);
 VAR_1->count++;
 if (VAR_1->count == 1)
  FUNC_0(VAR_1->id);
 FUNC_2(&VAR_0, VAR_2);
 return 0;
}
