
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_control {int id; int value; } ;
struct saa7110 {int hue; int sat; int contrast; int bright; } ;


 int VAR_0 ;




 int FUNC_0 (struct v4l2_subdev*,int,int ) ;
 struct saa7110* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1, struct v4l2_control *VAR_2)
{
 struct saa7110 *VAR_3 = FUNC_1(VAR_1);

 switch (VAR_2->id) {
 case 131:
  if (VAR_3->bright != VAR_2->value) {
   VAR_3->bright = VAR_2->value;
   FUNC_0(VAR_1, 0x19, VAR_3->bright);
  }
  break;
 case 130:
  if (VAR_3->contrast != VAR_2->value) {
   VAR_3->contrast = VAR_2->value;
   FUNC_0(VAR_1, 0x13, VAR_3->contrast);
  }
  break;
 case 128:
  if (VAR_3->sat != VAR_2->value) {
   VAR_3->sat = VAR_2->value;
   FUNC_0(VAR_1, 0x12, VAR_3->sat);
  }
  break;
 case 129:
  if (VAR_3->hue != VAR_2->value) {
   VAR_3->hue = VAR_2->value;
   FUNC_0(VAR_1, 0x07, VAR_3->hue);
  }
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
