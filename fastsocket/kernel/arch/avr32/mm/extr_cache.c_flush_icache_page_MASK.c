
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; } ;
struct page {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned long,scalar_t__) ;
 void* FUNC_1 (struct page*) ;

void FUNC_2(struct vm_area_struct *VAR_2, struct page *VAR_3)
{
 if (VAR_2->vm_flags & VAR_1) {
  void *VAR_4 = FUNC_1(VAR_3);
  FUNC_0((unsigned long)VAR_4, (unsigned long)VAR_4 + VAR_0);
 }
}
