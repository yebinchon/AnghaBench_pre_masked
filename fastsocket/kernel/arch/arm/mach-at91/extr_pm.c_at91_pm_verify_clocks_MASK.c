
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int VAR_8 ;
 void* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static int FUNC_10(void)
{
 unsigned long VAR_9;
 int VAR_10;

 VAR_9 = FUNC_1(VAR_8);


 if (FUNC_3()) {
  if ((VAR_9 & (VAR_2 | VAR_1)) != 0) {
   FUNC_9("AT91: PM - Suspend-to-RAM with USB still active\n");
   return 0;
  }
 } else if (FUNC_4() || FUNC_5() || FUNC_6()
   || FUNC_8() || FUNC_7()) {
  if ((VAR_9 & (VAR_4 | VAR_3)) != 0) {
   FUNC_9("AT91: PM - Suspend-to-RAM with USB still active\n");
   return 0;
  }
 } else if (FUNC_2()) {
  if ((VAR_9 & VAR_0) != 0) {
   FUNC_9("AT91: PM - Suspend-to-RAM with USB still active\n");
   return 0;
  }
 }
 return 1;
}
