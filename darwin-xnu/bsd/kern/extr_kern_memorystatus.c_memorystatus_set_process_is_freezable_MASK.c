
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
typedef scalar_t__ pid_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_7__ {int p_pid; char* p_name; int p_memstat_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (char*,int,char*) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_7(pid_t VAR_6, boolean_t VAR_7)
{
 proc_t VAR_8 = VAR_4;

 if (VAR_6 == 0) {
  return VAR_0;
 }

 VAR_8 = FUNC_2(VAR_6);
 if (!VAR_8) {
  return VAR_2;
 }





 if (VAR_8 != FUNC_0()) {
  FUNC_5(VAR_8);
  return VAR_1;
 }

 FUNC_3();
 if (VAR_7 == VAR_3) {

  VAR_8->p_memstat_state |= VAR_5;
  FUNC_1("memorystatus_set_process_is_freezable: disabling freeze for pid %d [%s]\n",
    VAR_8->p_pid, (*VAR_8->p_name ? VAR_8->p_name : "unknown"));
 } else {
  VAR_8->p_memstat_state &= ~VAR_5;
  FUNC_1("memorystatus_set_process_is_freezable: enabling freeze for pid %d [%s]\n",
    VAR_8->p_pid, (*VAR_8->p_name ? VAR_8->p_name : "unknown"));
 }
 FUNC_6(VAR_8);
 FUNC_4();

 return 0;
}
