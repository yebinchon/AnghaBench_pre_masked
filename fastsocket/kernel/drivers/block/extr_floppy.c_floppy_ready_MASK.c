
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; int select_delay; } ;
struct TYPE_3__ {int flags; int length; int kernel_data; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long FUNC_1 () ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 TYPE_1__* VAR_9 ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (void (*) ()) ;
 int FUNC_11 () ;

__attribute__((used)) static void FUNC_12(void)
{
 VAR_0;
 if (FUNC_10(FUNC_12))
  return;
 if (FUNC_4())
  return;






 if (!(VAR_9->flags & VAR_5) &&
     FUNC_2(VAR_8) && !VAR_1->select_delay)
  FUNC_11();
 if (VAR_9->flags & (VAR_4 | VAR_3)) {
  FUNC_6();
  FUNC_5();
  FUNC_8();
 } else {
  if ((VAR_9->flags & VAR_6) ||
      (VAR_9->flags & VAR_7))
   FUNC_5();
  FUNC_9();
 }
}
