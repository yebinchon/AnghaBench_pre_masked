
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_queryctrl {scalar_t__ id; int flags; } ;
struct cx88_core {int tvnorm; } ;
struct TYPE_2__ {struct v4l2_queryctrl v; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 struct v4l2_queryctrl VAR_8 ;

int FUNC_0(struct cx88_core *VAR_9, struct v4l2_queryctrl *VAR_10)
{
 int VAR_11;

 if (VAR_10->id < VAR_2 ||
     VAR_10->id >= VAR_4)
  return -VAR_1;
 for (VAR_11 = 0; VAR_11 < VAR_0; VAR_11++)
  if (VAR_7[VAR_11].v.id == VAR_10->id)
   break;
 if (VAR_11 == VAR_0) {
  *VAR_10 = VAR_8;
  return 0;
 }
 *VAR_10 = VAR_7[VAR_11].v;

 if (VAR_7[VAR_11].v.id == VAR_3 &&
     VAR_9->tvnorm & VAR_6)
  VAR_10->flags |= VAR_5;

 return 0;
}
