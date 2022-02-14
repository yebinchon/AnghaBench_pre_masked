
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int ctrl_handler; } ;
struct v4l2_queryctrl {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct v4l2_queryctrl*) ;

int FUNC_1(struct v4l2_subdev *VAR_2, struct v4l2_queryctrl *VAR_3)
{
 if (VAR_3->id & VAR_1)
  return -VAR_0;
 return FUNC_0(VAR_2->ctrl_handler, VAR_3);
}
