
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pte_t ;
struct TYPE_3__ {int* pmdv; } ;
typedef TYPE_1__ pmd_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int) ;

__attribute__((used)) static inline pte_t *FUNC_1(pmd_t * VAR_3, unsigned long VAR_4)
{
 void *VAR_5;

 VAR_5 = FUNC_0((VAR_3->pmdv[0] & VAR_2) << 4);
 return (pte_t *) VAR_5 +
     ((VAR_4 >> VAR_0) & (VAR_1 - 1));
}
