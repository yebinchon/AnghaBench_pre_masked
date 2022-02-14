
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_ctrl_handler {int dummy; } ;
struct v4l2_ctrl_config {char* name; char** qmenu; int type; int is_volatile; int is_private; int menu_skip_mask; int id; int ops; int def; int step; int max; int min; int flags; } ;
struct v4l2_ctrl {int is_volatile; int is_private; } ;
typedef int s32 ;
typedef enum v4l2_ctrl_type { ____Placeholder_v4l2_ctrl_type } v4l2_ctrl_type ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char const**,int*,int *,int *,int *,int *,int *) ;
 char** FUNC_2 (int ) ;
 struct v4l2_ctrl* FUNC_3 (struct v4l2_ctrl_handler*,int ,int ,char const*,int,int ,int ,int ,int ,int ,char const* const*,void*) ;

struct v4l2_ctrl *FUNC_4(struct v4l2_ctrl_handler *VAR_1,
   const struct v4l2_ctrl_config *VAR_2, void *VAR_3)
{
 bool VAR_4;
 struct v4l2_ctrl *VAR_5;
 const char *VAR_6 = VAR_2->name;
 const char * const *VAR_7 = VAR_2->qmenu;
 enum v4l2_ctrl_type VAR_8 = VAR_2->type;
 u32 VAR_9 = VAR_2->flags;
 s32 VAR_10 = VAR_2->min;
 s32 VAR_11 = VAR_2->max;
 u32 VAR_12 = VAR_2->step;
 s32 VAR_13 = VAR_2->def;

 if (VAR_6 == ((void*)0))
  FUNC_1(VAR_2->id, &VAR_6, &VAR_8, &VAR_10, &VAR_11, &VAR_12,
        &VAR_13, &VAR_9);

 VAR_4 = (VAR_2->type == VAR_0);
 if (VAR_4)
  FUNC_0(VAR_12);
 else
  FUNC_0(VAR_2->menu_skip_mask);
 if (VAR_4 && VAR_7 == ((void*)0))
  VAR_7 = FUNC_2(VAR_2->id);

 VAR_5 = FUNC_3(VAR_1, VAR_2->ops, VAR_2->id, VAR_6,
   VAR_8, VAR_10, VAR_11,
   VAR_4 ? VAR_2->menu_skip_mask : VAR_12,
   VAR_13, VAR_9, VAR_7, VAR_3);
 if (VAR_5) {
  VAR_5->is_private = VAR_2->is_private;
  VAR_5->is_volatile = VAR_2->is_volatile;
 }
 return VAR_5;
}
