
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_control {int id; int value; } ;
struct cx18 {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cx18*,struct v4l2_control*) ;
 int FUNC_2 (struct cx18*,int,int) ;
 struct cx18* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_2, struct v4l2_control *VAR_3)
{
 struct cx18 *VAR_4 = FUNC_3(VAR_2);

 switch (VAR_3->id) {
 case 131:
  if (VAR_3->value < 0 || VAR_3->value > 255) {
   FUNC_0(VAR_2, "invalid brightness setting %d\n",
         VAR_3->value);
   return -VAR_1;
  }

  FUNC_2(VAR_4, 0x414, VAR_3->value - 128);
  break;

 case 130:
  if (VAR_3->value < 0 || VAR_3->value > 127) {
   FUNC_0(VAR_2, "invalid contrast setting %d\n",
         VAR_3->value);
   return -VAR_1;
  }

  FUNC_2(VAR_4, 0x415, VAR_3->value << 1);
  break;

 case 128:
  if (VAR_3->value < 0 || VAR_3->value > 127) {
   FUNC_0(VAR_2, "invalid saturation setting %d\n",
         VAR_3->value);
   return -VAR_1;
  }

  FUNC_2(VAR_4, 0x420, VAR_3->value << 1);
  FUNC_2(VAR_4, 0x421, VAR_3->value << 1);
  break;

 case 129:
  if (VAR_3->value < -128 || VAR_3->value > 127) {
   FUNC_0(VAR_2, "invalid hue setting %d\n",
         VAR_3->value);
   return -VAR_1;
  }

  FUNC_2(VAR_4, 0x422, VAR_3->value);
  break;

 case 132:
 case 135:
 case 133:
 case 136:
 case 134:
  return FUNC_1(VAR_4, VAR_3);

 default:
  return -VAR_0;
 }
 return 0;
}
