
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_subdev {int dummy; } ;
struct TYPE_2__ {int* bytes; } ;
struct CHIPSTATE {int mode; TYPE_1__ shadow; struct v4l2_subdev sd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int FUNC_0 (struct CHIPSTATE*,int,int) ;
 int VAR_8 ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,...) ;

__attribute__((used)) static void FUNC_2(struct CHIPSTATE *VAR_9, int VAR_10)
{
 struct v4l2_subdev *VAR_11 = &VAR_9->sd;
 int VAR_12 = VAR_9->shadow.bytes[VAR_2+1] & ~ VAR_5;


 if ((VAR_12 & VAR_0) != VAR_1) {
  FUNC_1(1, VAR_8, VAR_11, "tda9873_setmode(): external input\n");
  return;
 }

 FUNC_1(1, VAR_8, VAR_11, "tda9873_setmode(): chip->shadow.bytes[%d] = %d\n", VAR_2+1, VAR_9->shadow.bytes[VAR_2+1]);
 FUNC_1(1, VAR_8, VAR_11, "tda9873_setmode(): sw_data  = %d\n", VAR_12);

 switch (VAR_10) {
 case 129:
  VAR_12 |= VAR_6;
  break;
 case 128:
  VAR_12 |= VAR_7;
  break;
 case 131:
  VAR_12 |= VAR_3;
  break;
 case 130:
  VAR_12 |= VAR_4;
  break;
 default:
  VAR_9->mode = 0;
  return;
 }

 FUNC_0(VAR_9, VAR_2, VAR_12);
 FUNC_1(1, VAR_8, VAR_11, "tda9873_setmode(): req. mode %d; chip_write: %d\n",
  VAR_10, VAR_12);
}
