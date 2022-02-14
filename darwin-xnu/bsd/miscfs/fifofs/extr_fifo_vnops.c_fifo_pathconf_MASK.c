
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnop_pathconf_args {int a_name; int* a_retval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




int
FUNC_0(struct vnop_pathconf_args *VAR_3)
{
 switch (VAR_3->a_name) {
 case 129:
  *VAR_3->a_retval = VAR_1;
  return (0);
 case 128:
  *VAR_3->a_retval = VAR_2;
  return (0);
 case 130:
  *VAR_3->a_retval = 200112;
  return (0);
 default:
  return (VAR_0);
 }

}
