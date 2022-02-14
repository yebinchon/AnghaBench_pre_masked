
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* thread_t ;
typedef int sched_mode_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_7__ {int sched_flags; int saved_mode; scalar_t__ policy_reset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(thread_t VAR_2, sched_mode_t VAR_3)
{
 if (VAR_2->policy_reset)
  return;

 boolean_t VAR_4 = FUNC_3(VAR_2);






 if (VAR_2->sched_flags & VAR_1)
  VAR_2->saved_mode = VAR_3;
 else
  FUNC_0(VAR_2, VAR_3);

 FUNC_1(VAR_2);

 if (VAR_4)
  FUNC_2(VAR_2, VAR_0);
}
