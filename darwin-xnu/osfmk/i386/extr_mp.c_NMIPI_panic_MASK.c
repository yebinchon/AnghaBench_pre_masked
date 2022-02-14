
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int cpumask_t ;
struct TYPE_2__ {int cpu_NMI_acknowledged; } ;
typedef int NMI_reason_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned int) ;
 TYPE_1__* FUNC_2 (unsigned int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 unsigned int VAR_4 ;

void
FUNC_5(cpumask_t VAR_5, NMI_reason_t VAR_6) {
 unsigned int VAR_7;
 cpumask_t VAR_8;
 uint64_t VAR_9;

 FUNC_0(VAR_3);
 VAR_2 = VAR_6;

 for (VAR_7 = 0, VAR_8 = 1; VAR_7 < VAR_4; VAR_7++, VAR_8 <<= 1) {
  if ((VAR_5 & VAR_8) == 0)
   continue;
  FUNC_2(VAR_7)->cpu_NMI_acknowledged = VAR_0;
  FUNC_1(VAR_7);
 }


 VAR_9 = FUNC_4() + VAR_1;
 for (VAR_7 = 0, VAR_8 = 1; VAR_7 < VAR_4; VAR_7++, VAR_8 <<= 1) {
  if ((VAR_5 & VAR_8) == 0)
   continue;
  while (!FUNC_2(VAR_7)->cpu_NMI_acknowledged &&
   FUNC_4() < VAR_9) {
   FUNC_3();
  }
 }
}
