
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_4, unsigned VAR_5)
{
 int VAR_6 = 0;

 if (VAR_5 < VAR_2)
  VAR_6 = FUNC_0(VAR_5);
 else if (VAR_5 == VAR_2)
  VAR_6 = VAR_3 & VAR_0;
 else
  VAR_6 = VAR_3 & VAR_1;
 return (VAR_6 < 0) ? 0 : VAR_6;
}
