
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;




 int VAR_0 ;
 int FUNC_0 (int *,struct notifier_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,struct notifier_block*) ;

int FUNC_2(struct notifier_block *VAR_3, unsigned int VAR_4)
{
 int VAR_5;

 switch (VAR_4) {
 case 128:
  VAR_5 = FUNC_1(
    &VAR_2, VAR_3);
  break;
 case 129:
  VAR_5 = FUNC_0(
    &VAR_1, VAR_3);
  break;
 default:
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
