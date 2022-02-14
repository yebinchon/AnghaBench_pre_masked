
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct page {int flags; } ;
typedef int pte_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 (unsigned long,unsigned long) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (unsigned long) ;
 scalar_t__ FUNC_9 (struct page*) ;
 unsigned long FUNC_10 (struct page*) ;
 struct page* FUNC_11 (unsigned long) ;
 int FUNC_12 (unsigned long) ;
 unsigned long FUNC_13 (int ) ;
 int FUNC_14 (int ,int *) ;
 scalar_t__ FUNC_15 (int ,int *) ;

void
FUNC_16(struct vm_area_struct * VAR_4, unsigned long VAR_5, pte_t VAR_6)
{
 unsigned long VAR_7 = FUNC_13(VAR_6);
 struct page *VAR_8;

 if (!FUNC_12(VAR_7))
  return;

 VAR_8 = FUNC_11(VAR_7);



 FUNC_8(VAR_5);
 FUNC_7(VAR_5);
 if (!FUNC_0(VAR_8) && !FUNC_15(VAR_1, &VAR_8->flags)
     && (VAR_4->vm_flags & VAR_3) != 0) {
      unsigned long VAR_9 = (unsigned long) FUNC_9(VAR_8);
  FUNC_1(VAR_9);
  FUNC_4(VAR_9);
  FUNC_14(VAR_1, &VAR_8->flags);
 }

}
