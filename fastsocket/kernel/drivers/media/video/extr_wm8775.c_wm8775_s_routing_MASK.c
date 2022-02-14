
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wm8775_state {int input; int mute; } ;
struct v4l2_subdev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wm8775_state* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct v4l2_subdev*,char*,int) ;
 int FUNC_3 (struct v4l2_subdev*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct v4l2_subdev *VAR_4,
       u32 VAR_5, u32 VAR_6, u32 VAR_7)
{
 struct wm8775_state *VAR_8 = FUNC_0(VAR_4);






 if (VAR_5 > 15) {
  FUNC_2(VAR_4, "Invalid input %d.\n", VAR_5);
  return -VAR_0;
 }
 VAR_8->input = VAR_5;
 if (!FUNC_1(VAR_8->mute))
  return 0;
 FUNC_3(VAR_4, VAR_3, 0x0c0);
 FUNC_3(VAR_4, VAR_1, 0x1d4);
 FUNC_3(VAR_4, VAR_2, 0x1d4);
 FUNC_3(VAR_4, VAR_3, 0x100 + VAR_8->input);
 return 0;
}
