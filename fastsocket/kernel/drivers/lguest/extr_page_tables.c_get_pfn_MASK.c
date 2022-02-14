
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long,int,int,struct page**) ;
 unsigned long FUNC_1 (struct page*) ;

__attribute__((used)) static unsigned long FUNC_2(unsigned long VAR_1, int VAR_2)
{
 struct page *VAR_3;


 if (FUNC_0(VAR_1 << VAR_0, 1, VAR_2, &VAR_3) == 1)
  return FUNC_1(VAR_3);


 return -1UL;
}
