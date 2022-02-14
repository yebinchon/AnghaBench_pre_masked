
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ wait_result_t ;
typedef TYPE_1__* thread_t ;
typedef int spl_t ;
typedef int processor_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_8__ {int state; int wake_active; int chosen_processor; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;

void
FUNC_11(
 thread_t VAR_5,
 boolean_t VAR_6)
{
 wait_result_t VAR_7;
 boolean_t VAR_8;
 processor_t VAR_9;
 spl_t VAR_10 = FUNC_3();

 FUNC_9(VAR_5);
 FUNC_7(VAR_5);
 while ((VAR_8 = FUNC_6(VAR_5)) ||
   (VAR_6 && (VAR_5->state & VAR_3))) {

  if (VAR_8) {
   FUNC_0(VAR_5->state & VAR_3);
   VAR_9 = VAR_5->chosen_processor;
   FUNC_2(VAR_9);
  }

  VAR_5->wake_active = VAR_4;
  FUNC_8(VAR_5);

  VAR_7 = FUNC_1(&VAR_5->wake_active, VAR_1);
  FUNC_10(VAR_5);
  FUNC_4(VAR_10);

  if (VAR_7 == VAR_2)
   FUNC_5(VAR_0);

  VAR_10 = FUNC_3();
  FUNC_9(VAR_5);
  FUNC_7(VAR_5);
 }

 FUNC_8(VAR_5);
 FUNC_10(VAR_5);
 FUNC_4(VAR_10);
}
