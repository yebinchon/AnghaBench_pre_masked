
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef scalar_t__ irq_level_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;

void FUNC_3(unsigned int VAR_7, irq_level_t VAR_8)
{
 u16 VAR_9;

 if (VAR_7 < VAR_5) {
  VAR_9 = 1 << VAR_7;
  if (VAR_8 == VAR_6)
   FUNC_1(VAR_1, VAR_9);
  else
   FUNC_0(VAR_1, VAR_9);
  FUNC_2(VAR_3, VAR_9);
 } else if (VAR_7 < VAR_4) {
  VAR_9 = 1 << (VAR_7 - VAR_5);
  if (VAR_8 == VAR_6)
   FUNC_1(VAR_0, VAR_9);
  else
   FUNC_0(VAR_0, VAR_9);
  FUNC_2(VAR_2, VAR_9);
 }
}
