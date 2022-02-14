
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_int_ioctl_desc {scalar_t__ num; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct v4l2_int_ioctl_desc *VAR_2 = VAR_0, *VAR_3 = VAR_1;

 if (VAR_2->num > VAR_3->num)
  return 1;

 if (VAR_2->num < VAR_3->num)
  return -1;

 return 0;
}
