
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int suspend_state_t ;
struct regulator_dev {TYPE_1__* constraints; } ;
struct TYPE_2__ {int state_disk; int state_mem; int state_standby; } ;


 int VAR_0 ;



 int FUNC_0 (struct regulator_dev*,int *) ;

__attribute__((used)) static int FUNC_1(struct regulator_dev *VAR_1, suspend_state_t VAR_2)
{
 if (!VAR_1->constraints)
  return -VAR_0;

 switch (VAR_2) {
 case 128:
  return FUNC_0(VAR_1,
   &VAR_1->constraints->state_standby);
 case 129:
  return FUNC_0(VAR_1,
   &VAR_1->constraints->state_mem);
 case 130:
  return FUNC_0(VAR_1,
   &VAR_1->constraints->state_disk);
 default:
  return -VAR_0;
 }
}
