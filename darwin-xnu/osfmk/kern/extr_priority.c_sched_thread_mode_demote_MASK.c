
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* thread_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_7__ {int sched_flags; scalar_t__ saved_mode; scalar_t__ sched_mode; scalar_t__ policy_reset; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

void
FUNC_5(thread_t VAR_4, uint32_t VAR_5)
{
 FUNC_0(VAR_5 & VAR_3);
 FUNC_0((VAR_4->sched_flags & VAR_5) != VAR_5);

 if (VAR_4->policy_reset)
  return;

 if (VAR_4->sched_flags & VAR_3) {

  VAR_4->sched_flags |= VAR_5;
  return;
 }

 FUNC_0(VAR_4->saved_mode == VAR_1);

 boolean_t VAR_6 = FUNC_4(VAR_4);

 VAR_4->sched_flags |= VAR_5;

 VAR_4->saved_mode = VAR_4->sched_mode;

 FUNC_1(VAR_4, VAR_2);

 FUNC_2(VAR_4);

 if (VAR_6)
  FUNC_3(VAR_4, VAR_0);
}
