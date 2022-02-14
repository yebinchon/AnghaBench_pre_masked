
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_queryctrl {scalar_t__ id; } ;
struct TYPE_2__ {struct v4l2_queryctrl v; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* VAR_4 ;
 struct v4l2_queryctrl VAR_5 ;

__attribute__((used)) static int FUNC_0(struct v4l2_queryctrl *VAR_6)
{
 int VAR_7;

 if (VAR_6->id < VAR_2 ||
     VAR_6->id >= VAR_3)
  return -VAR_1;
 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
  if (VAR_4[VAR_7].v.id == VAR_6->id)
   break;
 if (VAR_7 == VAR_0) {
  *VAR_6 = VAR_5;
  return 0;
 }
 *VAR_6 = VAR_4[VAR_7].v;
 return 0;
}
