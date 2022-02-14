
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {int dummy; } ;
struct device {int kobj; } ;


 int FUNC_0 (int *,void (*) (void*),struct device*,struct module*) ;

int FUNC_1(struct device *VAR_0,
  void (*VAR_1)(struct device *), struct module *VAR_2)
{
 return FUNC_0(&VAR_0->kobj,
   (void (*)(void *)) VAR_1, VAR_0, VAR_2);
}
