
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct page {int flags; } ;
typedef int pte_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 struct page* FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long) ;
 unsigned long FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int) ;

void FUNC_9(struct vm_area_struct *VAR_2, unsigned long VAR_3,
  pte_t VAR_4)
{
 struct page *VAR_5;
 unsigned long VAR_6, VAR_7;
 int VAR_8 = (VAR_2->vm_flags & VAR_1);

 VAR_6 = FUNC_6(VAR_4);
 if (FUNC_8(!FUNC_5(VAR_6)))
  return;
 VAR_5 = FUNC_4(VAR_6);
 if (FUNC_3(VAR_5) && FUNC_7(VAR_0, &VAR_5->flags)) {
  VAR_7 = (unsigned long) FUNC_2(VAR_5);
  if (VAR_8)
   FUNC_1(VAR_7);
  FUNC_0(VAR_0, &VAR_5->flags);
 }
}
