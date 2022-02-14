
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_queryctrl {scalar_t__ id; } ;
struct TYPE_4__ {scalar_t__ id; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct v4l2_queryctrl*,TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_queryctrl *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
  if (VAR_1->id && VAR_1->id == VAR_0[VAR_2].id) {
   FUNC_1(VAR_1, &(VAR_0[VAR_2]), sizeof(*VAR_1));
   return 0;
  }
 }


 return 1;
}
