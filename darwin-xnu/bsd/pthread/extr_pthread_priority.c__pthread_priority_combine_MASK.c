
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ thread_qos_t ;
typedef int pthread_priority_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ,int) ;
 scalar_t__ FUNC_1 (int) ;

pthread_priority_t
FUNC_2(pthread_priority_t VAR_3, thread_qos_t VAR_4)
{
 if (VAR_3 & VAR_0) {
  return VAR_0;
 }

 if (VAR_3 & VAR_1) {
  if (!VAR_4) {
   return VAR_3;
  }
 } else if (VAR_4 < FUNC_1(VAR_3)) {
  return VAR_3;
 }

 return FUNC_0(VAR_4, 0,
   VAR_3 & VAR_2);
}
