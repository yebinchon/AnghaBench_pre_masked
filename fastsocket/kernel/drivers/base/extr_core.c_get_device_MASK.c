
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;


 int FUNC_0 (int *) ;
 struct device* FUNC_1 (int ) ;

struct device *FUNC_2(struct device *VAR_0)
{
 return VAR_0 ? FUNC_1(FUNC_0(&VAR_0->kobj)) : ((void*)0);
}
