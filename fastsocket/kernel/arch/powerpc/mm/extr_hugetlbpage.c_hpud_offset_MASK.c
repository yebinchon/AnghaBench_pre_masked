
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hstate {int dummy; } ;
typedef int pud_t ;
typedef int pgd_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct hstate*) ;
 int * FUNC_1 (int *,unsigned long) ;

__attribute__((used)) static pud_t *FUNC_2(pgd_t *VAR_1, unsigned long VAR_2, struct hstate *VAR_3)
{
 if (FUNC_0(VAR_3) < VAR_0)
  return FUNC_1(VAR_1, VAR_2);
 else
  return (pud_t *) VAR_1;
}
