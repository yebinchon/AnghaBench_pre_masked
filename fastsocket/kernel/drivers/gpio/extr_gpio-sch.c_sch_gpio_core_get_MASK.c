
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct gpio_chip *VAR_2, unsigned VAR_3)
{
 int VAR_4;
 unsigned short VAR_5, VAR_6;

 VAR_5 = VAR_0 + VAR_3 / 8;
 VAR_6 = VAR_3 % 8;

 VAR_4 = !!(FUNC_0(VAR_1 + VAR_5) & (1 << VAR_6));
 return VAR_4;
}
