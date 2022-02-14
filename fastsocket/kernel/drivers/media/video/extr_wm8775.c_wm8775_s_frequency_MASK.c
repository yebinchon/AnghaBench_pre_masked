
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8775_state {int input; } ;
struct v4l2_subdev {int dummy; } ;
struct v4l2_frequency {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct wm8775_state* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_3, struct v4l2_frequency *VAR_4)
{
 struct wm8775_state *VAR_5 = FUNC_0(VAR_3);





 FUNC_1(VAR_3, VAR_2, 0x0c0);
 FUNC_1(VAR_3, VAR_0, 0x1d4);
 FUNC_1(VAR_3, VAR_1, 0x1d4);
 FUNC_1(VAR_3, VAR_2, 0x100 + VAR_5->input);
 return 0;
}
