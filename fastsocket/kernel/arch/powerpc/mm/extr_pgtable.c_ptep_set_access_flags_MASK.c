
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; int vm_mm; } ;
typedef int pte_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (struct vm_area_struct*,unsigned long) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,struct vm_area_struct*,int) ;

int FUNC_5(struct vm_area_struct *VAR_1, unsigned long VAR_2,
     pte_t *VAR_3, pte_t VAR_4, int VAR_5)
{
 int VAR_6;
 VAR_4 = FUNC_4(VAR_4, VAR_1, VAR_5);
 VAR_6 = !FUNC_3(*(VAR_3), VAR_4);
 if (VAR_6) {
  if (!(VAR_1->vm_flags & VAR_0))
   FUNC_1(VAR_1->vm_mm, VAR_2);
  FUNC_0(VAR_3, VAR_4);
  FUNC_2(VAR_1, VAR_2);
 }
 return VAR_6;
}
