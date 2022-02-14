
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev {int ctrl_handler; } ;
struct v4l2_ext_controls {int dummy; } ;


 int FUNC_0 (int ,struct v4l2_ext_controls*,int) ;

int FUNC_1(struct v4l2_subdev *VAR_0, struct v4l2_ext_controls *VAR_1)
{
 return FUNC_0(VAR_0->ctrl_handler, VAR_1, 1);
}
