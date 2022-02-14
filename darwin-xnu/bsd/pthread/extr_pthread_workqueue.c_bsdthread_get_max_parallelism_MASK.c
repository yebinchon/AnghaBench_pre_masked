
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ thread_qos_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (scalar_t__,unsigned long) ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static int
FUNC_2(thread_qos_t VAR_7, unsigned long VAR_8,
  int *VAR_9)
{
 FUNC_1(VAR_1 ==
   VAR_5, "logical");
 FUNC_1(VAR_2 ==
   VAR_6, "realtime");

 if (VAR_8 & ~(VAR_2 | VAR_1)) {
  return VAR_0;
 }

 if (VAR_8 & VAR_2) {
  if (VAR_7) {
   return VAR_0;
  }
 } else if (VAR_7 == VAR_4 || VAR_7 >= VAR_3) {
  return VAR_0;
 }

 *VAR_9 = FUNC_0(VAR_7, VAR_8);
 return 0;
}
