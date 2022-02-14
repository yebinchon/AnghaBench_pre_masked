
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct page {int dummy; } ;
typedef int pte_t ;


 int FUNC_0 (struct page*) ;
 unsigned long VAR_0 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (unsigned long,unsigned long) ;
 struct page* FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 unsigned long FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int) ;

void FUNC_10(struct vm_area_struct *VAR_3, unsigned long VAR_4,
 pte_t VAR_5)
{
 struct page *VAR_6;
 unsigned long VAR_7, VAR_8;
 int VAR_9 = (VAR_3->vm_flags & VAR_1) && !VAR_2;

 VAR_7 = FUNC_8(VAR_5);
 if (FUNC_9(!FUNC_7(VAR_7)))
  return;
 VAR_6 = FUNC_6(VAR_7);
 if (FUNC_4(VAR_6) && FUNC_1(VAR_6)) {
  VAR_8 = (unsigned long) FUNC_3(VAR_6);
  if (VAR_9 || FUNC_5(VAR_8, VAR_4 & VAR_0))
   FUNC_2(VAR_8);
  FUNC_0(VAR_6);
 }
}
