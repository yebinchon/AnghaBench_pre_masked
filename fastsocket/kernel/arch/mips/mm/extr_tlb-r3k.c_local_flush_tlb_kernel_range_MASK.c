
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long tlbsize; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (char*,unsigned long,unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ) ;

void FUNC_10(unsigned long VAR_5, unsigned long VAR_6)
{
 unsigned long VAR_7, VAR_8;




 FUNC_2(VAR_8);
 VAR_7 = (VAR_6 - VAR_5 + (VAR_3 - 1)) >> VAR_2;
 if (VAR_7 <= VAR_4.tlbsize) {
  int VAR_9 = FUNC_4();

  VAR_5 &= VAR_1;
  VAR_6 += VAR_3 - 1;
  VAR_6 &= VAR_1;

  while (VAR_5 < VAR_6) {
   int VAR_10;

   FUNC_8(VAR_5);
   VAR_5 += VAR_3;
   FUNC_6();
   VAR_10 = FUNC_5();
   FUNC_9(0);
   FUNC_8(VAR_0);
   if (VAR_10 < 0)
    continue;
   FUNC_7();
  }
  FUNC_8(VAR_9);
 } else {
  FUNC_0();
 }
 FUNC_1(VAR_8);
}
