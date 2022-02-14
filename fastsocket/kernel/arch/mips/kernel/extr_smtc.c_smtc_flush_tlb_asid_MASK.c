
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tlbsize; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 unsigned long FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;

void FUNC_11(unsigned long VAR_5)
{
 int VAR_6;
 unsigned long VAR_7;

 VAR_6 = FUNC_3();


 while (VAR_6 < VAR_4.tlbsize) {
  FUNC_10(VAR_6);
  FUNC_0();
  FUNC_4();
  FUNC_0();
  VAR_7 = FUNC_2();
  if ((VAR_7 & VAR_0) == VAR_5) {




      FUNC_7(VAR_1 + (VAR_6 << (VAR_2 + 1)));
      FUNC_8(0);
      FUNC_9(0);
      FUNC_1();
      FUNC_5();
  }
  VAR_6++;
 }
 FUNC_10(VAR_3);
 FUNC_6();
}
