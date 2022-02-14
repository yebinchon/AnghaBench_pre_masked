
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int spl_t ;
struct TYPE_7__ {int state; scalar_t__ wake_active; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

void
FUNC_8(
 thread_t VAR_4)
{
 spl_t VAR_5 = FUNC_1();

 FUNC_6(VAR_4);
 FUNC_3(VAR_4);

 FUNC_0((VAR_4->state & (VAR_1|VAR_3|VAR_2)) != VAR_2);

 if (VAR_4->state & VAR_2) {
  VAR_4->state &= ~VAR_2;

  if (VAR_4->wake_active) {
   VAR_4->wake_active = VAR_0;
   FUNC_4(VAR_4);

   FUNC_5(&VAR_4->wake_active);
   FUNC_7(VAR_4);
   FUNC_2(VAR_5);

   return;
  }
 }

 FUNC_4(VAR_4);
 FUNC_7(VAR_4);
 FUNC_2(VAR_5);
}
