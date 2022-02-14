
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_priority_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;

pthread_priority_t
FUNC_3(pthread_priority_t VAR_3)
{
 if (FUNC_0(VAR_3)) {
  int VAR_4 = FUNC_1(VAR_3);
  if (VAR_4 > 0 || VAR_4 < VAR_0) {
   VAR_3 |= VAR_1;
  }
  return VAR_3 & (VAR_2 |
    VAR_1);
 }
 return FUNC_2();
}
