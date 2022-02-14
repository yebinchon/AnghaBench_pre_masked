
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lg_cpu {int dummy; } ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 size_t FUNC_6 (unsigned long) ;
 int * FUNC_7 (struct lg_cpu*,int ,unsigned long) ;

__attribute__((used)) static pte_t *FUNC_8(struct lg_cpu *VAR_2, pgd_t VAR_3, unsigned long VAR_4)
{







 pte_t *VAR_5 = FUNC_1(FUNC_3(VAR_3) << VAR_0);

 FUNC_0(!(FUNC_2(VAR_3) & VAR_1));


 return &VAR_5[FUNC_6(VAR_4)];
}
