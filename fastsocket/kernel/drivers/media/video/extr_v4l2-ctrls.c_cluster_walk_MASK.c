
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_controls {int count; int * controls; } ;
struct v4l2_ctrl {struct v4l2_ctrl** cluster; } ;
struct ctrl_helper {int handled; struct v4l2_ctrl* ctrl; } ;
typedef int (* cluster_func ) (int *,struct v4l2_ctrl*) ;



__attribute__((used)) static int FUNC_0(unsigned VAR_0,
   struct v4l2_ext_controls *VAR_1,
   struct ctrl_helper *VAR_2,
   cluster_func VAR_3)
{
 struct v4l2_ctrl **VAR_4 = VAR_2[VAR_0].ctrl->cluster;
 int VAR_5 = 0;
 int VAR_6;


 for (VAR_6 = VAR_0; !VAR_5 && VAR_6 < VAR_1->count; VAR_6++) {
  struct v4l2_ctrl *VAR_7 = VAR_2[VAR_6].ctrl;

  if (!VAR_2[VAR_6].handled && VAR_7->cluster == VAR_4)
   VAR_5 = VAR_3(&VAR_1->controls[VAR_6], VAR_7);
 }
 return VAR_5;
}
