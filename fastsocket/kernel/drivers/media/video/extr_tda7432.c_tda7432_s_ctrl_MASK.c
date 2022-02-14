
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_control {int id; int value; } ;
struct tda7432 {int muted; int volume; int rr; int rf; int lr; int lf; int bass; int treble; } ;


 int VAR_0 ;
 void* VAR_1 ;
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
 int FUNC_0 (struct v4l2_subdev*,int ,int) ;
 struct tda7432* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_12, struct v4l2_control *VAR_13)
{
 struct tda7432 *VAR_14 = FUNC_1(VAR_12);

 switch (VAR_13->id) {
 case 130:
  VAR_14->muted=VAR_13->value;
  break;
 case 128:
  if(!VAR_11){
   VAR_14->volume = 0x6f - ((VAR_13->value)/630);
  } else {
   VAR_14->volume = 0x6f - ((VAR_13->value)/829);
  }
  if (VAR_10)
   VAR_14->volume |= VAR_2;

  FUNC_0(VAR_12, VAR_9, VAR_14->volume);
  return 0;
 case 132:
  if (VAR_13->value < 32768) {

   VAR_14->rr = (32768 - VAR_13->value)/1057;
   VAR_14->rf = VAR_14->rr;
   VAR_14->lr = VAR_1;
   VAR_14->lf = VAR_1;
  } else if(VAR_13->value > 32769) {

   VAR_14->lf = (VAR_13->value - 32768)/1057;
   VAR_14->lr = VAR_14->lf;
   VAR_14->rr = VAR_1;
   VAR_14->rf = VAR_1;
  } else {

   VAR_14->rr = VAR_1;
   VAR_14->rf = VAR_1;
   VAR_14->lf = VAR_1;
   VAR_14->lr = VAR_1;
  }
  break;
 case 131:
  VAR_14->bass = VAR_13->value >> 12;
  if(VAR_14->bass>= 0x8)
    VAR_14->bass = (~VAR_14->bass & 0xf) + 0x8 ;

  FUNC_0(VAR_12, VAR_8, 0x10 | (VAR_14->bass << 4) | VAR_14->treble);
  return 0;
 case 129:
  VAR_14->treble= VAR_13->value >> 12;
  if(VAR_14->treble>= 0x8)
    VAR_14->treble = (~VAR_14->treble & 0xf) + 0x8 ;

  FUNC_0(VAR_12, VAR_8, 0x10 | (VAR_14->bass << 4) | VAR_14->treble);
  return 0;
 default:
  return -VAR_0;
 }


 if (VAR_14->muted)
 {

  FUNC_0(VAR_12, VAR_3, VAR_14->lf | VAR_5);
  FUNC_0(VAR_12, VAR_4, VAR_14->lr | VAR_5);
  FUNC_0(VAR_12, VAR_6, VAR_14->rf | VAR_5);
  FUNC_0(VAR_12, VAR_7, VAR_14->rr | VAR_5);
 } else {
  FUNC_0(VAR_12, VAR_3, VAR_14->lf);
  FUNC_0(VAR_12, VAR_4, VAR_14->lr);
  FUNC_0(VAR_12, VAR_6, VAR_14->rf);
  FUNC_0(VAR_12, VAR_7, VAR_14->rr);
 }
 return 0;
}
