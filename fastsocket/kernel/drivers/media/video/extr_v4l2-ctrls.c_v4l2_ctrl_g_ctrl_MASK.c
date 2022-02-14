
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct v4l2_ctrl*,int *) ;
 int FUNC_2 (struct v4l2_ctrl*) ;

s32 FUNC_3(struct v4l2_ctrl *VAR_0)
{
 s32 VAR_1 = 0;


 FUNC_0(!FUNC_2(VAR_0));
 FUNC_1(VAR_0, &VAR_1);
 return VAR_1;
}
