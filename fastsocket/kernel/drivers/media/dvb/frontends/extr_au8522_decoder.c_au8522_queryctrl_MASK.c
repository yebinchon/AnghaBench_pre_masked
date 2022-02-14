
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int dummy; } ;
struct v4l2_queryctrl {int id; scalar_t__ type; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct v4l2_queryctrl*,int,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_2, struct v4l2_queryctrl *VAR_3)
{
 switch (VAR_3->id) {
 case 130:
  return FUNC_0(VAR_3, 0, 255, 1,
         VAR_0);
 case 131:
  return FUNC_0(VAR_3, 0, 255, 1, 109);
 case 128:
  return FUNC_0(VAR_3, 0, 255, 1, 128);
 case 129:
  return FUNC_0(VAR_3, -32768, 32768, 1, 0);
 default:
  break;
 }

 VAR_3->type = 0;
 return -VAR_1;
}
