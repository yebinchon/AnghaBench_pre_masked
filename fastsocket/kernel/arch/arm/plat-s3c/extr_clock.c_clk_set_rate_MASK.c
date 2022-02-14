
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int (* set_rate ) (struct clk*,unsigned long) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct clk*,unsigned long) ;

int FUNC_5(struct clk *VAR_2, unsigned long VAR_3)
{
 int VAR_4;

 if (FUNC_0(VAR_2))
  return -VAR_0;





 FUNC_1(VAR_2->set_rate == ((void*)0));

 if (VAR_2->set_rate == ((void*)0))
  return -VAR_0;

 FUNC_2(&VAR_1);
 VAR_4 = (VAR_2->set_rate)(VAR_2, VAR_3);
 FUNC_3(&VAR_1);

 return VAR_4;
}
