
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct monitor_result {scalar_t__ overflow; scalar_t__ cost; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct monitor_result *VAR_2 = VAR_0;
 const struct monitor_result *VAR_3 = VAR_1;


 if (VAR_2->overflow < VAR_3->overflow) {
  return 1;
 } else if (VAR_2->overflow > VAR_3->overflow) {
  return -1;
 } else {
  if (VAR_2->cost < VAR_3->cost) {
   return 1;
  } else if (VAR_2->cost > VAR_3->cost) {
   return -1;
  } else {
   return 0;
  }
 }
}
