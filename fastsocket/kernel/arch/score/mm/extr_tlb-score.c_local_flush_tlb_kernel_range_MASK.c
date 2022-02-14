
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 long FUNC_9 () ;

void FUNC_10(unsigned long VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;

 FUNC_3(VAR_7);
 VAR_8 = (VAR_6 - VAR_5 + (VAR_3 - 1)) >> VAR_2;
 if (VAR_8 <= VAR_4) {
  int VAR_9 = FUNC_5();

  VAR_5 &= VAR_1;
  VAR_6 += VAR_3 - 1;
  VAR_6 &= VAR_1;

  while (VAR_5 < VAR_6) {
   long VAR_10;

   FUNC_6(VAR_5);
   VAR_5 += VAR_3;
   FUNC_7();
   VAR_10 = FUNC_9();
   if (VAR_10 < 0)
    continue;
   FUNC_4(0);
   FUNC_6(VAR_0);
   FUNC_0();
   FUNC_8();
  }
  FUNC_6(VAR_9);
 } else {
  FUNC_1();
 }

 FUNC_2(VAR_7);
}
