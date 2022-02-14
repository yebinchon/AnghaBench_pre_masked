
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int flags; scalar_t__ type; size_t minimum; size_t maximum; } ;
struct v4l2_ext_control {size_t value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

int FUNC_0(struct v4l2_ext_control *VAR_10, struct v4l2_queryctrl *VAR_11,
  const char * const *VAR_12)
{
 if (VAR_11->flags & VAR_3)
  return -VAR_1;
 if (VAR_11->flags & VAR_4)
  return -VAR_0;
 if (VAR_11->type == VAR_9)
  return 0;
 if (VAR_11->type == VAR_5 ||
     VAR_11->type == VAR_7 ||
     VAR_11->type == VAR_6)
  return 0;
 if (VAR_10->value < VAR_11->minimum || VAR_10->value > VAR_11->maximum)
  return -VAR_2;
 if (VAR_11->type == VAR_8 && VAR_12 != ((void*)0)) {
  if (VAR_12[VAR_10->value] == ((void*)0) ||
      VAR_12[VAR_10->value][0] == '\0')
   return -VAR_1;
 }
 return 0;
}
