
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ext_controls {int error_idx; int count; int ctrl_class; } ;
struct v4l2_ctrl_handler {int dummy; } ;
struct v4l2_ctrl {int flags; TYPE_1__* ops; scalar_t__ is_volatile; struct v4l2_ctrl** cluster; } ;
struct ctrl_helper {scalar_t__ handled; struct v4l2_ctrl* ctrl; } ;
typedef int helper ;
struct TYPE_2__ {int (* g_volatile_ctrl ) (struct v4l2_ctrl*) ;} ;


 int FUNC_0 (struct ctrl_helper*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct v4l2_ctrl_handler*,int ) ;
 int FUNC_3 (int,struct v4l2_ext_controls*,struct ctrl_helper*) ;
 int FUNC_4 (int,struct v4l2_ext_controls*,struct ctrl_helper*,int ) ;
 int VAR_5 ;
 int FUNC_5 (struct ctrl_helper*) ;
 struct ctrl_helper* FUNC_6 (int,int ) ;
 int FUNC_7 (struct v4l2_ctrl_handler*,struct v4l2_ext_controls*,struct ctrl_helper*,int) ;
 int FUNC_8 (struct v4l2_ctrl*) ;
 int FUNC_9 (struct v4l2_ctrl*) ;
 int FUNC_10 (struct v4l2_ctrl*) ;

int FUNC_11(struct v4l2_ctrl_handler *VAR_6, struct v4l2_ext_controls *VAR_7)
{
 struct ctrl_helper VAR_8[4];
 struct ctrl_helper *VAR_9 = VAR_8;
 int VAR_10;
 int VAR_11;

 VAR_7->error_idx = VAR_7->count;
 VAR_7->ctrl_class = FUNC_1(VAR_7->ctrl_class);

 if (VAR_6 == ((void*)0))
  return -VAR_1;

 if (VAR_7->count == 0)
  return FUNC_2(VAR_6, VAR_7->ctrl_class);

 if (VAR_7->count > FUNC_0(VAR_8)) {
  VAR_9 = FUNC_6(sizeof(VAR_8[0]) * VAR_7->count, VAR_3);
  if (VAR_9 == ((void*)0))
   return -VAR_2;
 }

 VAR_10 = FUNC_7(VAR_6, VAR_7, VAR_9, 0);

 for (VAR_11 = 0; !VAR_10 && VAR_11 < VAR_7->count; VAR_11++)
  if (VAR_9[VAR_11].ctrl->flags & VAR_4)
   VAR_10 = -VAR_0;

 for (VAR_11 = 0; !VAR_10 && VAR_11 < VAR_7->count; VAR_11++) {
  struct v4l2_ctrl *VAR_12 = VAR_9[VAR_11].ctrl;
  struct v4l2_ctrl *VAR_13 = VAR_12->cluster[0];

  if (VAR_9[VAR_11].handled)
   continue;

  VAR_7->error_idx = VAR_11;

  FUNC_9(VAR_13);

  if (VAR_12->is_volatile && VAR_13->ops->g_volatile_ctrl)
   VAR_10 = VAR_13->ops->g_volatile_ctrl(VAR_13);

  if (!VAR_10)
   VAR_10 = FUNC_4(VAR_11, VAR_7, VAR_9, VAR_5);
  FUNC_10(VAR_13);
  FUNC_3(VAR_11, VAR_7, VAR_9);
 }

 if (VAR_7->count > FUNC_0(VAR_8))
  FUNC_5(VAR_9);
 return VAR_10;
}
