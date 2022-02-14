
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {int polling_delay; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static void FUNC_2(struct thermal_zone_device *VAR_7)
{
 if (VAR_2 > VAR_0) {
  FUNC_0("fanon temperature too high, set to %d\n",
    VAR_0);
  VAR_2 = VAR_0;
 }

 if (VAR_4 && VAR_5 != VAR_3) {
  if (VAR_3 > VAR_1) {
   FUNC_0("interval too high, set to %d\n",
    VAR_1);
   VAR_3 = VAR_1;
  }
  if (VAR_6)
   FUNC_1("interval changed to: %d\n",
     VAR_3);
  VAR_7->polling_delay = VAR_3*1000;
  VAR_5 = VAR_3;
 }
}
