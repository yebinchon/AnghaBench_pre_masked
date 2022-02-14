
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w90p910_keypad {scalar_t__ mmio_base; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct w90p910_keypad*,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 struct w90p910_keypad *VAR_6 = VAR_5;
 unsigned int VAR_7, VAR_8;

 VAR_7 = FUNC_0(VAR_6->mmio_base + VAR_3);

 VAR_8 = VAR_0 | VAR_2;

 if (VAR_7 & VAR_8)
  FUNC_1(VAR_6, VAR_7);

 return VAR_1;
}
