
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;
typedef TYPE_1__* task_t ;
struct TYPE_3__ {int rusage_cpu_flags; scalar_t__ rusage_cpu_deadline; scalar_t__ rusage_cpu_interval; scalar_t__ rusage_cpu_percentage; scalar_t__ rusage_cpu_perthr_interval; scalar_t__ rusage_cpu_perthr_percentage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(task_t VAR_3, uint8_t *VAR_4, uint64_t *VAR_5, uint64_t *VAR_6, int *VAR_7)
{
 *VAR_4 = 0;
 *VAR_5 = 0;
 *VAR_6 = 0;

 if ((VAR_3->rusage_cpu_flags & VAR_1) != 0) {
  *VAR_7 = VAR_1;
  *VAR_4 = VAR_3->rusage_cpu_perthr_percentage;
  *VAR_5 = VAR_3->rusage_cpu_perthr_interval;
 } else if ((VAR_3->rusage_cpu_flags & VAR_2) != 0) {
  *VAR_7 = VAR_2;
  *VAR_4 = VAR_3->rusage_cpu_percentage;
  *VAR_5 = VAR_3->rusage_cpu_interval;
 } else if ((VAR_3->rusage_cpu_flags & VAR_0) != 0) {
  *VAR_7 = VAR_0;
  *VAR_6 = VAR_3->rusage_cpu_deadline;
 } else {
  *VAR_7 = 0;
 }

 return(0);
}
