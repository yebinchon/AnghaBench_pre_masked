
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lguest_pages {int dummy; } ;
struct lg_cpu {size_t cpu_pgd; int * regs_page; TYPE_2__* lg; } ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int pgd_t ;
struct TYPE_4__ {TYPE_1__* pgdirs; } ;
struct TYPE_3__ {int * pgdir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 size_t FUNC_7 (unsigned long) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int VAR_6 ;

void FUNC_10(struct lg_cpu *VAR_7, struct lguest_pages *VAR_8)
{
 pte_t *VAR_9 = FUNC_0(VAR_6);
 pte_t VAR_10;
 pgd_t VAR_11;





 VAR_11 = FUNC_2(FUNC_1(VAR_9) | VAR_5);

 VAR_7->lg->pgdirs[VAR_7->cpu_pgd].pgdir[VAR_3] = VAR_11;
 VAR_10 = FUNC_5(FUNC_1(VAR_7->regs_page) >> VAR_2, VAR_0);
 FUNC_9(&VAR_9[FUNC_7((unsigned long)VAR_8)], VAR_10);
}
