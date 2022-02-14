
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct page*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,unsigned long) ;
 unsigned long FUNC_2 (unsigned long) ;
 struct page* FUNC_3 (void*) ;

__attribute__((used)) static void *FUNC_4(unsigned long VAR_2)
{
 void *VAR_3;
 struct page *VAR_4;
 unsigned long VAR_5, VAR_6, VAR_7;

 VAR_5 = FUNC_2(VAR_2);
 VAR_3 = (void *)FUNC_1(VAR_0|VAR_1, VAR_5);
 if (!VAR_3)
  return ((void*)0);

 VAR_6 = 1 << VAR_5;
 VAR_4 = FUNC_3(VAR_3);
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++)
  FUNC_0(VAR_4 + VAR_7);
 return VAR_3;
}
