
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int val; } ;
struct v4l2_ctrl {int flags; TYPE_1__ cur; TYPE_2__* ops; scalar_t__ is_volatile; struct v4l2_ctrl** cluster; } ;
typedef int s32 ;
struct TYPE_4__ {int (* g_volatile_ctrl ) (struct v4l2_ctrl*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_ctrl*) ;
 int FUNC_1 (struct v4l2_ctrl*) ;
 int FUNC_2 (struct v4l2_ctrl*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_ctrl *VAR_2, s32 *VAR_3)
{
 struct v4l2_ctrl *VAR_4 = VAR_2->cluster[0];
 int VAR_5 = 0;

 if (VAR_2->flags & VAR_1)
  return -VAR_0;

 FUNC_1(VAR_4);

 if (VAR_2->is_volatile && VAR_4->ops->g_volatile_ctrl)
  VAR_5 = VAR_4->ops->g_volatile_ctrl(VAR_4);
 *VAR_3 = VAR_2->cur.val;
 FUNC_2(VAR_4);
 return VAR_5;
}
