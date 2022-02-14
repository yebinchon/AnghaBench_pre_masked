
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct v4l2_subdev {int dummy; } ;
struct si4713_rnl {int rnl; int frequency; } ;
struct si4713_device {int mutex; int tune_rnl; int power_state; } ;


 long VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct si4713_device*,int ,int ) ;
 int FUNC_3 (struct si4713_device*) ;
 struct si4713_device* FUNC_4 (struct v4l2_subdev*) ;
 int FUNC_5 (int ) ;

long FUNC_6(struct v4l2_subdev *VAR_2, unsigned int VAR_3, void *VAR_4)
{
 struct si4713_device *VAR_5 = FUNC_4(VAR_2);
 struct si4713_rnl *VAR_6 = VAR_4;
 u16 VAR_7;
 int VAR_8 = 0;

 if (!VAR_4)
  return -VAR_0;

 FUNC_0(&VAR_5->mutex);
 switch (VAR_3) {
 case 128:
  VAR_7 = FUNC_5(VAR_6->frequency);

  if (VAR_5->power_state) {

   VAR_8 = FUNC_2(VAR_5, VAR_7, 0);
   if (VAR_8 < 0)
    goto unlock;

   VAR_8 = FUNC_3(VAR_5);
   if (VAR_8 < 0)
    goto unlock;
  }
  VAR_6->rnl = VAR_5->tune_rnl;
  break;

 default:

  VAR_8 = -VAR_1;
 }

unlock:
 FUNC_1(&VAR_5->mutex);
 return VAR_8;
}
