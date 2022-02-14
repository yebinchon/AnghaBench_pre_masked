
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ctrl {int flags; } ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int,int *) ;

void FUNC_2(struct v4l2_ctrl *VAR_0, bool VAR_1)
{
 if (VAR_0 == ((void*)0))
  return;

 if (VAR_1)

  FUNC_1(1, &VAR_0->flags);
 else

  FUNC_0(1, &VAR_0->flags);
}
