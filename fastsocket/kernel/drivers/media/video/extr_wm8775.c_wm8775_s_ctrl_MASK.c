
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8775_state {int input; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_ctrl {int id; int val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 struct v4l2_subdev* FUNC_0 (struct v4l2_ctrl*) ;
 struct wm8775_state* FUNC_1 (struct v4l2_subdev*) ;
 int FUNC_2 (struct v4l2_subdev*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct v4l2_ctrl *VAR_4)
{
 struct v4l2_subdev *VAR_5 = FUNC_0(VAR_4);
 struct wm8775_state *VAR_6 = FUNC_1(VAR_5);

 switch (VAR_4->id) {
 case 128:
  FUNC_2(VAR_5, VAR_3, 0x0c0);
  FUNC_2(VAR_5, VAR_1, 0x1d4);
  FUNC_2(VAR_5, VAR_2, 0x1d4);
  if (!VAR_4->val)
   FUNC_2(VAR_5, VAR_3, 0x100 + VAR_6->input);
  return 0;
 }
 return -VAR_0;
}
