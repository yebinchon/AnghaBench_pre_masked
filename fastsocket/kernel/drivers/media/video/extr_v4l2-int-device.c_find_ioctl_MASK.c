
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_int_ioctl_func ;
struct v4l2_int_slave {int num_ioctls; struct v4l2_int_ioctl_desc* ioctls; } ;
struct v4l2_int_ioctl_desc {int num; int * func; } ;



__attribute__((used)) static v4l2_int_ioctl_func *FUNC_0(struct v4l2_int_slave *VAR_0, int VAR_1,
           v4l2_int_ioctl_func *VAR_2)
{
 const struct v4l2_int_ioctl_desc *VAR_3 = VAR_0->ioctls;
 const struct v4l2_int_ioctl_desc *VAR_4 =
  VAR_3 + VAR_0->num_ioctls - 1;

 while (VAR_3 <= VAR_4) {
  const struct v4l2_int_ioctl_desc *VAR_5;

  VAR_5 = (VAR_4 - VAR_3) / 2 + VAR_3;

  if (VAR_5->num < VAR_1)
   VAR_3 = VAR_5 + 1;
  else if (VAR_5->num > VAR_1)
   VAR_4 = VAR_5 - 1;
  else
   return VAR_5->func;
 }

 return VAR_2;
}
