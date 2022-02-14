
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_control {int dummy; } ;
struct smu_fan_control {int max; } ;
typedef int s32 ;


 struct smu_fan_control* FUNC_0 (struct wf_control*) ;

__attribute__((used)) static s32 FUNC_1(struct wf_control *VAR_0)
{
 struct smu_fan_control *VAR_1 = FUNC_0(VAR_0);
 return VAR_1->max;
}
