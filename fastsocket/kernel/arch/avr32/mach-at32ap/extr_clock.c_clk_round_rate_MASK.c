
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {unsigned long (* set_rate ) (struct clk*,unsigned long,int ) ;} ;


 long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 unsigned long FUNC_2 (struct clk*,unsigned long,int ) ;

long FUNC_3(struct clk *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4, VAR_5;

 if (!VAR_2->set_rate)
  return -VAR_0;

 FUNC_0(&VAR_1, VAR_4);
 VAR_5 = VAR_2->set_rate(VAR_2, VAR_3, 0);
 FUNC_1(&VAR_1, VAR_4);

 return VAR_5;
}
