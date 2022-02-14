
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_control {int dummy; } ;
struct smu_fan_control {scalar_t__ min; scalar_t__ max; int reg; int fan_type; scalar_t__ value; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 struct smu_fan_control* FUNC_1 (struct wf_control*) ;

__attribute__((used)) static int FUNC_2(struct wf_control *VAR_0, s32 VAR_1)
{
 struct smu_fan_control *VAR_2 = FUNC_1(VAR_0);

 if (VAR_1 < VAR_2->min)
  VAR_1 = VAR_2->min;
 if (VAR_1 > VAR_2->max)
  VAR_1 = VAR_2->max;
 VAR_2->value = VAR_1;

 return FUNC_0(VAR_2->fan_type, VAR_2->reg, VAR_1);
}
