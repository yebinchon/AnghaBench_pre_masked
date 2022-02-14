
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_ctrl_handler {int dummy; } ;
struct v4l2_ctrl_config {scalar_t__ type; void* menu_skip_mask; void* step; int qmenu; void* def; void* max; void* min; int id; int * ops; int flags; int name; } ;
struct v4l2_ctrl {int dummy; } ;
typedef void* s32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *,scalar_t__*,void**,void**,void**,void**,int *) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 struct v4l2_ctrl* FUNC_2 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_config*,int *) ;

__attribute__((used)) static struct v4l2_ctrl *FUNC_3(struct v4l2_ctrl_handler *VAR_2,
   u32 VAR_3, s32 VAR_4, s32 VAR_5, s32 VAR_6, s32 VAR_7)
{
 struct v4l2_ctrl_config VAR_8;

 FUNC_0(VAR_3, &VAR_8.name, &VAR_8.type, &VAR_4, &VAR_5, &VAR_6, &VAR_7, &VAR_8.flags);
 VAR_8.ops = &VAR_1;
 VAR_8.id = VAR_3;
 VAR_8.min = VAR_4;
 VAR_8.max = VAR_5;
 VAR_8.def = VAR_7;
 if (VAR_8.type == VAR_0) {
  VAR_8.step = 0;
  VAR_8.menu_skip_mask = VAR_6;
  VAR_8.qmenu = FUNC_1(VAR_3);
 } else {
  VAR_8.step = VAR_6;
  VAR_8.menu_skip_mask = 0;
 }
 return FUNC_2(VAR_2, &VAR_8, ((void*)0));
}
