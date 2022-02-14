
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_device {int state_count; } ;


 int FUNC_0 (struct cpuidle_device*,int) ;

void FUNC_1(struct cpuidle_device *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->state_count; VAR_1++)
  FUNC_0(VAR_0, VAR_1);
}
