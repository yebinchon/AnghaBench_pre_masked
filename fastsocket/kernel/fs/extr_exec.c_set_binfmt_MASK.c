
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mm_struct {struct linux_binfmt* binfmt; } ;
struct linux_binfmt {int module; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ) ;

void FUNC_2(struct linux_binfmt *VAR_1)
{
 struct mm_struct *VAR_2 = VAR_0->mm;

 if (VAR_2->binfmt)
  FUNC_1(VAR_2->binfmt->module);

 VAR_2->binfmt = VAR_1;
 if (VAR_1)
  FUNC_0(VAR_1->module);
}
