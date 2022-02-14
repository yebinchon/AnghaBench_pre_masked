
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_control {int id; int value; } ;
struct tda9875 {int lvol; int rvol; int bass; int treble; } ;


 int VAR_0 ;




 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct v4l2_subdev*) ;
 struct tda9875* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_1, struct v4l2_control *VAR_2)
{
 struct tda9875 *VAR_3 = FUNC_3(VAR_1);
 int VAR_4 = 0, VAR_5 = 0, VAR_6 = 0, VAR_7, VAR_8;

 switch (VAR_2->id) {
 case 128:
  VAR_7 = (VAR_3->lvol+84)*606;
  VAR_8 = (VAR_3->rvol+84)*606;

  VAR_5 = FUNC_0(VAR_7,VAR_8);
  VAR_6 = (32768*FUNC_1(VAR_7,VAR_8))/
         (VAR_5 ? VAR_5 : 1);
  VAR_6 =(VAR_7<VAR_8)?
   (65535-VAR_6) : VAR_6;

  VAR_5 = VAR_2->value;

  VAR_4=1;
  break;
 case 131:
  VAR_7 = (VAR_3->lvol+84)*606;
  VAR_8 = (VAR_3->rvol+84)*606;

  VAR_5=FUNC_0(VAR_7,VAR_8);

  VAR_6 = VAR_2->value;

  VAR_4=1;
  break;
 case 130:
  VAR_3->bass = ((VAR_2->value/2400)-12) & 0xff;
  if (VAR_3->bass > 15)
   VAR_3->bass = 15;
  if (VAR_3->bass < -12)
   VAR_3->bass = -12 & 0xff;
  break;
 case 129:
  VAR_3->treble = ((VAR_2->value/2700)-12) & 0xff;
  if (VAR_3->treble > 12)
   VAR_3->treble = 12;
  if (VAR_3->treble < -12)
   VAR_3->treble = -12 & 0xff;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_4) {
  VAR_7 = (FUNC_1(65536 - VAR_6,32768) *
   VAR_5) / 32768;
  VAR_8 = (FUNC_1(VAR_6,32768) *
    VAR_5) / 32768;
  VAR_3->lvol = ((VAR_7/606)-84) & 0xff;
  if (VAR_3->lvol > 24)
   VAR_3->lvol = 24;
  if (VAR_3->lvol < -84)
   VAR_3->lvol = -84 & 0xff;

  VAR_3->rvol = ((VAR_8/606)-84) & 0xff;
  if (VAR_3->rvol > 24)
   VAR_3->rvol = 24;
  if (VAR_3->rvol < -84)
   VAR_3->rvol = -84 & 0xff;
 }

 FUNC_2(VAR_1);
 return 0;
}
