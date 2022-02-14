
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tlbsize; } ;


 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 TYPE_1__ VAR_4 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

void FUNC_14(unsigned long VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7, VAR_8;

 FUNC_0(VAR_8);
 VAR_7 = (VAR_6 - VAR_5 + (VAR_3 - 1)) >> VAR_2;
 VAR_7 = (VAR_7 + 1) >> 1;
 if (VAR_7 <= VAR_4.tlbsize / 2) {
  int VAR_9 = FUNC_5();

  VAR_5 &= (VAR_1 << 1);
  VAR_6 += ((VAR_3 << 1) - 1);
  VAR_6 &= (VAR_1 << 1);

  while (VAR_5 < VAR_6) {
   int VAR_10;

   FUNC_11(VAR_5);
   VAR_5 += (VAR_3 << 1);
   FUNC_4();
   FUNC_7();
   FUNC_8();
   VAR_10 = FUNC_6();
   FUNC_12(0);
   FUNC_13(0);
   if (VAR_10 < 0)
    continue;

   FUNC_11(FUNC_2(VAR_10));
   FUNC_4();
   FUNC_9();
  }
  FUNC_10();
  FUNC_11(VAR_9);
 } else {
  FUNC_3();
 }
 VAR_0;
 FUNC_1(VAR_8);
}
