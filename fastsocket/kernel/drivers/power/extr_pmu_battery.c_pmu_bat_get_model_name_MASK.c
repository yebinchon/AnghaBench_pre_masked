
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmu_battery_info {int flags; } ;




 int VAR_0 ;

 char** VAR_1 ;

__attribute__((used)) static char *FUNC_0(struct pmu_battery_info *VAR_2)
{
 switch (VAR_2->flags & VAR_0) {
 case 128:
  return VAR_1[0];
 case 130:
  return VAR_1[1];
 case 129:
  return VAR_1[2];
 default: break;
 }
 return VAR_1[3];
}
