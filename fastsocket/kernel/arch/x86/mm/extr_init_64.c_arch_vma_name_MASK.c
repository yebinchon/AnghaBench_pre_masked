
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {long vm_start; TYPE_2__* vm_mm; } ;
struct TYPE_3__ {scalar_t__ vdso; } ;
struct TYPE_4__ {TYPE_1__ context; } ;


 struct vm_area_struct VAR_0 ;

const char *FUNC_0(struct vm_area_struct *VAR_1)
{
 if (VAR_1->vm_mm && VAR_1->vm_start == (long)VAR_1->vm_mm->context.vdso)
  return "[vdso]";
 if (VAR_1 == &VAR_0)
  return "[vsyscall]";
 return ((void*)0);
}
