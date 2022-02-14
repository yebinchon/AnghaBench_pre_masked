
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; } ;


 unsigned long FUNC_0 (unsigned long) ;
 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int *) ;
 struct page* FUNC_2 (unsigned long) ;

void
FUNC_3(void *VAR_2, size_t VAR_3)
{
 unsigned long VAR_4, VAR_5;

 VAR_4 = FUNC_0((unsigned long) VAR_2);
 VAR_5 = (unsigned long) VAR_2 + VAR_3;
 while (VAR_4 + VAR_0 <= VAR_5) {
  struct page *VAR_6 = FUNC_2(VAR_4);
  FUNC_1(VAR_1, &VAR_6->flags);
  VAR_4 += VAR_0;
 }
}
