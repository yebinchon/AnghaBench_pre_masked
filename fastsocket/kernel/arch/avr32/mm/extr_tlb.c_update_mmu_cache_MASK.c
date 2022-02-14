
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_mm; } ;
typedef int pte_t ;
struct TYPE_2__ {scalar_t__ active_mm; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long,int ) ;

void FUNC_3(struct vm_area_struct *VAR_1,
        unsigned long VAR_2, pte_t VAR_3)
{
 unsigned long VAR_4;


 if (VAR_1 && VAR_0->active_mm != VAR_1->vm_mm)
  return;

 FUNC_1(VAR_4);
 FUNC_2(VAR_2, VAR_3);
 FUNC_0(VAR_4);
}
