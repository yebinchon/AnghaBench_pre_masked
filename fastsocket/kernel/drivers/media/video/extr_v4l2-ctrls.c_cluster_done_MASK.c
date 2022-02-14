
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ext_controls {int count; } ;
struct v4l2_ctrl {int dummy; } ;
struct ctrl_helper {int handled; TYPE_1__* ctrl; } ;
struct TYPE_2__ {struct v4l2_ctrl** cluster; } ;



__attribute__((used)) static void FUNC_0(unsigned VAR_0,
    struct v4l2_ext_controls *VAR_1,
    struct ctrl_helper *VAR_2)
{
 struct v4l2_ctrl **VAR_3 = VAR_2[VAR_0].ctrl->cluster;
 int VAR_4;


 for (VAR_4 = VAR_0; VAR_4 < VAR_1->count; VAR_4++)
  if (VAR_2[VAR_4].ctrl->cluster == VAR_3)
   VAR_2[VAR_4].handled = 1;
}
