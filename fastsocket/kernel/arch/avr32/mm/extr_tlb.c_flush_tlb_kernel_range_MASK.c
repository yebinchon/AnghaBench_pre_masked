
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 () ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;

void FUNC_5(unsigned long VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 VAR_7 = (VAR_5 - VAR_4 + (VAR_3 - 1)) >> VAR_2;
 if (VAR_7 > (VAR_0 / 4)) {
  FUNC_1();
 } else {
  unsigned long VAR_8;

  FUNC_4(VAR_6);
  VAR_8 = FUNC_2();

  VAR_4 &= VAR_1;
  VAR_5 += (VAR_3 - 1);
  VAR_5 &= VAR_1;

  while (VAR_4 < VAR_5) {
   FUNC_0(VAR_8, VAR_4);
   VAR_4 += VAR_3;
  }
  FUNC_3(VAR_6);
 }
}
