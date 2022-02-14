
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;
struct class_compat {int * kobj; } ;


 char* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,char*) ;

void FUNC_2(struct class_compat *VAR_0, struct device *VAR_1,
         struct device *VAR_2)
{
 if (VAR_2)
  FUNC_1(&VAR_1->kobj, "device");
 FUNC_1(VAR_0->kobj, FUNC_0(VAR_1));
}
