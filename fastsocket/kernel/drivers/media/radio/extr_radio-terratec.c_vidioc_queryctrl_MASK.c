
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
 int FUNC_1 (struct v4l2_queryctrl*,TYPE_1__*,int) ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
     struct v4l2_queryctrl *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_1); VAR_5++) {
  if (VAR_4->id && VAR_4->id == VAR_1[VAR_5].id) {
   FUNC_1(VAR_4, &(VAR_1[VAR_5]), sizeof(*VAR_4));
   return 0;
  }
 }
 return -VAR_0;
}
