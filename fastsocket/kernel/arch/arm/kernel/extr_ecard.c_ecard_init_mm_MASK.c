
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {int dummy; } ;
struct TYPE_2__ {struct mm_struct* active_mm; struct mm_struct* mm; } ;


 int VAR_0 ;
 int FUNC_0 (struct mm_struct*,struct mm_struct*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (struct mm_struct*) ;
 struct mm_struct* FUNC_2 () ;
 int FUNC_3 (struct mm_struct*) ;

__attribute__((used)) static int FUNC_4(void)
{
 struct mm_struct * VAR_2 = FUNC_2();
 struct mm_struct *VAR_3 = VAR_1->active_mm;

 if (!VAR_2)
  return -VAR_0;

 VAR_1->mm = VAR_2;
 VAR_1->active_mm = VAR_2;
 FUNC_0(VAR_3, VAR_2);
 FUNC_3(VAR_3);
 FUNC_1(VAR_2);
 return 0;
}
