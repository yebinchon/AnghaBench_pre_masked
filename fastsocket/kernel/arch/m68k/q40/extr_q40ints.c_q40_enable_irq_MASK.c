
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*) ;

void FUNC_2(unsigned int VAR_2)
{
 if (VAR_2 >= 5 && VAR_2 <= 15) {
  VAR_1--;
  if (VAR_1 > 0)
   FUNC_1("q40_enable_irq : nested disable/enable\n");
  if (VAR_1 == 0)
   FUNC_0(1, VAR_0);
 }
}
