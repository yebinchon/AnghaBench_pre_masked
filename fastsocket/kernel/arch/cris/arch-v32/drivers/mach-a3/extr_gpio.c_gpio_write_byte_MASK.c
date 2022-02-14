
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_private {int data_mask; int clk_mask; scalar_t__ write_msb; } ;


 int FUNC_0 (unsigned long*,unsigned char,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct gpio_private *VAR_0, unsigned long *VAR_1,
  unsigned char VAR_2)
{
 int VAR_3;

 if (VAR_0->write_msb)
  for (VAR_3 = 7; VAR_3 >= 0; VAR_3--)
   FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0->clk_mask,
    VAR_0->data_mask);
 else
  for (VAR_3 = 0; VAR_3 <= 7; VAR_3++)
   FUNC_0(VAR_1, VAR_2, VAR_3, VAR_0->clk_mask,
    VAR_0->data_mask);
}
