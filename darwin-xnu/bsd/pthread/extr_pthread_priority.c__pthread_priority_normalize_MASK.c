
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_priority_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;

pthread_priority_t
FUNC_3(pthread_priority_t VAR_6)
{
 if (VAR_6 & VAR_1) {
  return VAR_1;
 }
 if (FUNC_0(VAR_6)) {
  int VAR_7 = FUNC_1(VAR_6);
  if (VAR_7 > 0 || VAR_7 < VAR_0) {
   VAR_6 |= VAR_4;
  }
  return VAR_6 & (VAR_3 |
    VAR_2 |
    VAR_5 |
    VAR_4);
 }
 return FUNC_2();
}
