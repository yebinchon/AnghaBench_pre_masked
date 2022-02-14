
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned long exec_limit; int user_cs; } ;
struct mm_struct {TYPE_1__ context; } ;
struct TYPE_4__ {struct mm_struct* mm; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,struct mm_struct*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct mm_struct *VAR_1, unsigned long VAR_2)
{
 VAR_1->context.exec_limit = VAR_2;
 FUNC_3(&VAR_1->context.user_cs, VAR_2);
 if (VAR_1 == VAR_0->mm) {
  int VAR_3;

  VAR_3 = FUNC_0();
  FUNC_1(VAR_3, VAR_1);
  FUNC_2();
 }
}
