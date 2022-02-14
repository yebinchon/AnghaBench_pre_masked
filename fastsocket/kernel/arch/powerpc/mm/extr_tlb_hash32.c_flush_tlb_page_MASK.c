
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {struct mm_struct* vm_mm; } ;
struct TYPE_2__ {int id; } ;
struct mm_struct {TYPE_1__ context; } ;
typedef int pmd_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,unsigned long,int ,int) ;
 struct mm_struct VAR_3 ;
 int FUNC_2 (struct mm_struct*,unsigned long) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,unsigned long) ;

void FUNC_7(struct vm_area_struct *VAR_4, unsigned long VAR_5)
{
 struct mm_struct *VAR_6;
 pmd_t *VAR_7;

 if (VAR_1 == 0) {
  FUNC_0(VAR_5);
  return;
 }
 VAR_6 = (VAR_5 < VAR_2)? VAR_4->vm_mm: &VAR_3;
 VAR_7 = FUNC_4(FUNC_6(FUNC_2(VAR_6, VAR_5), VAR_5), VAR_5);
 if (!FUNC_3(*VAR_7))
  FUNC_1(VAR_6->context.id, VAR_5, FUNC_5(*VAR_7), 1);
 VAR_0;
}
