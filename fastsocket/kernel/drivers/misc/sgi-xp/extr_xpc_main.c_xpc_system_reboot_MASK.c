
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
typedef enum xp_retval { ____Placeholder_xp_retval } xp_retval ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(struct notifier_block *VAR_5, unsigned long VAR_6, void *VAR_7)
{
 enum xp_retval VAR_8;

 switch (VAR_6) {
 case 128:
  VAR_8 = VAR_4;
  break;
 case 130:
  VAR_8 = VAR_2;
  break;
 case 129:
  VAR_8 = VAR_3;
  break;
 default:
  VAR_8 = VAR_1;
 }

 FUNC_0(VAR_8);
 return VAR_0;
}
