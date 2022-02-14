
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int kobj; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

int FUNC_2(struct device *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_4->kobj, &VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(&VAR_4->kobj, &VAR_0);
 if (VAR_5) {
  FUNC_1(&VAR_4->kobj, &VAR_3);
  return VAR_5;
 }

 VAR_5 = FUNC_0(&VAR_4->kobj, &VAR_2);
 if (VAR_5) {
  FUNC_1(&VAR_4->kobj, &VAR_3);
  FUNC_1(&VAR_4->kobj, &VAR_0);
  return VAR_5;
 }

 VAR_5 = FUNC_0(&VAR_4->kobj, &VAR_1);
 if (VAR_5) {
  FUNC_1(&VAR_4->kobj, &VAR_3);
  FUNC_1(&VAR_4->kobj, &VAR_0);
  FUNC_1(&VAR_4->kobj, &VAR_2);
  return VAR_5;
 }
 return 0;
}
