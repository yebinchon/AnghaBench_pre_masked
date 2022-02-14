
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int pte_t ;


 int VAR_0 ;
 struct page* FUNC_0 (int ) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_1 (unsigned long) ;
 scalar_t__ VAR_3 ;
 int * FUNC_2 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;
 struct page* FUNC_4 (int ) ;

struct page *FUNC_5(struct mm_struct *VAR_4, unsigned long VAR_5, int VAR_6)
{
 struct page *VAR_7;
 pte_t *VAR_8;

 if (FUNC_1(VAR_5) != VAR_3)
  return FUNC_0(-VAR_0);

 VAR_8 = FUNC_2(VAR_4, VAR_5);
 if (!VAR_8 || FUNC_3(*VAR_8))
  return ((void*)0);
 VAR_7 = FUNC_4(*VAR_8);
 VAR_7 += ((VAR_5 & ~VAR_1) >> VAR_2);
 return VAR_7;
}
