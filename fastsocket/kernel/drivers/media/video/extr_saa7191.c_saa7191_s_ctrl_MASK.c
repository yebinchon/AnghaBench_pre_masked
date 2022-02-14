
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_control {int id; int value; } ;
typedef int s32 ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

 int FUNC_0 (struct v4l2_subdev*,int ) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_21, struct v4l2_control *VAR_22)
{
 u8 VAR_23;
 int VAR_24 = 0;

 switch (VAR_22->id) {
 case 136:
 case 135:
 case 133:
  VAR_23 = FUNC_0(VAR_21, VAR_18);
  switch (VAR_22->id) {
  case 136:
   VAR_23 &= ~VAR_10;
   VAR_23 |= (VAR_22->value << VAR_11)
    & VAR_10;
   break;
  case 135:
   VAR_23 &= ~VAR_8;
   VAR_23 |= (VAR_22->value << VAR_9)
    & VAR_8;
   break;
  case 133:
   VAR_23 &= ~VAR_12;
   VAR_23 |= (VAR_22->value << VAR_13)
    & VAR_12;
   break;
  }
  VAR_24 = FUNC_1(VAR_21, VAR_18, VAR_23);
  break;
 case 132:
 case 134:
  VAR_23 = FUNC_0(VAR_21, VAR_16);
  if (VAR_22->id == 132) {
   if (VAR_22->value)
    VAR_23 |= VAR_5;
   else
    VAR_23 &= ~VAR_5;
  } else {
   VAR_23 &= ~VAR_6;
   VAR_23 |= (VAR_22->value << VAR_7)
    & VAR_6;
  }
  VAR_24 = FUNC_1(VAR_21, VAR_16, VAR_23);
  break;
 case 128:
  VAR_23 = VAR_22->value & 0xff;
  if (VAR_23 < 0x80)
   VAR_23 += 0x80;
  else
   VAR_23 -= 0x80;
  VAR_24 = FUNC_1(VAR_21, VAR_17, VAR_23);
  break;
 case 129:
  VAR_23 = FUNC_0(VAR_21, VAR_19);
  if (VAR_22->value)
   VAR_23 |= VAR_20;
  else
   VAR_23 &= ~VAR_20;
  VAR_24 = FUNC_1(VAR_21, VAR_19, VAR_23);
  break;
 case 131: {
  s32 VAR_25 = VAR_22->value;
  if (VAR_25 < 0)
   VAR_25 += 8;
  VAR_23 = FUNC_0(VAR_21, VAR_14);
  VAR_23 &= ~VAR_1;
  VAR_23 |= (VAR_25 << VAR_2)
   & VAR_1;
  VAR_24 = FUNC_1(VAR_21, VAR_14, VAR_23);
  break;
 }
 case 130:
  VAR_23 = FUNC_0(VAR_21, VAR_15);
  VAR_23 &= ~VAR_3;
  VAR_23 |= (VAR_22->value << VAR_4)
   & VAR_3;
  VAR_24 = FUNC_1(VAR_21, VAR_15, VAR_23);
  break;
 default:
  VAR_24 = -VAR_0;
 }

 return VAR_24;
}
