
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_subdev_io_pin_config {int dummy; } ;
struct v4l2_subdev {int dummy; } ;
struct cx25840_state {int dummy; } ;


 int FUNC_0 (struct v4l2_subdev*,size_t,struct v4l2_subdev_io_pin_config*) ;
 scalar_t__ FUNC_1 (struct cx25840_state*) ;
 struct cx25840_state* FUNC_2 (struct v4l2_subdev*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_subdev *VAR_0, size_t VAR_1,
          struct v4l2_subdev_io_pin_config *VAR_2)
{
 struct cx25840_state *VAR_3 = FUNC_2(VAR_0);

 if (FUNC_1(VAR_3))
  return FUNC_0(VAR_0, VAR_1, VAR_2);
 return 0;
}
