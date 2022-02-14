
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef void* boolean_t ;
struct TYPE_2__ {void* cpu_NMI_acknowledged; } ;


 void* VAR_0 ;
 int FUNC_0 (void*) ;
 void* VAR_1 ;
 int FUNC_1 (unsigned int) ;
 TYPE_1__* FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 void* FUNC_7 (void*) ;
 int FUNC_8 (char*,unsigned int) ;
 int FUNC_9 () ;
 unsigned int VAR_2 ;

void
FUNC_10(void)
{
 unsigned int VAR_3;
 boolean_t VAR_4;
 uint64_t VAR_5;

 VAR_4 = FUNC_7(VAR_0);
 FUNC_0(VAR_1);
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  if (!FUNC_3(VAR_3))
   continue;
  FUNC_2(VAR_3)->cpu_NMI_acknowledged = VAR_0;
  FUNC_1(VAR_3);
  VAR_5 = !FUNC_6() ?
    FUNC_9() + (1000 * 1000 * 1000 * 10ULL) :
    ~0ULL;
  while (!FUNC_2(VAR_3)->cpu_NMI_acknowledged) {
   FUNC_5();
   FUNC_4();
   if (FUNC_9() > VAR_5)
    FUNC_8("NMI_cpus() timeout cpu %d", VAR_3);
  }
  FUNC_2(VAR_3)->cpu_NMI_acknowledged = VAR_0;
 }
 FUNC_0(VAR_0);

 FUNC_7(VAR_4);
}
