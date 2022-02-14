
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powerdomain {struct clockdomain** pwrdm_clkdms; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (struct powerdomain*,struct clockdomain*) ;

int FUNC_3(struct powerdomain *VAR_3,
    int (*VAR_4)(struct powerdomain *VAR_5,
       struct clockdomain *VAR_6))
{
 unsigned long VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 if (!VAR_4)
  return -VAR_0;

 FUNC_0(&VAR_2, VAR_7);

 for (VAR_9 = 0; VAR_9 < VAR_1 && !VAR_8; VAR_9++)
  VAR_8 = (*VAR_4)(VAR_3, VAR_3->pwrdm_clkdms[VAR_9]);

 FUNC_1(&VAR_2, VAR_7);

 return VAR_8;
}
