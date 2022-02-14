
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ task_throughput_qos_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

kern_return_t
FUNC_0(task_throughput_qos_t VAR_5) {
 if ((VAR_5 != VAR_4) &&
     ((VAR_5 > VAR_3) || (VAR_5 < VAR_2)))
  return VAR_0;

 return VAR_1;
}
