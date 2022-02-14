
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnop_pathconf_args {int a_name; int* a_retval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int VAR_5 ;

int
FUNC_0(struct vnop_pathconf_args *VAR_6)
{

 switch (VAR_6->a_name) {
 case 132:
  *VAR_6->a_retval = VAR_1;
  return (0);
 case 131:
  *VAR_6->a_retval = VAR_2;
  return (0);
 case 130:
  *VAR_6->a_retval = VAR_3;
  return (0);
 case 129:
  *VAR_6->a_retval = VAR_4;
  return (0);
 case 133:
  *VAR_6->a_retval = 200112;
  return (0);
 case 128:
  *VAR_6->a_retval = VAR_5;
  return (0);
 default:
  return (VAR_0);
 }

}
