
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct TYPE_2__ {int pa; int * kva; } ;
struct bfa_ablk_s {TYPE_1__ dma_addr; } ;



void
FUNC_0(struct bfa_ablk_s *VAR_0, u8 *VAR_1, u64 VAR_2)
{
 VAR_0->dma_addr.kva = VAR_1;
 VAR_0->dma_addr.pa = VAR_2;
}
