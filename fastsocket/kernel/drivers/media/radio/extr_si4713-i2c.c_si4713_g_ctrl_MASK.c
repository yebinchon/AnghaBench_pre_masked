
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_control {int id; int value; } ;
struct si4713_device {int mutex; int mute; scalar_t__ power_state; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct si4713_device*,int ,int *) ;
 struct si4713_device* FUNC_4 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_5(struct v4l2_subdev *VAR_2, struct v4l2_control *VAR_3)
{
 struct si4713_device *VAR_4 = FUNC_4(VAR_2);
 int VAR_5 = 0;

 if (!VAR_4)
  return -VAR_0;

 FUNC_1(&VAR_4->mutex);

 if (VAR_4->power_state) {
  VAR_5 = FUNC_3(VAR_4, VAR_1,
      &VAR_4->mute);

  if (VAR_5 < 0)
   goto unlock;
 }

 switch (VAR_3->id) {
 case 128:
  VAR_3->value = FUNC_0(VAR_4->mute);
  break;
 }

unlock:
 FUNC_2(&VAR_4->mutex);
 return VAR_5;
}
