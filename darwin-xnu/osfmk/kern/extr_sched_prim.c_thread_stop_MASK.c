
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ wait_result_t ;
typedef TYPE_1__* thread_t ;
typedef int spl_t ;
typedef int processor_t ;
typedef void* boolean_t ;
struct TYPE_9__ {int state; void* wake_active; int chosen_processor; } ;


 void* VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (void**,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 void* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;

boolean_t
FUNC_12(
 thread_t VAR_8,
 boolean_t VAR_9)
{
 wait_result_t VAR_10;
 spl_t VAR_11 = FUNC_3();
 boolean_t VAR_12;

 FUNC_10(VAR_8);
 FUNC_7(VAR_8);

 while (VAR_8->state & VAR_6) {
  VAR_8->wake_active = VAR_7;
  FUNC_8(VAR_8);

  VAR_10 = FUNC_1(&VAR_8->wake_active, VAR_1);
  FUNC_11(VAR_8);
  FUNC_4(VAR_11);

  if (VAR_10 == VAR_4)
   VAR_10 = FUNC_5(VAR_3);

  if (VAR_10 != VAR_2)
   return (VAR_0);

  VAR_11 = FUNC_3();
  FUNC_10(VAR_8);
  FUNC_7(VAR_8);
 }

 VAR_8->state |= VAR_6;

 while ((VAR_12 = FUNC_6(VAR_8)) ||
     (VAR_9 && (VAR_8->state & VAR_5))) {
  processor_t VAR_13;

  if (VAR_12) {
   FUNC_0(VAR_8->state & VAR_5);
   VAR_13 = VAR_8->chosen_processor;
   FUNC_2(VAR_13);
  }

  VAR_8->wake_active = VAR_7;
  FUNC_8(VAR_8);

  VAR_10 = FUNC_1(&VAR_8->wake_active, VAR_1);
  FUNC_11(VAR_8);
  FUNC_4(VAR_11);

  if (VAR_10 == VAR_4)
   VAR_10 = FUNC_5(VAR_3);

  if (VAR_10 != VAR_2) {
   FUNC_9(VAR_8);
   return (VAR_0);
  }

  VAR_11 = FUNC_3();
  FUNC_10(VAR_8);
  FUNC_7(VAR_8);
 }

 FUNC_8(VAR_8);
 FUNC_11(VAR_8);
 FUNC_4(VAR_11);
 return (VAR_7);
}
