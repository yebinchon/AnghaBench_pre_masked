
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
typedef scalar_t__ pid_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_4__ {int p_memstat_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(pid_t VAR_4, boolean_t VAR_5)
{
 proc_t VAR_6 = ((void*)0);


 if (VAR_4 == 0) {
  return VAR_0;
 }

 VAR_6 = FUNC_0(VAR_4);
 if (!VAR_6) {
  return VAR_1;
 }

 FUNC_1();
 if (VAR_5 == VAR_3) {
  VAR_6->p_memstat_state |= VAR_2;
 } else {
  VAR_6->p_memstat_state &= ~VAR_2;
 }
 FUNC_3(VAR_6);
 FUNC_2();

 return 0;
}
