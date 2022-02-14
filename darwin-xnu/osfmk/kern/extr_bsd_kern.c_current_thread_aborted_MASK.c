
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int spl_t ;
typedef int boolean_t ;
struct TYPE_5__ {int sched_flags; int options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

boolean_t
FUNC_5 (
  void)
{
 thread_t VAR_7 = FUNC_0();
 spl_t VAR_8;

 if ((VAR_7->sched_flags & VAR_4) == VAR_3 &&
   (VAR_7->options & VAR_2) != VAR_1)
  return (VAR_6);
 if (VAR_7->sched_flags & VAR_5) {
  VAR_8 = FUNC_1();
  FUNC_3(VAR_7);
  if (VAR_7->sched_flags & VAR_5)
   VAR_7->sched_flags &= ~VAR_4;
  FUNC_4(VAR_7);
  FUNC_2(VAR_8);
 }
 return VAR_0;
}
