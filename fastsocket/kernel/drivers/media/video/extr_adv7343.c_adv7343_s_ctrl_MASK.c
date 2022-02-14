
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_control {int id; int value; } ;
struct adv7343_state {int gain; int hue; int bright; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;



 int FUNC_0 (struct v4l2_subdev*,int ,int ) ;
 int VAR_13 ;
 struct adv7343_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (int,int ,struct v4l2_subdev*,char*,...) ;
 int FUNC_3 (struct v4l2_subdev*,char*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_14, struct v4l2_control *VAR_15)
{
 struct adv7343_state *VAR_16 = FUNC_1(VAR_14);
 int VAR_17 = 0;

 switch (VAR_15->id) {
 case 130:
  if (VAR_15->value < VAR_1 ||
     VAR_15->value > VAR_0) {
   FUNC_2(1, VAR_13, VAR_14,
     "invalid brightness settings %d\n",
        VAR_15->value);
   return -VAR_10;
  }

  VAR_16->bright = VAR_15->value;
  VAR_17 = FUNC_0(VAR_14, VAR_7,
     VAR_16->bright);
  break;

 case 128:
  if (VAR_15->value < VAR_6 ||
     VAR_15->value > VAR_5) {
   FUNC_2(1, VAR_13, VAR_14, "invalid hue settings %d\n",
        VAR_15->value);
   return -VAR_10;
  }

  VAR_16->hue = VAR_15->value;
  VAR_17 = FUNC_0(VAR_14, VAR_8, VAR_16->hue);
  break;

 case 129:
  if (VAR_15->value < VAR_4 ||
     VAR_15->value > VAR_3) {
   FUNC_2(1, VAR_13, VAR_14, "invalid gain settings %d\n",
        VAR_15->value);
   return -VAR_10;
  }

  if ((VAR_15->value > VAR_12) &&
   (VAR_15->value < VAR_11)) {
   FUNC_2(1, VAR_13, VAR_14,
    "gain settings not within the specified range\n");
   return -VAR_10;
  }

  VAR_16->gain = VAR_15->value;
  VAR_17 = FUNC_0(VAR_14, VAR_2, VAR_16->gain);
  break;

 default:
  return -VAR_9;
 }

 if (VAR_17 < 0)
  FUNC_3(VAR_14, "Failed to set the encoder controls\n");

 return VAR_17;
}
