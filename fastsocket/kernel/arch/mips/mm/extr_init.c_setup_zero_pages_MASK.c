
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int,unsigned int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct page*,unsigned int) ;
 struct page* FUNC_4 (void*) ;
 unsigned long VAR_6 ;

unsigned long FUNC_5(void)
{
 unsigned int VAR_7;
 unsigned long VAR_8;
 struct page *VAR_9;

 if (VAR_4)
  VAR_7 = 3;
 else
  VAR_7 = 0;

 VAR_5 = FUNC_1(VAR_0 | VAR_3, VAR_7);
 if (!VAR_5)
  FUNC_2("Oh boy, that early out of memory?");

 VAR_9 = FUNC_4((void *)VAR_5);
 FUNC_3(VAR_9, VAR_7);
 while (VAR_9 < FUNC_4((void *)(VAR_5 + (VAR_2 << VAR_7)))) {
  FUNC_0(VAR_9);
  VAR_9++;
 }

 VAR_8 = VAR_2 << VAR_7;
 VAR_6 = (VAR_8 - 1) & VAR_1;

 return 1UL << VAR_7;
}
