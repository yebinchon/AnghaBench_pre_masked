
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sched_mode_t ;
typedef int integer_t ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;

__attribute__((used)) static sched_mode_t
FUNC_1(integer_t VAR_3) {
 switch (VAR_3) {
  case 128:
   return VAR_2;
  case 129:
  case 130:
   return VAR_0;
  default:
   FUNC_0("unexpected sched policy: %d", VAR_3);
   return VAR_1;
 }
}
