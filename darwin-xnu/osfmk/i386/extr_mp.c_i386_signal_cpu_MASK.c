
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ mp_sync_t ;
typedef int mp_event_t ;
struct TYPE_2__ {int cpu_signals; int cpu_running; } ;


 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int ,int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int,int ,int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 () ;
 int VAR_5 ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,int volatile*) ;
 int FUNC_7 (int ,int volatile*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;

void
FUNC_10(int VAR_6, mp_event_t VAR_7, mp_sync_t VAR_8)
{
 volatile int *VAR_9 = &FUNC_3(VAR_6)->cpu_signals;
 uint64_t VAR_10;


 if (!FUNC_3(VAR_6)->cpu_running)
  return;

 if (VAR_7 == VAR_2)
         FUNC_2(VAR_4 | VAR_1, VAR_6, 0, 0, 0, 0);

 FUNC_1(VAR_5, VAR_6, VAR_7);

 FUNC_7(VAR_7, VAR_9);
 FUNC_5(VAR_6);
 if (VAR_8 == VAR_3) {
    again:
  VAR_10 = !FUNC_8() ?
     FUNC_9() + (1000*1000*1000) :
     ~0ULL;
  while (FUNC_6(VAR_7, VAR_9) && FUNC_9() < VAR_10) {
   FUNC_4();
  }
  if (FUNC_6(VAR_7, VAR_9)) {
   FUNC_0("i386_signal_cpu(%d, 0x%x, SYNC) timed out\n",
    VAR_6, VAR_7);
   goto again;
  }
 }
 if (VAR_7 == VAR_2)
         FUNC_2(VAR_4 | VAR_0, VAR_6, 0, 0, 0, 0);
}
