
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tlbsize; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_3 ;
 unsigned long FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;

void FUNC_9(void)
{
 unsigned long VAR_4;
 unsigned long VAR_5;
 int VAR_6;





 FUNC_1(VAR_4);
 VAR_5 = FUNC_3() & VAR_0;
 FUNC_7(0);
 VAR_6 = VAR_3 ? FUNC_4() : 8;
 for (; VAR_6 < VAR_2.tlbsize; VAR_6++) {
  FUNC_8(VAR_6 << 8);
  FUNC_6((VAR_6 | 0x80000) << 12);
  VAR_1;
  FUNC_5();
 }
 FUNC_6(VAR_5);
 FUNC_0(VAR_4);
}
