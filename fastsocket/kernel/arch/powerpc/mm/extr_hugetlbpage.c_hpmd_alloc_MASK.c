
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mm_struct {int dummy; } ;
struct hstate {int dummy; } ;
typedef int pud_t ;
typedef int pmd_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct hstate*) ;
 int * FUNC_1 (struct mm_struct*,int *,unsigned long) ;

__attribute__((used)) static pmd_t *FUNC_2(struct mm_struct *VAR_1, pud_t *VAR_2, unsigned long VAR_3,
    struct hstate *VAR_4)
{
 if (FUNC_0(VAR_4) < VAR_0)
  return FUNC_1(VAR_1, VAR_2, VAR_3);
 else
  return (pmd_t *) VAR_2;
}
