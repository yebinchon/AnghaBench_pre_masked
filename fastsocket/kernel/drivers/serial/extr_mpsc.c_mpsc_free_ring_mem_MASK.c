
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; int line; } ;
struct mpsc_port_info {scalar_t__ dma_region_p; int * dma_region; TYPE_1__ port; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,scalar_t__) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(struct mpsc_port_info *VAR_1)
{
 FUNC_1("mpsc_free_ring_mem[%d]: Freeing ring mem\n", VAR_1->port.line);

 if (VAR_1->dma_region) {
  FUNC_0(VAR_1->port.dev, VAR_0,
    VAR_1->dma_region, VAR_1->dma_region_p);
  VAR_1->dma_region = ((void*)0);
  VAR_1->dma_region_p = (dma_addr_t)((void*)0);
 }
}
