
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_private {scalar_t__ write_msb; } ;


 int FUNC_0 (struct gpio_private*,unsigned char,int) ;

__attribute__((used)) static void FUNC_1(struct gpio_private *VAR_0, unsigned char VAR_1)
{
 int VAR_2;

 if (VAR_0->write_msb)
  for (VAR_2 = 7; VAR_2 >= 0; VAR_2--)
   FUNC_0(VAR_0, VAR_1, VAR_2);
 else
  for (VAR_2 = 0; VAR_2 <= 7; VAR_2++)
   FUNC_0(VAR_0, VAR_1, VAR_2);
}
