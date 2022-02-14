
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int (* set_parent ) (struct clk*,struct clk*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct clk*,struct clk*) ;

int FUNC_3(struct clk *VAR_2, struct clk *VAR_3)
{
 unsigned long VAR_4;
 int VAR_5;

 if (!VAR_2->set_parent)
  return -VAR_0;

 FUNC_0(&VAR_1, VAR_4);
 VAR_5 = VAR_2->set_parent(VAR_2, VAR_3);
 FUNC_1(&VAR_1, VAR_4);

 return VAR_5;
}
