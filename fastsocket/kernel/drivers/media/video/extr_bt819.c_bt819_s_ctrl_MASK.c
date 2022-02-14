
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_control {int id; int value; } ;
struct bt819 {int bright; int contrast; int sat; int hue; } ;


 int VAR_0 ;




 int FUNC_0 (struct bt819*,int,int,int) ;
 int FUNC_1 (struct bt819*,int,int) ;
 struct bt819* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1, struct v4l2_control *VAR_2)
{
 struct bt819 *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 switch (VAR_2->id) {
 case 131:
  if (VAR_3->bright == VAR_2->value)
   break;
  VAR_3->bright = VAR_2->value;
  FUNC_1(VAR_3, 0x0a, VAR_3->bright);
  break;

 case 130:
  if (VAR_3->contrast == VAR_2->value)
   break;
  VAR_3->contrast = VAR_2->value;
  FUNC_1(VAR_3, 0x0c, VAR_3->contrast & 0xff);
  FUNC_0(VAR_3, 0x0b, 2, ((VAR_3->contrast >> 8) & 0x01));
  break;

 case 128:
  if (VAR_3->sat == VAR_2->value)
   break;
  VAR_3->sat = VAR_2->value;
  FUNC_1(VAR_3, 0x0d, (VAR_3->sat >> 7) & 0xff);
  FUNC_0(VAR_3, 0x0b, 1, ((VAR_3->sat >> 15) & 0x01));



  VAR_4 = (VAR_3->sat * 180) / 254;
  FUNC_1(VAR_3, 0x0e, (VAR_4 >> 7) & 0xff);
  FUNC_0(VAR_3, 0x0b, 0, (VAR_4 >> 15) & 0x01);
  break;

 case 129:
  if (VAR_3->hue == VAR_2->value)
   break;
  VAR_3->hue = VAR_2->value;
  FUNC_1(VAR_3, 0x0f, VAR_3->hue);
  break;

 default:
  return -VAR_0;
 }
 return 0;
}
