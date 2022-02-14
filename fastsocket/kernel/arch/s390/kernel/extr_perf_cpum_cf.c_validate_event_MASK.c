
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hw_perf_event {int config_base; int config; } ;






 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(const struct hw_perf_event *VAR_2)
{
 switch (VAR_2->config_base) {
 case 131:
 case 128:
 case 130:
 case 129:

  if ((VAR_2->config >= 6 && VAR_2->config <= 31) ||
      (VAR_2->config >= 38 && VAR_2->config <= 63) ||
      (VAR_2->config >= 80 && VAR_2->config <= 127))
   return -VAR_1;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}
