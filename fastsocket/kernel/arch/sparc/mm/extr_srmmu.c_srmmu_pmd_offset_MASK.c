
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pmd_t ;
typedef int pgd_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline pmd_t *FUNC_1(pgd_t * VAR_2, unsigned long VAR_3)
{
 return (pmd_t *) FUNC_0(*VAR_2) +
     ((VAR_3 >> VAR_0) & (VAR_1 - 1));
}
