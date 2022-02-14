
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_queryctrl {scalar_t__ id; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct v4l2_queryctrl v; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_1__* VAR_5 ;
 struct v4l2_queryctrl VAR_6 ;

__attribute__((used)) static int FUNC_0 (struct file *VAR_7, void *VAR_8,
       struct v4l2_queryctrl *VAR_9)
{
 int VAR_10;

 if (VAR_9->id < VAR_3 ||
  VAR_9->id >= VAR_4)
  return -VAR_1;
 if (VAR_9->id == VAR_2) {
  for (VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
   if (VAR_5[VAR_10].v.id == VAR_9->id)
    break;
  }
  if (VAR_10 == VAR_0)
   return -VAR_1;
  *VAR_9 = VAR_5[VAR_10].v;
 } else
  *VAR_9 = VAR_6;
 return 0;
}
