
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ppc64_tlb_batch {int index; int ssize; int psize; int * pte; int * vaddr; int mm; } ;
struct cpumask {int dummy; } ;


 scalar_t__ FUNC_0 (int ,struct cpumask const*) ;
 struct cpumask* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int ,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;

void FUNC_6(struct ppc64_tlb_batch *VAR_0)
{
 const struct cpumask *VAR_1;
 int VAR_2, VAR_3 = 0;

 VAR_2 = VAR_0->index;
 VAR_1 = FUNC_1(FUNC_5());
 if (FUNC_0(FUNC_4(VAR_0->mm), VAR_1))
  VAR_3 = 1;
 if (VAR_2 == 1)
  FUNC_2(VAR_0->vaddr[0], VAR_0->pte[0],
    VAR_0->psize, VAR_0->ssize, VAR_3);
 else
  FUNC_3(VAR_2, VAR_3);
 VAR_0->index = 0;
}
