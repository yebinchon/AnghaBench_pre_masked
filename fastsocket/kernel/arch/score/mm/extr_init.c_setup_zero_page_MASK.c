
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*) ;
 struct page* FUNC_3 (void*) ;

__attribute__((used)) static unsigned long FUNC_4(void)
{
 struct page *VAR_3;

 VAR_2 = FUNC_1(VAR_0 | VAR_1, 0);
 if (!VAR_2)
  FUNC_2("Oh boy, that early out of memory?");

 VAR_3 = FUNC_3((void *) VAR_2);
 FUNC_0(VAR_3);

 return 1UL;
}
