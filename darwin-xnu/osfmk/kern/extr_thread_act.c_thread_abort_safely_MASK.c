
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int spl_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_11__ {int sched_flags; int at_safe_point; scalar_t__ active; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;

kern_return_t
FUNC_9(
 thread_t VAR_7)
{
 kern_return_t VAR_8 = VAR_1;

 if (VAR_7 == VAR_4)
  return (VAR_0);

 FUNC_5(VAR_7);

 if (VAR_7->active) {
  spl_t VAR_9 = FUNC_1();

  FUNC_4(VAR_7);
  if (!VAR_7->at_safe_point ||
    FUNC_0(VAR_7, VAR_3) != VAR_1) {
   if (!(VAR_7->sched_flags & VAR_5)) {
    VAR_7->sched_flags |= VAR_6;
    FUNC_7(VAR_7);
    FUNC_3(VAR_7);
   }
  }
  FUNC_8(VAR_7);
  FUNC_2(VAR_9);
 } else {
  VAR_8 = VAR_2;
 }

 FUNC_6(VAR_7);

 return (VAR_8);
}
