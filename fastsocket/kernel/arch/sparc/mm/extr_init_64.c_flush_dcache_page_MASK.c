
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; } ;
struct address_space {int dummy; } ;


 int VAR_0 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 () ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct address_space*) ;
 struct address_space* FUNC_5 (struct page*) ;
 int FUNC_6 () ;
 int FUNC_7 (struct page*,int) ;
 int FUNC_8 (struct page*,int) ;
 int FUNC_9 (int ,int *) ;
 scalar_t__ VAR_2 ;

void FUNC_10(struct page *VAR_3)
{
 struct address_space *VAR_4;
 int VAR_5;

 if (VAR_2 == VAR_1)
  return;





 if (VAR_3 == FUNC_0(0))
  return;

 VAR_5 = FUNC_3();

 VAR_4 = FUNC_5(VAR_3);
 if (VAR_4 && !FUNC_4(VAR_4)) {
  int VAR_6 = FUNC_9(VAR_0, &VAR_3->flags);
  if (VAR_6) {
   int VAR_7 = FUNC_1(VAR_3);

   if (VAR_7 == VAR_5)
    goto out;
   FUNC_8(VAR_3, VAR_7);
  }
  FUNC_7(VAR_3, VAR_5);
 } else {





  FUNC_2(VAR_3);
 }

out:
 FUNC_6();
}
