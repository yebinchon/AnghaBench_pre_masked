
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_queryctrl {int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_queryctrl*,int,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_1,
  struct v4l2_queryctrl *VAR_2)
{

 switch (VAR_2->id) {
 case 136:
  return FUNC_0(VAR_2, 0, 255, 1, 128);
 case 135:
  return FUNC_0(VAR_2, 0, 127, 1, 64);
 case 128:
 case 131:
  return FUNC_0(VAR_2, 0, 1, 1, 0);
 case 129:
  return FUNC_0(VAR_2, 0, 256, 1, 128);
 case 130:
  return FUNC_0(VAR_2, -180, 180, 5, 0);
 case 132:
  return FUNC_0(VAR_2, 0, 255, 1, 128);
 case 137:
  return FUNC_0(VAR_2, 0, 1, 1, 1);
 case 134:
  return FUNC_0(VAR_2, 0, 65535, 1, 500);
 case 133:
  return FUNC_0(VAR_2, 0, 1, 1, 0);
 }
 return -VAR_0;
}
