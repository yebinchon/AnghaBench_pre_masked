
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w90p910_keypad_platform_data {unsigned int prescale; unsigned int debounce; } ;
struct w90p910_keypad {scalar_t__ mmio_base; int clk; struct w90p910_keypad_platform_data* pdata; } ;
struct input_dev {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (int ) ;
 struct w90p910_keypad* FUNC_3 (struct input_dev*) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_6)
{
 struct w90p910_keypad *VAR_7 = FUNC_3(VAR_6);
 const struct w90p910_keypad_platform_data *VAR_8 = VAR_7->pdata;
 unsigned int VAR_9, VAR_10;


 FUNC_2(VAR_7->clk);

 VAR_9 = FUNC_0(VAR_7->mmio_base + VAR_2);
 VAR_9 |= (VAR_3 | VAR_1);
 VAR_9 &= ~(VAR_4 | VAR_5);

 VAR_10 = VAR_8->prescale | (VAR_8->debounce << VAR_0);

 VAR_9 |= VAR_10;

 FUNC_1(VAR_9, VAR_7->mmio_base + VAR_2);

 return 0;
}
