
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct page {int flags; } ;
typedef int pte_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 struct page* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int *) ;

void
FUNC_8(struct vm_area_struct *VAR_1, unsigned long VAR_2, pte_t VAR_3)
{
 struct page *VAR_4 = FUNC_6(VAR_3);

 if (FUNC_5(FUNC_3(VAR_4)) && FUNC_2(VAR_4) &&
     FUNC_7(VAR_0, &VAR_4->flags)) {

  FUNC_1(VAR_4);
  FUNC_0(VAR_0, &VAR_4->flags);
 } else if (FUNC_4())
  FUNC_1(VAR_4);
}
