
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl_handler {int dummy; } ;
struct v4l2_ctrl {int dummy; } ;
struct v4l2_control {int value; int id; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_ctrl*,int *) ;
 int FUNC_1 (struct v4l2_ctrl*) ;
 struct v4l2_ctrl* FUNC_2 (struct v4l2_ctrl_handler*,int ) ;

int FUNC_3(struct v4l2_ctrl_handler *VAR_1, struct v4l2_control *VAR_2)
{
 struct v4l2_ctrl *VAR_3 = FUNC_2(VAR_1, VAR_2->id);

 if (VAR_3 == ((void*)0) || !FUNC_1(VAR_3))
  return -VAR_0;

 return FUNC_0(VAR_3, &VAR_2->value);
}
