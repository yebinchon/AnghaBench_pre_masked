
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_tuner {int audmode; } ;
struct v4l2_subdev {int dummy; } ;
struct cx18_av_state {int audmode; scalar_t__ radio; } ;
struct cx18 {int dummy; } ;


 int VAR_0 ;





 int FUNC_0 (struct cx18*,int) ;
 int FUNC_1 (struct cx18*,int,int,int,int) ;
 struct cx18_av_state* FUNC_2 (struct v4l2_subdev*) ;
 struct cx18* FUNC_3 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_1, struct v4l2_tuner *VAR_2)
{
 struct cx18_av_state *VAR_3 = FUNC_2(VAR_1);
 struct cx18 *VAR_4 = FUNC_3(VAR_1);
 u8 VAR_5;

 if (VAR_3->radio)
  return 0;

 VAR_5 = FUNC_0(VAR_4, 0x809);
 VAR_5 &= ~0xf;

 switch (VAR_2->audmode) {
 case 129:



  break;
 case 128:
 case 132:



  VAR_5 |= 0x4;
  break;
 case 131:



  VAR_5 |= 0x7;
  break;
 case 130:



  VAR_5 |= 0x1;
  break;
 default:
  return -VAR_0;
 }
 FUNC_1(VAR_4, 0x809, VAR_5, VAR_5, 0xff);
 VAR_3->audmode = VAR_2->audmode;
 return 0;
}
