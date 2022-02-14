
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ VAR_1 ;
 void* FUNC_2 (struct page*,unsigned long) ;
 int FUNC_3 () ;
 int FUNC_4 (void*,void const*,unsigned long) ;
 scalar_t__ FUNC_5 (struct page*) ;

void FUNC_6(struct vm_area_struct *VAR_2,
 struct page *VAR_3, unsigned long VAR_4, void *VAR_5, const void *VAR_6,
 unsigned long VAR_7)
{
 if (VAR_1 &&
     FUNC_5(VAR_3) && !FUNC_0(VAR_3)) {
  void *VAR_8 = FUNC_2(VAR_3, VAR_4) + (VAR_4 & ~VAR_0);
  FUNC_4(VAR_5, VAR_8, VAR_7);
  FUNC_3();
 } else {
  FUNC_4(VAR_5, VAR_6, VAR_7);
  if (VAR_1)
   FUNC_1(VAR_3);
 }
}
