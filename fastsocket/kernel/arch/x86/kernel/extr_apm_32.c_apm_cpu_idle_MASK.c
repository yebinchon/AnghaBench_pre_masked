
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ forbid_idle; } ;
struct TYPE_3__ {unsigned int stime; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_2__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_2 () ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(void)
{
 static int VAR_7;
 static unsigned int VAR_8;
 static unsigned int VAR_9;

 int VAR_10 = 0;
 unsigned int VAR_11 = VAR_6 - VAR_8;
 unsigned int VAR_12;

recalc:
 if (VAR_11 > VAR_0) {
  VAR_7 = 0;
  VAR_8 = VAR_6;
  VAR_9 = VAR_3->stime;
 } else if (VAR_11 > VAR_4) {
  unsigned int VAR_13;

  VAR_13 = VAR_3->stime - VAR_9;
  VAR_13 *= 100;
  VAR_13 /= VAR_11;
  VAR_7 = (VAR_13 > VAR_5);
  if (VAR_2.forbid_idle)
   VAR_7 = 0;
  VAR_8 = VAR_6;
  VAR_9 = VAR_3->stime;
 }

 VAR_12 = VAR_1;

 while (!FUNC_5()) {
  if (VAR_7) {
   unsigned int VAR_14;

   VAR_14 = VAR_6;
   switch (FUNC_1()) {
   case 0:
    VAR_10 = 1;
    if (VAR_14 != VAR_6) {
     if (VAR_12) {
      VAR_12 = VAR_1;
      continue;
     }
    } else if (VAR_12) {
     VAR_12--;
     continue;
    }
    break;
   case 1:
    VAR_10 = 1;
    break;
   default:
    break;
   }
  }
  if (&FUNC_6)
   FUNC_6();
  else
   FUNC_2();
  FUNC_3();
  VAR_11 = VAR_6 - VAR_8;
  if (VAR_11 > VAR_4)
   goto recalc;
 }

 if (VAR_10)
  FUNC_0();

 FUNC_4();
}
