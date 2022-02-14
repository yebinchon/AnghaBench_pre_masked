
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_queryctrl {int id; } ;


 int VAR_0 ;




 int FUNC_0 (struct v4l2_queryctrl*,int,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_1, struct v4l2_queryctrl *VAR_2)
{
 switch (VAR_2->id) {
 case 131:
  FUNC_0(VAR_2, -128, 127, 1, 0);
  break;

 case 130:
  FUNC_0(VAR_2, 0, 511, 1, 256);
  break;

 case 128:
  FUNC_0(VAR_2, 0, 511, 1, 256);
  break;

 case 129:
  FUNC_0(VAR_2, -128, 127, 1, 0);
  break;

 default:
  return -VAR_0;
 }
 return 0;
}
