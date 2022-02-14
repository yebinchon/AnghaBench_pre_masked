
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_desc {unsigned long config; unsigned long mux_mask; unsigned long mask; scalar_t__ can_wakeup; scalar_t__ keypad_gpio; int valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 struct gpio_desc* VAR_9 ;
 unsigned int FUNC_0 (int ) ;

int FUNC_1(unsigned int VAR_10, unsigned int VAR_11)
{
 struct gpio_desc *VAR_12;
 unsigned long VAR_13, VAR_14;

 if (VAR_10 > FUNC_0(VAR_5))
  return -VAR_1;

 VAR_12 = &VAR_9[VAR_10];
 VAR_13 = VAR_12->config;

 if (!VAR_12->valid)
  return -VAR_1;

 if (VAR_12->keypad_gpio)
  return -VAR_1;

 VAR_14 = (VAR_8 & VAR_12->mux_mask) & (~VAR_12->mask);
 if (VAR_11 && VAR_14)
  return -VAR_0;

 if (VAR_12->can_wakeup && (VAR_13 & VAR_2)) {
  if (VAR_11) {
   VAR_8 = (VAR_8 & ~VAR_12->mux_mask) | VAR_12->mask;

   if (VAR_13 & VAR_4)
    VAR_7 |= VAR_12->mask;
   else
    VAR_7 &= ~VAR_12->mask;

   if (VAR_13 & VAR_3)
    VAR_6 |= VAR_12->mask;
   else
    VAR_6 &= ~VAR_12->mask;
  } else {
   VAR_8 &= ~VAR_12->mask;
   VAR_7 &= ~VAR_12->mask;
   VAR_6 &= ~VAR_12->mask;
  }
 }
 return 0;
}
