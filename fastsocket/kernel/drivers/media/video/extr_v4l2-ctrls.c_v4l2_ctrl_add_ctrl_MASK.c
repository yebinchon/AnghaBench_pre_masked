
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl_handler {scalar_t__ error; } ;
struct v4l2_ctrl {struct v4l2_ctrl_handler* handler; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct v4l2_ctrl_handler*,struct v4l2_ctrl*) ;
 int FUNC_1 (struct v4l2_ctrl_handler*,int ) ;

struct v4l2_ctrl *FUNC_2(struct v4l2_ctrl_handler *VAR_1,
       struct v4l2_ctrl *VAR_2)
{
 if (VAR_1 == ((void*)0) || VAR_1->error)
  return ((void*)0);
 if (VAR_2 == ((void*)0)) {
  FUNC_1(VAR_1, -VAR_0);
  return ((void*)0);
 }
 if (VAR_2->handler == VAR_1)
  return VAR_2;
 return FUNC_0(VAR_1, VAR_2) ? ((void*)0) : VAR_2;
}
