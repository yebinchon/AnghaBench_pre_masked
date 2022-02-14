
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct task_struct*,int ) ;
 unsigned long FUNC_1 () ;
 TYPE_1__* FUNC_2 (struct task_struct*) ;
 scalar_t__ FUNC_3 (struct task_struct*,int ) ;
 scalar_t__ FUNC_4 (struct task_struct*,int ) ;
 int FUNC_5 (unsigned long) ;

void FUNC_6(struct task_struct *VAR_5)
{



 if (FUNC_4(VAR_5, VAR_1)) {
  unsigned long VAR_6 = FUNC_1();

  VAR_6 &= ~VAR_0;
  FUNC_5(VAR_6);
  FUNC_0(VAR_5, VAR_1);
 }


 FUNC_0(VAR_5, VAR_3);


 if (FUNC_3(VAR_5, VAR_2))
  FUNC_2(VAR_5)->flags &= ~VAR_4;
}
