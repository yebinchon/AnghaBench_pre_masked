
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct page {int flags; } ;
struct address_space {int dummy; } ;
typedef int pte_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct address_space*,struct page*) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct address_space*,struct vm_area_struct*,unsigned long,unsigned long) ;
 struct address_space* FUNC_4 (struct page*) ;
 struct page* FUNC_5 (unsigned long) ;
 int FUNC_6 (unsigned long) ;
 unsigned long FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;

void FUNC_9(struct vm_area_struct *VAR_2, unsigned long VAR_3, pte_t VAR_4)
{
 unsigned long VAR_5 = FUNC_7(VAR_4);
 struct address_space *VAR_6;
 struct page *VAR_7;

 if (!FUNC_6(VAR_5))
  return;

 VAR_7 = FUNC_5(VAR_5);
 VAR_6 = FUNC_4(VAR_7);

 if (FUNC_8(VAR_0, &VAR_7->flags))
  FUNC_0(VAR_6, VAR_7);

 if (VAR_6) {
  if (FUNC_2())
   FUNC_3(VAR_6, VAR_2, VAR_3, VAR_5);
  else if (VAR_2->vm_flags & VAR_1)
   FUNC_1();
 }
}
