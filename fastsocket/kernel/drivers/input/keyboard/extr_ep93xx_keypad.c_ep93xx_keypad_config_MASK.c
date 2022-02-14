
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ep93xx_keypad_platform_data {int flags; unsigned int debounce; unsigned int prescale; } ;
struct ep93xx_keypad {int clk; struct ep93xx_keypad_platform_data* pdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_2(struct ep93xx_keypad *VAR_14)
{
 struct ep93xx_keypad_platform_data *VAR_15 = VAR_14->pdata;
 unsigned int VAR_16 = 0;

 FUNC_0(VAR_14->clk, VAR_15->flags & VAR_3);

 if (VAR_15->flags & VAR_2)
  VAR_16 |= VAR_10;
 if (VAR_15->flags & VAR_1)
  VAR_16 |= VAR_9;
 if (VAR_15->flags & VAR_0)
  VAR_16 |= VAR_6;
 if (VAR_15->flags & VAR_4)
  VAR_16 |= VAR_13;

 VAR_16 |= ((VAR_15->debounce << VAR_8) & VAR_7);

 VAR_16 |= ((VAR_15->prescale << VAR_12) & VAR_11);

 FUNC_1(VAR_16, VAR_5);
}
