
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct v4l2_tuner {int signal; int capability; int rxsubchans; int audmode; } ;
struct v4l2_subdev {int dummy; } ;
struct au8522_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct au8522_state*,int) ;
 struct au8522_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_6, struct v4l2_tuner *VAR_7)
{
 int VAR_8 = 0;
 struct au8522_state *VAR_9 = FUNC_1(VAR_6);
 u8 VAR_10;


 VAR_10 = FUNC_0(VAR_9, 0x00);
 if (VAR_10 == 0xa2)
  VAR_7->signal = 0x01;
 else
  VAR_7->signal = 0x00;

 VAR_7->capability |=
  VAR_3 | VAR_0 |
  VAR_1 | VAR_2;

 VAR_8 = VAR_5;
 VAR_7->rxsubchans = VAR_8;
 VAR_7->audmode = VAR_4;
 return 0;
}
