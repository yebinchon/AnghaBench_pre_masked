
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;
struct attribute_group {int dummy; } ;


 int FUNC_0 (int *,struct attribute_group const*) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0,
     const struct attribute_group **VAR_1)
{
 int VAR_2;

 if (VAR_1)
  for (VAR_2 = 0; VAR_1[VAR_2]; VAR_2++)
   FUNC_0(&VAR_0->kobj, VAR_1[VAR_2]);
}
