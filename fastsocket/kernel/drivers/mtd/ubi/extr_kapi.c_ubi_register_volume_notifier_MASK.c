
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;


 int FUNC_0 (int *,struct notifier_block*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct notifier_block*) ;
 int VAR_1 ;

int FUNC_4(struct notifier_block *VAR_2,
     int VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_1, VAR_2);
 if (VAR_4 != 0)
  return VAR_4;
 if (VAR_3)
  return 0;







 FUNC_1(&VAR_0);
 FUNC_3(VAR_2);
 FUNC_2(&VAR_0);

 return VAR_4;
}
