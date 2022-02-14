
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ thread_call_t ;
typedef TYPE_1__* task_t ;
struct TYPE_8__ {int cpu_time; } ;
struct TYPE_7__ {int rusage_cpu_flags; scalar_t__ rusage_cpu_callt; scalar_t__ rusage_cpu_deadline; scalar_t__ rusage_cpu_interval; scalar_t__ rusage_cpu_percentage; int ledger; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_4__ VAR_3 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int
FUNC_6(task_t VAR_4, int VAR_5)
{
 thread_call_t VAR_6;


 if (VAR_4->rusage_cpu_flags & VAR_2) {
  VAR_4->rusage_cpu_flags &= ~VAR_2;
  FUNC_0(VAR_4->ledger, VAR_3.cpu_time, VAR_0, 0);
  VAR_4->rusage_cpu_percentage = 0;
  VAR_4->rusage_cpu_interval = 0;
 }




 if (VAR_5) {
  FUNC_1(VAR_4);
 }


 if (VAR_4->rusage_cpu_flags & VAR_1) {
  VAR_4->rusage_cpu_flags &= ~VAR_1;
  if (VAR_4->rusage_cpu_callt != 0) {
   VAR_6 = VAR_4->rusage_cpu_callt;
   VAR_4->rusage_cpu_callt = ((void*)0);
   VAR_4->rusage_cpu_deadline = 0;
   FUNC_3(VAR_4);
   FUNC_4(VAR_6);
   FUNC_5(VAR_6);
   FUNC_2(VAR_4);
  }
 }
 return(0);
}
