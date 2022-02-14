
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {TYPE_1__* vm_mm; } ;
struct TYPE_2__ {int context; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,unsigned long) ;

void
FUNC_4(struct vm_area_struct *VAR_0, unsigned long VAR_1, unsigned long VAR_2)
{
 FUNC_0(!VAR_0->vm_mm->context);

 if (FUNC_2(FUNC_3(VAR_0, VAR_1, VAR_2)))
  FUNC_1(VAR_0, VAR_1);

}
