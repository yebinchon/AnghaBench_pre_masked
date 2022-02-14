
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_ohci {int dummy; } ;
struct dma_trm_ctx {int num_desc; struct ti_ohci* ohci; scalar_t__* prg_bus; scalar_t__* prg_cpu; int prg_pool; int ctx; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct dma_trm_ctx *VAR_0)
{
 int VAR_1;
 struct ti_ohci *VAR_2 = VAR_0->ohci;

 if (VAR_2 == ((void*)0))
  return;

 FUNC_0("Freeing dma_trm_ctx %d", VAR_0->ctx);

 if (VAR_0->prg_cpu) {
  for (VAR_1=0; VAR_1<VAR_0->num_desc; VAR_1++)
   if (VAR_0->prg_cpu[VAR_1] && VAR_0->prg_bus[VAR_1])
    FUNC_3(VAR_0->prg_pool, VAR_0->prg_cpu[VAR_1],
           VAR_0->prg_bus[VAR_1]);
  FUNC_2(VAR_0->prg_pool);
  FUNC_1(VAR_0->prg_cpu);
  FUNC_1(VAR_0->prg_bus);
 }


 VAR_0->ohci = ((void*)0);
}
