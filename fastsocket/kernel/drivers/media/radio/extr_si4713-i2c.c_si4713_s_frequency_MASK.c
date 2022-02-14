
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_frequency {int frequency; } ;
struct si4713_device {int frequency; int mutex; scalar_t__ power_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct si4713_device*,int) ;
 struct si4713_device* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct v4l2_subdev *VAR_3, struct v4l2_frequency *VAR_4)
{
 struct si4713_device *VAR_5 = FUNC_4(VAR_3);
 int VAR_6 = 0;
 u16 VAR_7 = FUNC_5(VAR_4->frequency);


 if (VAR_7 < VAR_2 || VAR_7 > VAR_1)
  return -VAR_0;

 FUNC_0(&VAR_5->mutex);

 if (VAR_5->power_state) {
  VAR_6 = FUNC_3(VAR_5, VAR_7);
  if (VAR_6 < 0)
   goto unlock;
  VAR_7 = VAR_6;
  VAR_6 = 0;
 }
 VAR_5->frequency = VAR_7;
 VAR_4->frequency = FUNC_2(VAR_7);

unlock:
 FUNC_1(&VAR_5->mutex);
 return VAR_6;
}
