
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct fc_lport {int dummy; } ;




 int VAR_0 ;
 int FUNC_0 (struct fc_lport*,int *) ;
 int FUNC_1 (struct fc_lport*,int *) ;

int FUNC_2(struct notifier_block *VAR_1, unsigned long VAR_2, void *VAR_3)
{
 struct fc_lport *VAR_4 = VAR_3;

 switch (VAR_2) {
 case 129:
  FUNC_0(VAR_4, ((void*)0));
  break;
 case 128:
  FUNC_1(VAR_4, ((void*)0));
  break;
 }
 return VAR_0;
}
