
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static inline void FUNC_2(pgd_t * VAR_1, pmd_t * VAR_2)
{ FUNC_1((pte_t *)VAR_1, (VAR_0 | (FUNC_0((unsigned long) VAR_2) >> 4))); }
