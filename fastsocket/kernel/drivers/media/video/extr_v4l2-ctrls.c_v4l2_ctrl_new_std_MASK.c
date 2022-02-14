
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_ctrl_ops {int dummy; } ;
struct v4l2_ctrl_handler {int dummy; } ;
struct v4l2_ctrl {int dummy; } ;
typedef int s32 ;
typedef enum v4l2_ctrl_type { ____Placeholder_v4l2_ctrl_type } v4l2_ctrl_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_ctrl_handler*,int ) ;
 int FUNC_1 (int ,char const**,int*,int *,int *,int *,int *,int *) ;
 struct v4l2_ctrl* FUNC_2 (struct v4l2_ctrl_handler*,struct v4l2_ctrl_ops const*,int ,char const*,int,int ,int ,int ,int ,int ,int *,int *) ;

struct v4l2_ctrl *FUNC_3(struct v4l2_ctrl_handler *VAR_2,
   const struct v4l2_ctrl_ops *VAR_3,
   u32 VAR_4, s32 VAR_5, s32 VAR_6, u32 VAR_7, s32 VAR_8)
{
 const char *VAR_9;
 enum v4l2_ctrl_type VAR_10;
 u32 VAR_11;

 FUNC_1(VAR_4, &VAR_9, &VAR_10, &VAR_5, &VAR_6, &VAR_7, &VAR_8, &VAR_11);
 if (VAR_10 == VAR_1) {
  FUNC_0(VAR_2, -VAR_0);
  return ((void*)0);
 }
 return FUNC_2(VAR_2, VAR_3, VAR_4, VAR_9, VAR_10,
        VAR_5, VAR_6, VAR_7, VAR_8, VAR_11, ((void*)0), ((void*)0));
}
