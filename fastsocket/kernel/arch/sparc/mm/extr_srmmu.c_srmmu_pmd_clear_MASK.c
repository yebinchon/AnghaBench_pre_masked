
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pte_t ;
struct TYPE_3__ {int * pmdv; } ;
typedef TYPE_1__ pmd_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static inline void FUNC_2(pmd_t *VAR_2) {
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_0/VAR_1; VAR_3++)
  FUNC_1((pte_t *)&VAR_2->pmdv[VAR_3], FUNC_0(0));
}
