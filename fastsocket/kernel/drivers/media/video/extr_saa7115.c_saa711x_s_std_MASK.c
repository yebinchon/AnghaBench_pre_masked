
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct v4l2_subdev {int dummy; } ;
struct saa711x_state {scalar_t__ radio; } ;


 int FUNC_0 (struct v4l2_subdev*,int ) ;
 struct saa711x_state* FUNC_1 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_subdev *VAR_0, v4l2_std_id VAR_1)
{
 struct saa711x_state *VAR_2 = FUNC_1(VAR_0);

 VAR_2->radio = 0;
 FUNC_0(VAR_0, VAR_1);
 return 0;
}
