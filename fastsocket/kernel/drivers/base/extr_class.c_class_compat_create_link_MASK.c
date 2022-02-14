
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;
struct class_compat {int * kobj; } ;


 char* FUNC_0 (struct device*) ;
 int FUNC_1 (int *,int *,char*) ;
 int FUNC_2 (int *,char*) ;

int FUNC_3(struct class_compat *VAR_0, struct device *VAR_1,
        struct device *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0->kobj, &VAR_1->kobj, FUNC_0(VAR_1));
 if (VAR_3)
  return VAR_3;






 if (VAR_2) {
  VAR_3 = FUNC_1(&VAR_1->kobj, &VAR_2->kobj,
       "device");
  if (VAR_3)
   FUNC_2(VAR_0->kobj, FUNC_0(VAR_1));
 }

 return VAR_3;
}
