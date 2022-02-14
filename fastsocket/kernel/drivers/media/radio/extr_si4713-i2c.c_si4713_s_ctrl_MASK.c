
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_control {int id; int value; } ;
struct si4713_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (struct si4713_device*,int ) ;
 int FUNC_1 (struct si4713_device*,int ) ;
 int FUNC_2 (struct si4713_device*) ;
 struct si4713_device* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_3, struct v4l2_control *VAR_4)
{
 struct si4713_device *VAR_5 = FUNC_3(VAR_3);
 int VAR_6 = 0;

 if (!VAR_5)
  return -VAR_0;

 switch (VAR_4->id) {
 case 128:
  if (VAR_4->value) {
   VAR_6 = FUNC_0(VAR_5, VAR_4->value);
   if (VAR_6 < 0)
    goto exit;

   VAR_6 = FUNC_1(VAR_5, VAR_1);
  } else {
   VAR_6 = FUNC_1(VAR_5, VAR_2);
   if (VAR_6 < 0)
    goto exit;

   VAR_6 = FUNC_2(VAR_5);
   if (VAR_6 < 0)
    goto exit;

   VAR_6 = FUNC_0(VAR_5, VAR_4->value);
  }
  break;
 }

exit:
 return VAR_6;
}
