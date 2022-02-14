
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vp27smpx_state {int radio; } ;
struct v4l2_tuner {int audmode; } ;
struct v4l2_subdev {int dummy; } ;


 struct vp27smpx_state* FUNC_0 (struct v4l2_subdev*) ;
 int FUNC_1 (struct v4l2_subdev*,int ) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0, struct v4l2_tuner *VAR_1)
{
 struct vp27smpx_state *VAR_2 = FUNC_0(VAR_0);

 if (!VAR_2->radio)
  FUNC_1(VAR_0, VAR_1->audmode);
 return 0;
}
