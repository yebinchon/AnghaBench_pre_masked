
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vpx3220 {int hue; int sat; int contrast; int bright; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_control {int id; int value; } ;


 int VAR_0 ;




 struct vpx3220* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,int,int ) ;
 int FUNC_2 (struct v4l2_subdev*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1, struct v4l2_control *VAR_2)
{
 struct vpx3220 *VAR_3 = FUNC_0(VAR_1);

 switch (VAR_2->id) {
 case 131:
  if (VAR_3->bright != VAR_2->value) {
   VAR_3->bright = VAR_2->value;
   FUNC_2(VAR_1, 0xe6, VAR_3->bright);
  }
  break;
 case 130:
  if (VAR_3->contrast != VAR_2->value) {

   VAR_3->contrast = VAR_2->value;
   FUNC_2(VAR_1, 0xe7, VAR_3->contrast + 192);
  }
  break;
 case 128:
  if (VAR_3->sat != VAR_2->value) {
   VAR_3->sat = VAR_2->value;
   FUNC_1(VAR_1, 0xa0, VAR_3->sat);
  }
  break;
 case 129:
  if (VAR_3->hue != VAR_2->value) {
   VAR_3->hue = VAR_2->value;
   FUNC_1(VAR_1, 0x1c, VAR_3->hue);
  }
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
