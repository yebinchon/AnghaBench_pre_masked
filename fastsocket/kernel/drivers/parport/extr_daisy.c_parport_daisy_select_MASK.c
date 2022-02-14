
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parport {int dummy; } ;
 int VAR_0 ;
 int FUNC_0 (struct parport*,int) ;

int FUNC_1(struct parport *VAR_1, int VAR_2, int VAR_3)
{
 switch (VAR_3)
 {

  case 131:
  case 130:
  case 129:
   return !(FUNC_0(VAR_1, 0x20 + VAR_2) &
     VAR_0);


  case 134:
  case 133:
  case 132:
   return !(FUNC_0(VAR_1, 0xd0 + VAR_2) &
     VAR_0);



  case 137:

  case 128:
  case 136:
  case 135:
  default:
   return !(FUNC_0(VAR_1, 0xe0 + VAR_2) &
     VAR_0);
 }
}
