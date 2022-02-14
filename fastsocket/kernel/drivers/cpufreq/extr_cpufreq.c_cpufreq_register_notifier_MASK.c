
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;




 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,struct notifier_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,struct notifier_block*) ;

int FUNC_3(struct notifier_block *VAR_4, unsigned int VAR_5)
{
 int VAR_6;

 FUNC_0(!VAR_3);

 switch (VAR_5) {
 case 128:
  VAR_6 = FUNC_2(
    &VAR_2, VAR_4);
  break;
 case 129:
  VAR_6 = FUNC_1(
    &VAR_1, VAR_4);
  break;
 default:
  VAR_6 = -VAR_0;
 }

 return VAR_6;
}
