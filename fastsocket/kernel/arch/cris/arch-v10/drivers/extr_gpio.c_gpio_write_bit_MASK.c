
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_private {int* port; int clk_mask; int * shadow; int data_mask; } ;



__attribute__((used)) static void FUNC_0(struct gpio_private *VAR_0,
 unsigned char VAR_1, int VAR_2)
{
 *VAR_0->port = *VAR_0->shadow &= ~(VAR_0->clk_mask);
 if (VAR_1 & 1 << VAR_2)
  *VAR_0->port = *VAR_0->shadow |= VAR_0->data_mask;
 else
  *VAR_0->port = *VAR_0->shadow &= ~(VAR_0->data_mask);


 *VAR_0->port = *VAR_0->shadow |= VAR_0->clk_mask;
}
