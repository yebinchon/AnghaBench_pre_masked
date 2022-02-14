
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_mm; } ;
struct TYPE_4__ {unsigned long pte_low; unsigned long pte_high; } ;
typedef TYPE_1__ pte_t ;
struct TYPE_5__ {scalar_t__ active_mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_0 (unsigned long,int ) ;
 TYPE_2__* VAR_7 ;
 unsigned long FUNC_1 () ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;

void FUNC_4(struct vm_area_struct *VAR_8, unsigned long VAR_9, pte_t VAR_10)
{
 unsigned long VAR_11, VAR_12, VAR_13;




 if (VAR_8 && VAR_7->active_mm != VAR_8->vm_mm)
  return;

 FUNC_3(VAR_11);


 VAR_13 = VAR_9 & VAR_4;
 FUNC_0(VAR_13, VAR_2);


 FUNC_0(FUNC_1(), VAR_1);

 VAR_12 = VAR_10.pte_low;
 VAR_12 &= VAR_5;




 FUNC_0(VAR_12, VAR_3);


 asm volatile("ldtlb": : : "memory");
 FUNC_2(VAR_11);
}
