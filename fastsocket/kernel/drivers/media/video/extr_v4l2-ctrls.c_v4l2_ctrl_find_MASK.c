
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_ctrl_ref {struct v4l2_ctrl* ctrl; } ;
struct v4l2_ctrl_handler {int dummy; } ;
struct v4l2_ctrl {int dummy; } ;


 struct v4l2_ctrl_ref* FUNC_0 (struct v4l2_ctrl_handler*,int ) ;

struct v4l2_ctrl *FUNC_1(struct v4l2_ctrl_handler *VAR_0, u32 VAR_1)
{
 struct v4l2_ctrl_ref *VAR_2 = FUNC_0(VAR_0, VAR_1);

 return VAR_2 ? VAR_2->ctrl : ((void*)0);
}
