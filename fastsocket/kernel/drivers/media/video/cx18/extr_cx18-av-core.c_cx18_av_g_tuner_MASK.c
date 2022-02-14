
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_tuner {int signal; int capability; int rxsubchans; int audmode; } ;
struct v4l2_subdev {int dummy; } ;
struct cx18_av_state {int audmode; scalar_t__ radio; } ;
struct cx18 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct cx18*,int) ;
 struct cx18_av_state* FUNC_1 (struct v4l2_subdev*) ;
 struct cx18* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_9, struct v4l2_tuner *VAR_10)
{
 struct cx18_av_state *VAR_11 = FUNC_1(VAR_9);
 struct cx18 *VAR_12 = FUNC_2(VAR_9);
 u8 VAR_13;
 u8 VAR_14;
 int VAR_15 = 0;

 if (VAR_11->radio)
  return 0;

 VAR_13 = FUNC_0(VAR_12, 0x40e) & 0x20;
 VAR_10->signal = VAR_13 ? 0xffff : 0x0;

 VAR_10->capability |=
      VAR_3 | VAR_0 |
      VAR_1 | VAR_2;

 VAR_14 = FUNC_0(VAR_12, 0x804);


 if ((VAR_14 & 0xf) == 1)
  VAR_15 |= VAR_8;
 else
  VAR_15 |= VAR_6;

 if (VAR_14 == 2 || VAR_14 == 4)
  VAR_15 = VAR_4 | VAR_5;

 if (VAR_14 & 0x10)
  VAR_15 |= VAR_7;

 VAR_10->rxsubchans = VAR_15;
 VAR_10->audmode = VAR_11->audmode;
 return 0;
}
