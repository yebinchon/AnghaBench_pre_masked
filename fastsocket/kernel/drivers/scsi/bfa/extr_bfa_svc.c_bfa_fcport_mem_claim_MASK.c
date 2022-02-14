
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union bfa_fcport_stats_u {int dummy; } bfa_fcport_stats_u ;
struct bfa_mem_dma_s {int dummy; } ;
struct bfa_fcport_s {union bfa_fcport_stats_u* stats; int stats_pa; scalar_t__ stats_kva; struct bfa_mem_dma_s fcport_dma; } ;


 int FUNC_0 (struct bfa_mem_dma_s*) ;
 scalar_t__ FUNC_1 (struct bfa_mem_dma_s*) ;

__attribute__((used)) static void
FUNC_2(struct bfa_fcport_s *VAR_0)
{
 struct bfa_mem_dma_s *VAR_1 = &VAR_0->fcport_dma;

 VAR_0->stats_kva = FUNC_1(VAR_1);
 VAR_0->stats_pa = FUNC_0(VAR_1);
 VAR_0->stats = (union bfa_fcport_stats_u *)
    FUNC_1(VAR_1);
}
