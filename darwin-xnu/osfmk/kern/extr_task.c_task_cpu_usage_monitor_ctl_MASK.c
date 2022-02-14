
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef TYPE_1__* task_t ;
typedef int kern_return_t ;
struct TYPE_3__ {int rusage_cpu_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

kern_return_t
FUNC_0(task_t VAR_4, uint32_t *VAR_5)
{
 int VAR_6 = VAR_2;

 if (*VAR_5 & VAR_0) {
  VAR_4->rusage_cpu_flags |= VAR_3;
 } else {
  VAR_6 = VAR_1;
 }

 return VAR_6;
}
