
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread_info {scalar_t__* fpsaved; scalar_t__ pcr_reg; int * user_cntd1; int user_cntd0; TYPE_1__* task; } ;
struct mm_struct {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct thread_info*,int ) ;
 struct thread_info* FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct thread_info*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (struct thread_info*,int ) ;
 int FUNC_8 (struct mm_struct*) ;
 int FUNC_9 (int ) ;

void FUNC_10(void)
{
 struct thread_info *VAR_5 = FUNC_1();
 struct mm_struct *VAR_6;

 if (FUNC_7(VAR_5, VAR_2)) {
  FUNC_0(VAR_5, VAR_2);
  if (FUNC_7(VAR_5, VAR_1))
   FUNC_0(VAR_5, VAR_1);
  else
   FUNC_5(VAR_5, VAR_1);
 }

 VAR_6 = VAR_5->task->mm;
 if (VAR_6)
  FUNC_8(VAR_6);

 FUNC_4(0);


 if (FUNC_6(VAR_3)) {
  VAR_5->user_cntd0 = *(VAR_5->user_cntd1 = ((void*)0));
  VAR_5->pcr_reg = 0;
  FUNC_9(0);
 }


 VAR_5->fpsaved[0] = 0;

 if (FUNC_2() != VAR_0)
  FUNC_3(VAR_4);
}
