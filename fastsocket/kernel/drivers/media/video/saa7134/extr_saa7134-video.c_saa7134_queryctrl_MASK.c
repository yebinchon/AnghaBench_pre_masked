
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
 scalar_t__ VAR_4 ;
 struct v4l2_queryctrl* FUNC_0 (scalar_t__) ;
 struct v4l2_queryctrl const VAR_5 ;

int FUNC_1(struct file *VAR_6, void *VAR_7, struct v4l2_queryctrl *VAR_8)
{
 const struct v4l2_queryctrl *VAR_9;

 if ((VAR_8->id < VAR_1 ||
      VAR_8->id >= VAR_2) &&
     (VAR_8->id < VAR_3 ||
      VAR_8->id >= VAR_4))
  return -VAR_0;
 VAR_9 = FUNC_0(VAR_8->id);
 *VAR_8 = (((void*)0) != VAR_9) ? *VAR_9 : VAR_5;
 return 0;
}
