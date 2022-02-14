
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long,int) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 scalar_t__ VAR_3 ;

void FUNC_6(unsigned long VAR_4, unsigned long VAR_5,
         unsigned long VAR_6)
{
 unsigned long VAR_7;

 VAR_7 = ((VAR_6 - (VAR_5 & VAR_0)) + (VAR_2 - 1)) >> VAR_1;
 if (VAR_7 >= 512)
  FUNC_0();
 else {
  unsigned long VAR_8;

  FUNC_1(VAR_4, 1);
  FUNC_5(VAR_8);
  if (VAR_3) {
   while (VAR_7--) {
    FUNC_2(VAR_5);
    FUNC_3(VAR_5);
    VAR_5 += VAR_2;
   }
  } else {
   while (VAR_7--) {
    FUNC_2(VAR_5);
    VAR_5 += VAR_2;
   }
  }
  FUNC_4(VAR_8);
 }
}
