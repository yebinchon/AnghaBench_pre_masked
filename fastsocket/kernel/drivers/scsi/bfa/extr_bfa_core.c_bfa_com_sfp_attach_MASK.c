
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_sfp_s {int dummy; } ;
struct bfa_s {int trcmod; int ioc; } ;
struct bfa_mem_dma_s {int dma_curp; int kva_curp; } ;


 struct bfa_mem_dma_s* FUNC_0 (struct bfa_s*) ;
 struct bfa_sfp_s* FUNC_1 (struct bfa_s*) ;
 int FUNC_2 (struct bfa_sfp_s*,int *,struct bfa_s*,int ) ;
 int FUNC_3 (struct bfa_sfp_s*,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct bfa_s *VAR_0)
{
 struct bfa_sfp_s *VAR_1 = FUNC_1(VAR_0);
 struct bfa_mem_dma_s *VAR_2 = FUNC_0(VAR_0);

 FUNC_2(VAR_1, &VAR_0->ioc, VAR_0, VAR_0->trcmod);
 FUNC_3(VAR_1, VAR_2->kva_curp, VAR_2->dma_curp);
}
