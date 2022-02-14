
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {scalar_t__ id; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 struct v4l2_queryctrl* FUNC_0 (scalar_t__) ;
 struct v4l2_queryctrl VAR_4 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_5, void *VAR_6,
     struct v4l2_queryctrl *VAR_7)
{
 const struct v4l2_queryctrl *VAR_8;

 if (VAR_7->id < VAR_2 ||
     VAR_7->id >= VAR_3)
  return -VAR_0;
 if (VAR_7->id == VAR_1) {
  VAR_8 = FUNC_0(VAR_7->id);
  *VAR_7 = *VAR_8;
 } else
  *VAR_7 = VAR_4;
 return 0;
}
