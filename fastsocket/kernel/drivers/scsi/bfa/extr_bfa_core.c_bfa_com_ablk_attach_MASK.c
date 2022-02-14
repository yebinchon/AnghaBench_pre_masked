
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bfa_ablk_s {int dummy; } ;
struct TYPE_2__ {struct bfa_ablk_s ablk; } ;
struct bfa_s {int ioc; TYPE_1__ modules; } ;
struct bfa_mem_dma_s {int dma_curp; int kva_curp; } ;


 struct bfa_mem_dma_s* FUNC_0 (struct bfa_s*) ;
 int FUNC_1 (struct bfa_ablk_s*,int *) ;
 int FUNC_2 (struct bfa_ablk_s*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct bfa_s *VAR_0)
{
 struct bfa_ablk_s *VAR_1 = &VAR_0->modules.ablk;
 struct bfa_mem_dma_s *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_1, &VAR_0->ioc);
 FUNC_2(VAR_1, VAR_2->kva_curp, VAR_2->dma_curp);
}
