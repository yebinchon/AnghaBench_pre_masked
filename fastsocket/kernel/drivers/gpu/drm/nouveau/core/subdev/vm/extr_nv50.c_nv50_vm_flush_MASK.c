
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_vm {int vmm; int * engref; } ;
struct nouveau_engine {int (* tlb_flush ) (struct nouveau_engine*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 struct nouveau_engine* FUNC_1 (int ,int) ;
 int FUNC_2 (struct nouveau_engine*) ;

__attribute__((used)) static void
FUNC_3(struct nouveau_vm *VAR_1)
{
 struct nouveau_engine *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (FUNC_0(&VAR_1->engref[VAR_3])) {
   VAR_2 = FUNC_1(VAR_1->vmm, VAR_3);
   if (VAR_2 && VAR_2->tlb_flush)
    VAR_2->tlb_flush(VAR_2);
  }
 }
}
