
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfa_s {int trcmod; int ioc; } ;
struct bfa_mem_dma_s {int dma_curp; int kva_curp; } ;
struct bfa_fru_s {int dummy; } ;
typedef int bfa_boolean_t ;


 struct bfa_fru_s* FUNC_0 (struct bfa_s*) ;
 struct bfa_mem_dma_s* FUNC_1 (struct bfa_s*) ;
 int FUNC_2 (struct bfa_fru_s*,int *,struct bfa_s*,int ,int ) ;
 int FUNC_3 (struct bfa_fru_s*,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct bfa_s *VAR_0, bfa_boolean_t VAR_1)
{
 struct bfa_fru_s *VAR_2 = FUNC_0(VAR_0);
 struct bfa_mem_dma_s *VAR_3 = FUNC_1(VAR_0);

 FUNC_2(VAR_2, &VAR_0->ioc, VAR_0, VAR_0->trcmod, VAR_1);
 FUNC_3(VAR_2, VAR_3->kva_curp, VAR_3->dma_curp, VAR_1);
}
