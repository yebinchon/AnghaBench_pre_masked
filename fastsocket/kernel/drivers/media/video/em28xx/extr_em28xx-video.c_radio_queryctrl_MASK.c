
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_queryctrl {scalar_t__ id; } ;
struct file {int dummy; } ;
struct TYPE_4__ {scalar_t__ id; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (struct v4l2_queryctrl*,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5,
      struct v4l2_queryctrl *VAR_6)
{
 int VAR_7;

 if (VAR_6->id < VAR_1 ||
  VAR_6->id >= VAR_2)
  return -VAR_0;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++) {
  if (VAR_6->id && VAR_6->id == VAR_3[VAR_7].id) {
   FUNC_1(VAR_6, &(VAR_3[VAR_7]), sizeof(*VAR_6));
   return 0;
  }
 }

 return -VAR_0;
}
