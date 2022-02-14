
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct address_space*,struct page*) ;
 int FUNC_2 (struct address_space*,struct page*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct address_space*) ;
 struct address_space* FUNC_6 (struct page*) ;
 int FUNC_7 (int ,int *) ;

void FUNC_8(struct page *VAR_1)
{
 struct address_space *VAR_2 = FUNC_6(VAR_1);


 if (!FUNC_0(VAR_1) && VAR_2 && !FUNC_5(VAR_2))
  FUNC_7(VAR_0, &VAR_1->flags);
 else

 {
  FUNC_2(VAR_2, VAR_1);
  if (VAR_2 && FUNC_4())
   FUNC_1(VAR_2, VAR_1);
  else if (VAR_2)
   FUNC_3();
 }
}
