
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8739_state {int hdl; int clock_freq; } ;
struct v4l2_subdev {int name; } ;


 struct wm8739_state* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct v4l2_subdev*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0)
{
 struct wm8739_state *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_0, "Frequency: %u Hz\n", VAR_1->clock_freq);
 FUNC_1(&VAR_1->hdl, VAR_0->name);
 return 0;
}
