
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct v4l2_ext_controls {size_t count; size_t error_idx; scalar_t__ ctrl_class; struct v4l2_ext_control* controls; } ;
struct v4l2_ext_control {size_t id; } ;
struct v4l2_ctrl_handler {int dummy; } ;
struct v4l2_ctrl {int flags; } ;
struct ctrl_helper {int handled; struct v4l2_ctrl* ctrl; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (size_t) ;
 size_t VAR_3 ;
 struct v4l2_ctrl* FUNC_1 (struct v4l2_ctrl_handler*,size_t) ;

__attribute__((used)) static int FUNC_2(struct v4l2_ctrl_handler *VAR_4,
        struct v4l2_ext_controls *VAR_5,
        struct ctrl_helper *VAR_6,
        bool VAR_7)
{
 u32 VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_5->count; VAR_8++) {
  struct v4l2_ext_control *VAR_9 = &VAR_5->controls[VAR_8];
  struct v4l2_ctrl *VAR_10;
  u32 VAR_11 = VAR_9->id & VAR_3;

  if (VAR_7)
   VAR_5->error_idx = VAR_8;

  if (VAR_5->ctrl_class && FUNC_0(VAR_11) != VAR_5->ctrl_class)
   return -VAR_0;



  if (VAR_11 >= VAR_1)
   return -VAR_0;
  VAR_10 = FUNC_1(VAR_4, VAR_11);
  if (VAR_10 == ((void*)0))
   return -VAR_0;
  if (VAR_10->flags & VAR_2)
   return -VAR_0;

  VAR_6[VAR_8].ctrl = VAR_10;
  VAR_6[VAR_8].handled = 0;
 }
 return 0;
}
