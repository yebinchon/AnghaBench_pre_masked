
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




 int FUNC_0 (struct CHIPSTATE*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int,int ,struct v4l2_subdev*,char*,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct CHIPSTATE *VAR_10, int VAR_11)
{
 struct v4l2_subdev *VAR_12 = &VAR_10->sd;



 if (VAR_9) {
  if(VAR_10->shadow.bytes[VAR_0-2] & 0x20)
   VAR_7 &= 0xfe;
  else
   VAR_7 |= 0x01;
  FUNC_0(VAR_10, VAR_4, VAR_7);
 }







 if(VAR_8 == 0x11) {
  int VAR_13 = 0x80;
  int VAR_14 = (VAR_9) ? 0x82:0x80;

  switch(VAR_11) {
  case 129:
  case 128:
   break;
  case 131:
   VAR_13 = 0x80;
   VAR_14 = (VAR_9) ? 0x82:0x80;
   break;
  case 130:
   VAR_13 = 0xa0;
   VAR_14 = (VAR_9) ? 0x83:0x81;
   break;
  default:
   VAR_10->mode = 0;
   return;
  }
  FUNC_0(VAR_10, VAR_1, VAR_13);
  FUNC_0(VAR_10, VAR_3, VAR_14);

  FUNC_1(1, VAR_5, VAR_12, "tda9874a_setmode(): req. mode %d; AOSR=0x%X, MDACOSR=0x%X.\n",
   VAR_11, VAR_13, VAR_14);

 } else {
  int VAR_15,VAR_16;

  switch(VAR_11) {
  case 129:
   VAR_15 = 0x00;
   VAR_16 = 0x10;
   break;
  case 128:
   if(VAR_9) {
    VAR_15 = 0x00;
    VAR_16 = 0x00;
   } else {
    VAR_15 = (VAR_6 == 1) ? 0x05 : 0x04;
    VAR_16 = 0x00;
   }
   break;
  case 131:
   VAR_15 = 0x02;
   VAR_16 = 0x10;
   break;
  case 130:
   VAR_15 = 0x02;
   VAR_16 = 0x20;
   break;
  default:
   VAR_10->mode = 0;
   return;
  }
  FUNC_0(VAR_10, VAR_2, VAR_15);
  FUNC_0(VAR_10, VAR_1, VAR_16);

  FUNC_1(1, VAR_5, VAR_12, "tda9874a_setmode(): req. mode %d; FMMR=0x%X, AOSR=0x%X.\n",
   VAR_11, VAR_15, VAR_16);
 }
}
