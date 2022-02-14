
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_sensor {int dummy; } ;
struct smu_cpu_power_sensor {scalar_t__ amps; scalar_t__ volts; } ;


 int FUNC_0 (struct smu_cpu_power_sensor*) ;
 struct smu_cpu_power_sensor* FUNC_1 (struct wf_sensor*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct wf_sensor *VAR_0)
{
 struct smu_cpu_power_sensor *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1->volts)
  FUNC_2(VAR_1->volts);
 if (VAR_1->amps)
  FUNC_2(VAR_1->amps);
 FUNC_0(VAR_1);
}
