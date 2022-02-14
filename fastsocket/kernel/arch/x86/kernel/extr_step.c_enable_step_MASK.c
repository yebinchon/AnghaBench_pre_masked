
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct task_struct*,int ) ;
 scalar_t__ FUNC_1 (struct task_struct*) ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (struct task_struct*,int ) ;
 scalar_t__ FUNC_4 (struct task_struct*,int ) ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static void FUNC_6(struct task_struct *VAR_2, bool VAR_3)
{







 if (FUNC_1(VAR_2) && VAR_3) {
  unsigned long VAR_4 = FUNC_2();

  VAR_4 |= VAR_0;
  FUNC_5(VAR_4);
  FUNC_3(VAR_2, VAR_1);
 } else if (FUNC_4(VAR_2, VAR_1)) {
  unsigned long VAR_5 = FUNC_2();

  VAR_5 &= ~VAR_0;
  FUNC_5(VAR_5);
  FUNC_0(VAR_2, VAR_1);
 }
}
