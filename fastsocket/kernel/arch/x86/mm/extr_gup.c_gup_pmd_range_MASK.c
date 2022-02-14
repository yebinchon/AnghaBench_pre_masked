
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pud_t ;
typedef int pmd_t ;


 int FUNC_0 (int ,unsigned long,unsigned long,int,struct page**,int*) ;
 int FUNC_1 (int ,unsigned long,unsigned long,int,struct page**,int*) ;
 unsigned long FUNC_2 (unsigned long,unsigned long) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(pud_t VAR_0, unsigned long VAR_1, unsigned long VAR_2,
  int VAR_3, struct page **VAR_4, int *VAR_5)
{
 unsigned long VAR_6;
 pmd_t *VAR_7;

 VAR_7 = FUNC_5(&VAR_0, VAR_1);
 do {
  pmd_t VAR_8 = *VAR_7;

  VAR_6 = FUNC_2(VAR_1, VAR_2);
  if (FUNC_4(VAR_8) || FUNC_6(VAR_8))
   return 0;
  if (FUNC_7(FUNC_3(VAR_8))) {
   if (!FUNC_0(VAR_8, VAR_1, VAR_6, VAR_3, VAR_4, VAR_5))
    return 0;
  } else {
   if (!FUNC_1(VAR_8, VAR_1, VAR_6, VAR_3, VAR_4, VAR_5))
    return 0;
  }
 } while (VAR_7++, VAR_1 = VAR_6, VAR_1 != VAR_2);

 return 1;
}
