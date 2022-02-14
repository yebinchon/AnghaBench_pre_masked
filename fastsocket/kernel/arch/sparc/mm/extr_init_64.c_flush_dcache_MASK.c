
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {unsigned long flags; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct page*,int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 () ;
 struct page* FUNC_3 (unsigned long) ;
 int FUNC_4 () ;
 int FUNC_5 (struct page*,int) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_3)
{
 struct page *VAR_4;

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4) {
  unsigned long VAR_5;

  VAR_5 = VAR_4->flags;
  if (VAR_5 & (1UL << VAR_2)) {
   int VAR_6 = ((VAR_5 >> VAR_1) &
       VAR_0);
   int VAR_7 = FUNC_2();




   if (VAR_6 == VAR_7)
    FUNC_1(VAR_4);
   else
    FUNC_5(VAR_4, VAR_6);

   FUNC_0(VAR_4, VAR_6);

   FUNC_4();
  }
 }
}
