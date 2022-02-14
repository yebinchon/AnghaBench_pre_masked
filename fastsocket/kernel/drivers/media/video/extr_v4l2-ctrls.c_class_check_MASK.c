
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_ctrl_handler {int ctrl_refs; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct v4l2_ctrl_handler*,int) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct v4l2_ctrl_handler *VAR_1, u32 VAR_2)
{
 if (VAR_2 == 0)
  return FUNC_1(&VAR_1->ctrl_refs) ? -VAR_0 : 0;
 return FUNC_0(VAR_1, VAR_2 | 1) ? 0 : -VAR_0;
}
