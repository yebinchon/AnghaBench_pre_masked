
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_control {int id; int value; } ;
struct au8522_state {int brightness; int contrast; int saturation; int hue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct au8522_state*,int ,int) ;
 struct au8522_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_7, struct v4l2_control *VAR_8)
{
 struct au8522_state *VAR_9 = FUNC_1(VAR_7);

 switch (VAR_8->id) {
 case 131:
  VAR_9->brightness = VAR_8->value;
  FUNC_0(VAR_9, VAR_0,
    VAR_8->value - 128);
  break;
 case 130:
  VAR_9->contrast = VAR_8->value;
  FUNC_0(VAR_9, VAR_1,
    VAR_8->value);
  break;
 case 128:
  VAR_9->saturation = VAR_8->value;
  FUNC_0(VAR_9, VAR_4,
    VAR_8->value);
  FUNC_0(VAR_9, VAR_5,
    VAR_8->value);
  break;
 case 129:
  VAR_9->hue = VAR_8->value;
  FUNC_0(VAR_9, VAR_2,
    VAR_8->value >> 8);
  FUNC_0(VAR_9, VAR_3,
    VAR_8->value & 0xFF);
  break;
 case 132:
 case 135:
 case 133:
 case 136:
 case 134:

 default:
  return -VAR_6;
 }

 return 0;
}
