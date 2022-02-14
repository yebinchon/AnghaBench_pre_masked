
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* proc_t ;
typedef scalar_t__ pid_t ;
struct TYPE_4__ {int p_memstat_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(pid_t VAR_3, int *VAR_4)
{
 proc_t VAR_5 = ((void*)0);


 if (VAR_3 == 0) {
  return VAR_0;
 }

 VAR_5 = FUNC_0(VAR_3);
 if (!VAR_5) {
  return VAR_1;
 }

 FUNC_1();
 *VAR_4 = ((VAR_5->p_memstat_state & VAR_2) ? 1 : 0);
 FUNC_3(VAR_5);
 FUNC_2();

 return 0;
}
