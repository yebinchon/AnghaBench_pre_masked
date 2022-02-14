
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*,unsigned long) ;
 unsigned long FUNC_2 (unsigned long) ;
 struct page* FUNC_3 (unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_0, unsigned long VAR_1)
{
 struct page *VAR_2;
 unsigned long VAR_3, VAR_4, VAR_5;

 VAR_3 = FUNC_2(VAR_1);
 VAR_4 = 1 << VAR_3;
 VAR_2 = FUNC_3(VAR_0);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  FUNC_0(VAR_2 + VAR_5);
 FUNC_1(VAR_2, VAR_3);
}
