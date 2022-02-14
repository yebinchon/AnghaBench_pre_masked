
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_private {int minor; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned long,int) ;
 int FUNC_2 (unsigned long,int) ;
 int FUNC_3 (unsigned long,int) ;

__attribute__((used)) static int FUNC_4(struct gpio_private *VAR_2, unsigned int VAR_3,
 unsigned long VAR_4)
{
 int VAR_5 = VAR_2->minor - VAR_1;

 switch (FUNC_0(VAR_3)) {
 case 129:
  return FUNC_2(VAR_4, VAR_5);
 case 128:
  return FUNC_3(VAR_4, VAR_5);
 case 130:
  return FUNC_1(VAR_4, VAR_5);
 default:
  return -VAR_0;
 }
 return 0;
}
