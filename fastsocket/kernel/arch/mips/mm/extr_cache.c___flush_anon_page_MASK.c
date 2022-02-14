
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (unsigned long) ;
 void* FUNC_2 (struct page*,unsigned long) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;

void FUNC_7(struct page *VAR_0, unsigned long VAR_1)
{
 unsigned long VAR_2 = (unsigned long) FUNC_4(VAR_0);

 if (FUNC_6(VAR_2, VAR_1)) {
  if (FUNC_5(VAR_0) && !FUNC_0(VAR_0)) {
   void *VAR_3;

   VAR_3 = FUNC_2(VAR_0, VAR_1);
   FUNC_1((unsigned long)VAR_3);
   FUNC_3();
  } else
   FUNC_1(VAR_2);
 }
}
