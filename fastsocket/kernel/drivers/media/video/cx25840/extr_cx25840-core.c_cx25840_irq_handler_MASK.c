
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_subdev {int dummy; } ;
struct cx25840_state {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct v4l2_subdev*,int ,int*) ;
 scalar_t__ FUNC_1 (struct cx25840_state*) ;
 struct cx25840_state* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_1, u32 VAR_2,
          bool *VAR_3)
{
 struct cx25840_state *VAR_4 = FUNC_2(VAR_1);

 *VAR_3 = 0;


 if (FUNC_1(VAR_4))
  return FUNC_0(VAR_1, VAR_2, VAR_3);

 return -VAR_0;
}
