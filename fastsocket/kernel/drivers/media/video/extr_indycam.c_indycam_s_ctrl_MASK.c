
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_control {int id; int value; } ;
struct indycam {int version; } ;


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







 int FUNC_0 (struct v4l2_subdev*,int ,int*) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;
 struct indycam* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_12, struct v4l2_control *VAR_13)
{
 struct indycam *VAR_14 = FUNC_2(VAR_12);
 u8 VAR_15;
 int VAR_16 = 0;

 switch (VAR_13->id) {
 case 134:
 case 133:
  VAR_16 = FUNC_0(VAR_12, VAR_6, &VAR_15);
  if (VAR_16)
   break;

  if (VAR_13->id == 134) {
   if (VAR_13->value)
    VAR_15 |= VAR_2;
   else
    VAR_15 &= ~VAR_2;
  } else {
   if (VAR_13->value)
    VAR_15 |= VAR_3;
   else
    VAR_15 &= ~VAR_3;
  }

  VAR_16 = FUNC_1(VAR_12, VAR_6, VAR_15);
  break;
 case 131:
  VAR_15 = (VAR_13->value == 0xff) ? 0x00 : (VAR_13->value + 1);
  VAR_16 = FUNC_1(VAR_12, VAR_11, VAR_15);
  break;
 case 130:
  VAR_16 = FUNC_1(VAR_12, VAR_7, VAR_13->value);
  break;
 case 128:
  VAR_16 = FUNC_1(VAR_12, VAR_9,
     VAR_13->value);
  break;
 case 132:
  VAR_16 = FUNC_1(VAR_12, VAR_4,
     VAR_13->value);
  break;
 case 135:
  VAR_16 = FUNC_1(VAR_12, VAR_10,
     VAR_13->value);
  break;
 case 136:
  VAR_16 = FUNC_1(VAR_12, VAR_5,
     VAR_13->value);
  break;
 case 129:
  if (VAR_14->version == VAR_0) {
   VAR_16 = FUNC_1(VAR_12, VAR_8,
      VAR_13->value);
  }
  break;
 default:
  VAR_16 = -VAR_1;
 }

 return VAR_16;
}
