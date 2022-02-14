
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct vm_area_struct {int vm_mm; } ;
struct TYPE_5__ {int pte; } ;
typedef TYPE_1__ pte_t ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__) ;
 int FUNC_2 (int ,unsigned long*) ;

int FUNC_3(struct vm_area_struct *VAR_1,
         unsigned long VAR_2, pte_t *VAR_3)
{
 int VAR_4 = 0;

 if (FUNC_1(*VAR_3))
  VAR_4 = FUNC_2(VAR_0,
      (unsigned long *) &VAR_3->pte);

 if (VAR_4)
  FUNC_0(VAR_1->vm_mm, VAR_2, VAR_3);

 return VAR_4;
}
