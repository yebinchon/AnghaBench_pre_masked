
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk {unsigned long (* get_rate ) (struct clk*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 unsigned long FUNC_2 (struct clk*) ;

unsigned long FUNC_3(struct clk *VAR_1)
{
 unsigned long VAR_2;
 unsigned long VAR_3;

 FUNC_0(&VAR_0, VAR_2);
 VAR_3 = VAR_1->get_rate(VAR_1);
 FUNC_1(&VAR_0, VAR_2);

 return VAR_3;
}
