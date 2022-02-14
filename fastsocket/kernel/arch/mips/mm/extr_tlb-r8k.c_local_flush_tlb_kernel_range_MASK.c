
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 long FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (unsigned long) ;

void FUNC_9(unsigned long VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7, VAR_8;

 VAR_7 = (VAR_6 - VAR_5 + (VAR_3 - 1)) >> VAR_2;
 VAR_7 = (VAR_7 + 1) >> 1;

 if (VAR_7 > VAR_4 / 2) {
  FUNC_0();
  return;
 }

 FUNC_2(VAR_8);

 FUNC_7(0);

 VAR_5 &= VAR_1;
 VAR_6 += (VAR_3 - 1);
 VAR_6 &= VAR_1;
 while (VAR_5 < VAR_6) {
  signed long VAR_9;

  FUNC_8(VAR_5);
  FUNC_6(VAR_5);
  VAR_5 += VAR_3;
  FUNC_4();
  VAR_9 = FUNC_3();
  if (VAR_9 < 0)
   continue;

  FUNC_6(VAR_0 + (VAR_9 << (VAR_2 + 1)));
  FUNC_5();
 }

 FUNC_1(VAR_8);
}
