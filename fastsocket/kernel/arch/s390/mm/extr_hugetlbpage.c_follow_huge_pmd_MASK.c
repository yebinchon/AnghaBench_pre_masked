
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
typedef int pmd_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 struct page* FUNC_0 (int ) ;

struct page *FUNC_1(struct mm_struct *VAR_3, unsigned long VAR_4,
        pmd_t *VAR_5, int VAR_6)
{
 struct page *VAR_7;

 if (!VAR_1)
  return ((void*)0);

 VAR_7 = FUNC_0(*VAR_5);
 if (VAR_7)
  VAR_7 += ((VAR_4 & ~VAR_0) >> VAR_2);
 return VAR_7;
}
