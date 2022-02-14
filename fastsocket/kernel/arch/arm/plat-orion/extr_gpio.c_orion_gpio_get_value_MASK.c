
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int dummy; } ;


 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct gpio_chip *VAR_0, unsigned VAR_1)
{
 int VAR_2;

 if (FUNC_4(FUNC_2(VAR_1)) & (1 << (VAR_1 & 31)))
  VAR_2 = FUNC_4(FUNC_0(VAR_1)) ^ FUNC_4(FUNC_1(VAR_1));
 else
  VAR_2 = FUNC_4(FUNC_3(VAR_1));

 return (VAR_2 >> (VAR_1 & 31)) & 1;
}
