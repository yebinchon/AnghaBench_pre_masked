
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (struct page*) ;
 unsigned long FUNC_6 (struct page*) ;

void FUNC_7(struct vm_area_struct *VAR_0, struct page *VAR_1, unsigned long VAR_2)
{
 unsigned long VAR_3;


 if (FUNC_1())
  return;




 VAR_3 = FUNC_6(VAR_1);
 if (FUNC_2()) {
  FUNC_3(VAR_0, VAR_2, VAR_3);
 } else {




  FUNC_4(VAR_3, VAR_2);
 }






 FUNC_0(FUNC_5(VAR_1));
}
