
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_control {int id; int value; } ;
struct cx18 {int dummy; } ;
typedef int s8 ;


 int VAR_0 ;
 int FUNC_0 (struct cx18*,struct v4l2_control*) ;
 int FUNC_1 (struct cx18*,int) ;
 struct cx18* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1, struct v4l2_control *VAR_2)
{
 struct cx18 *VAR_3 = FUNC_2(VAR_1);

 switch (VAR_2->id) {
 case 131:
  VAR_2->value = (s8)FUNC_1(VAR_3, 0x414) + 128;
  break;
 case 130:
  VAR_2->value = FUNC_1(VAR_3, 0x415) >> 1;
  break;
 case 128:
  VAR_2->value = FUNC_1(VAR_3, 0x420) >> 1;
  break;
 case 129:
  VAR_2->value = (s8)FUNC_1(VAR_3, 0x422);
  break;
 case 132:
 case 135:
 case 133:
 case 136:
 case 134:
  return FUNC_0(VAR_3, VAR_2);
 default:
  return -VAR_0;
 }
 return 0;
}
