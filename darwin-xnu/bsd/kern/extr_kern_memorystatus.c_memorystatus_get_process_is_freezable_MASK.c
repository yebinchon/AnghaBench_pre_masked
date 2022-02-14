
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
typedef scalar_t__ pid_t ;
struct TYPE_7__ {int p_memstat_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 () ;
 TYPE_1__* FUNC_1 (scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(pid_t VAR_5, int *VAR_6)
{
 proc_t VAR_7 = VAR_3;

 if (VAR_5 == 0) {
  return VAR_0;
 }

 VAR_7 = FUNC_1(VAR_5);
 if (!VAR_7) {
  return VAR_2;
 }





 if (VAR_7 != FUNC_0()) {
  FUNC_4(VAR_7);
  return VAR_1;
 }

 FUNC_2();
 *VAR_6 = ((VAR_7->p_memstat_state & VAR_4) ? 0 : 1);
 FUNC_5(VAR_7);
 FUNC_3();

 return 0;
}
