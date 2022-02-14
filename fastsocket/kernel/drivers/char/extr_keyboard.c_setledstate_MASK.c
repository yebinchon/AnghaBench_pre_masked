
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbd_struct {int ledmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 () ;

void FUNC_1(struct kbd_struct *VAR_3, unsigned int VAR_4)
{
 if (!(VAR_4 & ~7)) {
  VAR_2 = VAR_4;
  VAR_3->ledmode = VAR_1;
 } else
  VAR_3->ledmode = VAR_0;
 FUNC_0();
}
