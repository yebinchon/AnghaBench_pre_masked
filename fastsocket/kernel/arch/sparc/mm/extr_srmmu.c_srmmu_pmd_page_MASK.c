
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pmd_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 struct page* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static struct page *FUNC_4(pmd_t VAR_2)
{

 if (FUNC_3(FUNC_2(VAR_2)))
  FUNC_0();
 return FUNC_1((FUNC_2(VAR_2) & VAR_1) >> (VAR_0-4));
}
