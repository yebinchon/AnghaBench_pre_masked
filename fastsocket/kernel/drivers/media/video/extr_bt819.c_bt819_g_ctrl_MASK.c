
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_control {int id; int value; } ;
struct bt819 {int hue; int sat; int contrast; int bright; } ;


 int VAR_0 ;




 struct bt819* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_1, struct v4l2_control *VAR_2)
{
 struct bt819 *VAR_3 = FUNC_0(VAR_1);

 switch (VAR_2->id) {
 case 131:
  VAR_2->value = VAR_3->bright;
  break;
 case 130:
  VAR_2->value = VAR_3->contrast;
  break;
 case 128:
  VAR_2->value = VAR_3->sat;
  break;
 case 129:
  VAR_2->value = VAR_3->hue;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
