
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int val; int val64; int string; } ;
struct v4l2_ctrl {int ncontrols; int type; TYPE_1__ cur; int val; int val64; int string; struct v4l2_ctrl** cluster; } ;





 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct v4l2_ctrl *VAR_0)
{
 int VAR_1 = 0;
 int VAR_2;

 for (VAR_2 = 0; !VAR_1 && VAR_2 < VAR_0->ncontrols; VAR_2++) {
  struct v4l2_ctrl *VAR_3 = VAR_0->cluster[VAR_2];

  if (VAR_3 == ((void*)0))
   continue;
  switch (VAR_3->type) {
  case 130:

   return 1;
  case 128:

   VAR_1 = FUNC_0(VAR_3->string, VAR_3->cur.string);
   break;
  case 129:
   VAR_1 = VAR_3->val64 != VAR_3->cur.val64;
   break;
  default:
   VAR_1 = VAR_3->val != VAR_3->cur.val;
   break;
  }
 }
 return VAR_1;
}
