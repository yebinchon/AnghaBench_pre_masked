
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_control {int id; int value; } ;
struct indycam {int version; } ;
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







 int FUNC_0 (struct v4l2_subdev*,int ,int*) ;
 struct indycam* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_14, struct v4l2_control *VAR_15)
{
 struct indycam *VAR_16 = FUNC_1(VAR_14);
 u8 VAR_17;
 int VAR_18 = 0;

 switch (VAR_15->id) {
 case 134:
 case 133:
  VAR_18 = FUNC_0(VAR_14, VAR_8, &VAR_17);
  if (VAR_18)
   return -VAR_2;
  if (VAR_15->id == 134)
   VAR_15->value = (VAR_17 & VAR_3)
    ? 1 : 0;
  else
   VAR_15->value = (VAR_17 & VAR_4)
    ? 1 : 0;
  break;
 case 131:
  VAR_18 = FUNC_0(VAR_14, VAR_13, &VAR_17);
  if (VAR_18)
   return -VAR_2;
  VAR_15->value = ((s32)VAR_17 == 0x00) ? 0xff : ((s32)VAR_17 - 1);
  break;
 case 130:
  VAR_18 = FUNC_0(VAR_14, VAR_9, &VAR_17);
  if (VAR_18)
   return -VAR_2;
  VAR_15->value = (s32)VAR_17;
  break;
 case 128:
  VAR_18 = FUNC_0(VAR_14, VAR_11, &VAR_17);
  if (VAR_18)
   return -VAR_2;
  VAR_15->value = (s32)VAR_17;
  break;
 case 132:
  VAR_18 = FUNC_0(VAR_14, VAR_6, &VAR_17);
  if (VAR_18)
   return -VAR_2;
  VAR_15->value = (s32)VAR_17;
  break;
 case 135:
  VAR_18 = FUNC_0(VAR_14,
           VAR_12, &VAR_17);
  if (VAR_18)
   return -VAR_2;
  VAR_15->value = (s32)VAR_17;
  break;
 case 136:
  VAR_18 = FUNC_0(VAR_14,
           VAR_7, &VAR_17);
  if (VAR_18)
   return -VAR_2;
  VAR_15->value = (s32)VAR_17;
  break;
 case 129:
  if (VAR_16->version == VAR_0) {
   VAR_18 = FUNC_0(VAR_14,
            VAR_10, &VAR_17);
   if (VAR_18)
    return -VAR_2;
   VAR_15->value = (s32)VAR_17;
  } else {
   VAR_15->value = VAR_5;
  }
  break;
 default:
  VAR_18 = -VAR_1;
 }

 return VAR_18;
}
