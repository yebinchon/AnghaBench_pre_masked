
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct task_struct {TYPE_2__* mm; int comm; } ;
struct TYPE_3__ {scalar_t__ size; int ldt; } ;
struct TYPE_4__ {TYPE_1__ context; } ;


 int FUNC_0 () ;
 int FUNC_1 (char*,int ,int ,scalar_t__) ;

void FUNC_2(struct task_struct *VAR_0)
{
 if (VAR_0->mm) {
  if (VAR_0->mm->context.size) {
   FUNC_1("WARNING: dead process %8s still has LDT? <%p/%d>\n",
     VAR_0->comm,
     VAR_0->mm->context.ldt,
     VAR_0->mm->context.size);
   FUNC_0();
  }
 }
}
