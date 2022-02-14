
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ctrl {int ncontrols; int flags; struct v4l2_ctrl** cluster; TYPE_1__* ops; scalar_t__ has_new; } ;
struct TYPE_2__ {int (* try_ctrl ) (struct v4l2_ctrl*) ;int (* s_ctrl ) (struct v4l2_ctrl*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct v4l2_ctrl*) ;
 int FUNC_1 (struct v4l2_ctrl*) ;
 int FUNC_2 (struct v4l2_ctrl*) ;
 int FUNC_3 (struct v4l2_ctrl*) ;
 int FUNC_4 (struct v4l2_ctrl*) ;
 int FUNC_5 (struct v4l2_ctrl*) ;

__attribute__((used)) static int FUNC_6(struct v4l2_ctrl *VAR_2, bool VAR_3)
{
 bool VAR_4 = !VAR_3;
 int VAR_5 = 0;
 int VAR_6;





 for (VAR_6 = 0; !VAR_5 && VAR_6 < VAR_2->ncontrols; VAR_6++) {
  struct v4l2_ctrl *VAR_7 = VAR_2->cluster[VAR_6];

  if (VAR_7 == ((void*)0))
   continue;

  if (VAR_7->has_new) {


   if (VAR_3 && (VAR_7->flags & VAR_1))
    return -VAR_0;


   if (!VAR_3)
    VAR_5 = FUNC_5(VAR_7);
   continue;
  }



  VAR_4 = 1;
  FUNC_1(VAR_7);
 }




 if (!VAR_5 && VAR_2->ops->try_ctrl && VAR_4)
  VAR_5 = VAR_2->ops->try_ctrl(VAR_2);


 if (!VAR_5 && VAR_3 && FUNC_0(VAR_2)) {
  VAR_5 = VAR_2->ops->s_ctrl(VAR_2);

  if (!VAR_5)
   for (VAR_6 = 0; VAR_6 < VAR_2->ncontrols; VAR_6++)
    FUNC_2(VAR_2->cluster[VAR_6]);
 }
 return VAR_5;
}
