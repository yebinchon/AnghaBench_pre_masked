
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_queryctrl {int id; } ;
struct cx18_av_state {int default_volume; } ;


 int VAR_0 ;
 struct cx18_av_state* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_queryctrl*,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_1, struct v4l2_queryctrl *VAR_2)
{
 struct cx18_av_state *VAR_3 = FUNC_0(VAR_1);

 switch (VAR_2->id) {
 case 131:
  return FUNC_1(VAR_2, 0, 255, 1, 128);
 case 130:
 case 128:
  return FUNC_1(VAR_2, 0, 127, 1, 64);
 case 129:
  return FUNC_1(VAR_2, -128, 127, 1, 0);
 default:
  break;
 }

 switch (VAR_2->id) {
 case 132:
  return FUNC_1(VAR_2, 0, 65535,
   65535 / 100, VAR_3->default_volume);
 case 134:
  return FUNC_1(VAR_2, 0, 1, 1, 0);
 case 136:
 case 135:
 case 133:
  return FUNC_1(VAR_2, 0, 65535, 65535 / 100, 32768);
 default:
  return -VAR_0;
 }
 return -VAR_0;
}
