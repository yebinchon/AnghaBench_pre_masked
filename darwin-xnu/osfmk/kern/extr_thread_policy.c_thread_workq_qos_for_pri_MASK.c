
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int thread_qos_t ;
struct TYPE_2__ {int* qos_pri; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 TYPE_1__ VAR_3 ;

thread_qos_t
FUNC_0(int VAR_4)
{
 int VAR_5;
 if (VAR_4 > VAR_3.qos_pri[VAR_2]) {


  return VAR_1;
 }
 for (VAR_5 = VAR_2; VAR_5 > VAR_0; VAR_5--) {

  if (VAR_3.qos_pri[VAR_5 - 1] < VAR_4) {
   return VAR_5;
  }
 }
 return VAR_0;
}
