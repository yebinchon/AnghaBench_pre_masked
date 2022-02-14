
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {int (* set_rate ) (struct clk*,unsigned long) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct clk*,unsigned long) ;

int FUNC_1(struct clk *VAR_1, unsigned long VAR_2)
{
 if (VAR_1->set_rate)
  return VAR_1->set_rate(VAR_1, VAR_2);

 return -VAR_0;
}
