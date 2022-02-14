
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int (* set_rate ) (struct clk*,unsigned long) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct clk*,unsigned long) ;

int FUNC_4(struct clk *VAR_2, unsigned long VAR_3)
{
 int VAR_4 = -VAR_0;

 if (VAR_2 == ((void*)0) || FUNC_0(VAR_2) || VAR_2->set_rate == ((void*)0) || VAR_3 == 0)
  return VAR_4;

 FUNC_1(&VAR_1);
 VAR_4 = VAR_2->set_rate(VAR_2, VAR_3);
 FUNC_2(&VAR_1);

 return VAR_4;
}
