
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int id; } ;
struct saa7164_encoder_params {int dummy; } ;


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
 int FUNC_0 (struct v4l2_queryctrl*,int,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct saa7164_encoder_params *VAR_11,
 struct v4l2_queryctrl *VAR_12)
{
 switch (VAR_12->id) {
 case 140:
  return FUNC_0(VAR_12, 0x0, 0xff, 1, 127);
 case 139:
  return FUNC_0(VAR_12, 0x0, 0xff, 1, 66);
 case 129:
  return FUNC_0(VAR_12, 0x0, 0xff, 1, 62);
 case 138:
  return FUNC_0(VAR_12, 0x0, 0xff, 1, 128);
 case 128:
  return FUNC_0(VAR_12, 0x0, 0x0f, 1, 8);
 case 137:
  return FUNC_0(VAR_12, 0x0, 0x01, 1, 0);
 case 141:
  return FUNC_0(VAR_12, -83, 24, 1, 20);
 case 134:
  return FUNC_0(VAR_12,
   VAR_3, VAR_2,
   100000, VAR_1);
 case 136:
  return FUNC_0(VAR_12,
   VAR_4,
   VAR_5,
   1, VAR_4);
 case 135:
  return FUNC_0(VAR_12,
   VAR_6,
   VAR_7,
   1, VAR_8);
 case 130:
  return FUNC_0(VAR_12, 1, 255, 1, 15);
 case 133:
  return FUNC_0(VAR_12,
   VAR_10,
   VAR_9,
   1, VAR_10);
 case 131:
  return FUNC_0(VAR_12,
   1, 3, 1, 1);
 case 132:
  return FUNC_0(VAR_12,
   VAR_3, VAR_2,
   100000, VAR_1);
 default:
  return -VAR_0;
 }
}
