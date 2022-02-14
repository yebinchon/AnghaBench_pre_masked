
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int pgd; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct page*) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 struct page* FUNC_7 (unsigned long) ;
 int FUNC_8 (int ,unsigned long) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(struct mm_struct *VAR_3, unsigned long VAR_4, unsigned VAR_5)
{
 struct page *VAR_6 = FUNC_7(VAR_4);

 if (FUNC_2(FUNC_9(VAR_3->pgd))) {
  FUNC_3(VAR_6);

  if (!FUNC_1(VAR_6)) {
   FUNC_6(FUNC_4(FUNC_0((unsigned long)VAR_4)));
   if (VAR_5 == VAR_1 && VAR_2)
    FUNC_8(VAR_0, VAR_4);
  } else {


   FUNC_5();
  }
 }
}
