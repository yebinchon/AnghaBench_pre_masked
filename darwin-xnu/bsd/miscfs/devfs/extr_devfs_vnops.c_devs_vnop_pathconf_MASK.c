
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnop_pathconf_args {int a_name; int* a_retval; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
__attribute__((used)) static int
FUNC_0(
 struct vnop_pathconf_args *VAR_3)





{
 switch (VAR_3->a_name) {
 case 131:

  *VAR_3->a_retval = 32767;
  break;
 case 130:
  *VAR_3->a_retval = VAR_0 - 1;
  break;
 case 128:
  *VAR_3->a_retval = VAR_1 - 1;
  break;
 case 132:
  *VAR_3->a_retval = 200112;
  break;
 case 129:
  *VAR_3->a_retval = 0;
  break;
 case 133:
  *VAR_3->a_retval = 1;
  break;
 case 134:
  *VAR_3->a_retval = 1;
  break;
 default:
  return (VAR_2);
 }

 return (0);
}
