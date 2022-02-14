
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int val; } ;
struct v4l2_ctrl {int flags; int ncontrols; int has_new; TYPE_1__ cur; int val; struct v4l2_ctrl** cluster; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_ctrl*,int) ;
 int FUNC_1 (struct v4l2_ctrl*) ;
 int FUNC_2 (struct v4l2_ctrl*) ;

__attribute__((used)) static int FUNC_3(struct v4l2_ctrl *VAR_2, s32 *VAR_3)
{
 struct v4l2_ctrl *VAR_4 = VAR_2->cluster[0];
 int VAR_5;
 int VAR_6;

 if (VAR_2->flags & VAR_1)
  return -VAR_0;

 FUNC_1(VAR_2);


 for (VAR_6 = 0; VAR_6 < VAR_4->ncontrols; VAR_6++)
  if (VAR_4->cluster[VAR_6])
   VAR_4->cluster[VAR_6]->has_new = 0;

 VAR_2->val = *VAR_3;
 VAR_2->has_new = 1;
 VAR_5 = FUNC_0(VAR_4, 0);
 if (!VAR_5)
  VAR_5 = FUNC_0(VAR_4, 1);
 *VAR_3 = VAR_2->cur.val;
 FUNC_2(VAR_2);
 return VAR_5;
}
