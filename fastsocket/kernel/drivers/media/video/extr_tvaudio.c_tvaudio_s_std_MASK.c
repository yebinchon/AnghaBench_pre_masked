
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct CHIPSTATE {scalar_t__ radio; } ;


 struct CHIPSTATE* FUNC_0 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_1(struct v4l2_subdev *VAR_0, v4l2_std_id VAR_1)
{
 struct CHIPSTATE *VAR_2 = FUNC_0(VAR_0);

 VAR_2->radio = 0;
 return 0;
}
