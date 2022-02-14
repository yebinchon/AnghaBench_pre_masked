
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa27x_keypad {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (struct pxa27x_keypad*) ;
 int FUNC_2 (struct pxa27x_keypad*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 struct pxa27x_keypad *VAR_6 = VAR_5;
 unsigned long VAR_7 = FUNC_0(VAR_1);

 if (VAR_7 & VAR_2)
  FUNC_1(VAR_6);

 if (VAR_7 & VAR_3)
  FUNC_2(VAR_6);

 return VAR_0;
}
