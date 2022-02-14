
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct unw_frame_info {int dummy; } ;
struct task_struct {scalar_t__ state; TYPE_2__* sighand; TYPE_1__* signal; } ;
struct TYPE_4__ {int siglock; } ;
struct TYPE_3__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct unw_frame_info*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct task_struct*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;
 int FUNC_6 (struct task_struct*,int ) ;
 int FUNC_7 (struct unw_frame_info*,struct task_struct*) ;

void
FUNC_8 (struct task_struct *VAR_6)
{
 int VAR_7 = 0;
 struct unw_frame_info VAR_8;
 FUNC_1(&VAR_5);
 if (VAR_6->signal) {
  FUNC_4(&VAR_6->sighand->siglock);
  if (VAR_6->state == VAR_1 &&
      !FUNC_6(VAR_6, VAR_3)) {
   FUNC_3(VAR_6);

   VAR_6->state = VAR_2;
   VAR_7 = 1;
  }
  FUNC_5(&VAR_6->sighand->siglock);
 }
 FUNC_2(&VAR_5);

 if (!VAR_7)
  return;

 FUNC_7(&VAR_8, VAR_6);
 FUNC_0(&VAR_8, VAR_4);





 FUNC_1(&VAR_5);
 if (VAR_6->signal) {
  FUNC_4(&VAR_6->sighand->siglock);
  if (VAR_6->state == VAR_2 &&
      (VAR_6->signal->flags & VAR_0)) {
   VAR_6->state = VAR_1;
  }
  FUNC_5(&VAR_6->sighand->siglock);
 }
 FUNC_2(&VAR_5);
}
