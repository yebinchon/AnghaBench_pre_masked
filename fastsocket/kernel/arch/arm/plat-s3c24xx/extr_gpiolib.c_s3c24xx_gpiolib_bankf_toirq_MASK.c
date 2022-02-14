
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct gpio_chip *VAR_3, unsigned VAR_4)
{
 if (VAR_4 < 4)
  return VAR_1 + VAR_4;

 if (VAR_4 < 8)
  return VAR_2 + VAR_4 - 4;

 return -VAR_0;
}
