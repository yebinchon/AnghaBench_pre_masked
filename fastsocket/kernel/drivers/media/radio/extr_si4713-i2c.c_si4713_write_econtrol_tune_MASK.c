
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
struct v4l2_ext_control {int id; void* value; } ;
struct si4713_device {int mutex; void* antenna_capacitor; void* power_level; scalar_t__ power_state; int sd; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct si4713_device*,void*,void*) ;
 scalar_t__ FUNC_3 (int *,struct v4l2_ext_control*) ;

__attribute__((used)) static int FUNC_4(struct si4713_device *VAR_1,
    struct v4l2_ext_control *VAR_2)
{
 s32 VAR_3 = 0;
 u8 VAR_4, VAR_5;

 VAR_3 = FUNC_3(&VAR_1->sd, VAR_2);
 if (VAR_3 < 0)
  goto exit;

 FUNC_0(&VAR_1->mutex);

 switch (VAR_2->id) {
 case 128:
  VAR_4 = VAR_2->value;
  VAR_5 = VAR_1->antenna_capacitor;
  break;
 case 129:
  VAR_4 = VAR_1->power_level;
  VAR_5 = VAR_2->value;
  break;
 default:
  VAR_3 = -VAR_0;
  goto unlock;
 };

 if (VAR_1->power_state)
  VAR_3 = FUNC_2(VAR_1, VAR_4, VAR_5);

 if (VAR_3 == 0) {
  VAR_1->power_level = VAR_4;
  VAR_1->antenna_capacitor = VAR_5;
 }

unlock:
 FUNC_1(&VAR_1->mutex);
exit:
 return VAR_3;
}
