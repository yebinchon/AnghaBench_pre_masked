
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int phys; } ;
struct ioat_ring_ent {TYPE_1__ txd; struct ioat_dma_descriptor* hw; } ;
struct ioat_dma_descriptor {int next; } ;
struct dma_chan {int dummy; } ;
typedef int gfp_t ;


 struct ioat_ring_ent* FUNC_0 (struct dma_chan*,int ) ;
 int FUNC_1 (struct ioat_ring_ent*,struct dma_chan*) ;
 int FUNC_2 () ;
 struct ioat_ring_ent** FUNC_3 (int,int,int ) ;
 int FUNC_4 (struct ioat_ring_ent**) ;
 int FUNC_5 (struct ioat_ring_ent*,int) ;

__attribute__((used)) static struct ioat_ring_ent **FUNC_6(struct dma_chan *VAR_0, int VAR_1, gfp_t VAR_2)
{
 struct ioat_ring_ent **VAR_3;
 int VAR_4 = 1 << VAR_1;
 int VAR_5;

 if (VAR_1 > FUNC_2())
  return ((void*)0);


 VAR_3 = FUNC_3(VAR_4, sizeof(*VAR_3), VAR_2);
 if (!VAR_3)
  return ((void*)0);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  VAR_3[VAR_5] = FUNC_0(VAR_0, VAR_2);
  if (!VAR_3[VAR_5]) {
   while (VAR_5--)
    FUNC_1(VAR_3[VAR_5], VAR_0);
   FUNC_4(VAR_3);
   return ((void*)0);
  }
  FUNC_5(VAR_3[VAR_5], VAR_5);
 }


 for (VAR_5 = 0; VAR_5 < VAR_4-1; VAR_5++) {
  struct ioat_ring_ent *VAR_6 = VAR_3[VAR_5+1];
  struct ioat_dma_descriptor *VAR_7 = VAR_3[VAR_5]->hw;

  VAR_7->next = VAR_6->txd.phys;
 }
 VAR_3[VAR_5]->hw->next = VAR_3[0]->txd.phys;

 return VAR_3;
}
