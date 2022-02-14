
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct TYPE_5__ {int lock; } ;
struct mm_struct {TYPE_2__ context; } ;
struct TYPE_4__ {struct mm_struct* active_mm; } ;


 int FUNC_0 (TYPE_2__) ;
 int FUNC_1 (TYPE_2__) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 (struct mm_struct*) ;
 struct mm_struct VAR_2 ;
 int FUNC_5 (struct mm_struct*) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 scalar_t__ FUNC_8 (int) ;

void FUNC_9(int VAR_3, struct pt_regs *VAR_4)
{
 struct mm_struct *VAR_5;
 unsigned long VAR_6;

 FUNC_3(1 << VAR_3);




 VAR_5 = VAR_1->active_mm;
 if (FUNC_8(!VAR_5 || (VAR_5 == &VAR_2)))
  return;

 FUNC_6(&VAR_5->context.lock, VAR_6);

 if (FUNC_8(!FUNC_1(VAR_5->context)))
  FUNC_4(VAR_5);

 FUNC_7(&VAR_5->context.lock, VAR_6);

 FUNC_5(VAR_5);
 FUNC_2(FUNC_0(VAR_5->context),
         VAR_0);
}
