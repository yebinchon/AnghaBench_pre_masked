
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int pte_t ;
typedef int pmd_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 struct page* FUNC_0 (int ) ;

struct page *
FUNC_1(struct mm_struct *VAR_2, unsigned long VAR_3,
  pmd_t *VAR_4, int VAR_5)
{
 struct page *VAR_6;

 VAR_6 = FUNC_0(*(pte_t *)VAR_4);
 if (VAR_6)
  VAR_6 += ((VAR_3 & ~VAR_0) >> VAR_1);
 return VAR_6;
}
