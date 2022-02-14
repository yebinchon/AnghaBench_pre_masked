
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_control {int id; int value; } ;
struct si4713_device {int mutex; int antenna_capacitor; int power_level; scalar_t__ power_state; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct si4713_device*) ;

__attribute__((used)) static int FUNC_3(struct si4713_device *VAR_1,
    struct v4l2_ext_control *VAR_2)
{
 s32 VAR_3 = 0;

 FUNC_0(&VAR_1->mutex);

 if (VAR_1->power_state) {
  VAR_3 = FUNC_2(VAR_1);
  if (VAR_3 < 0)
   goto unlock;
 }

 switch (VAR_2->id) {
 case 128:
  VAR_2->value = VAR_1->power_level;
  break;
 case 129:
  VAR_2->value = VAR_1->antenna_capacitor;
  break;
 default:
  VAR_3 = -VAR_0;
 };

unlock:
 FUNC_1(&VAR_1->mutex);
 return VAR_3;
}
