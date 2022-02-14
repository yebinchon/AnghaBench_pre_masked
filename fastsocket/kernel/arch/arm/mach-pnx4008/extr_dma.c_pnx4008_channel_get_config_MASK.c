
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnx4008_dma_config {int is_ll; void* dest_addr; void* src_addr; void* ll_dma; void* ch_ctrl; void* ch_cfg; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int FUNC_5 (int) ;
 void* FUNC_6 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_7 () ;
 int FUNC_8 () ;

int FUNC_9(int VAR_2, struct pnx4008_dma_config * VAR_3)
{
 if (!FUNC_5(VAR_2) || !VAR_1[VAR_2].name || !VAR_3)
  return -VAR_0;

 FUNC_7();
 VAR_3->ch_cfg = FUNC_6(FUNC_0(VAR_2));
 VAR_3->ch_ctrl = FUNC_6(FUNC_1(VAR_2));

 VAR_3->ll_dma = FUNC_6(FUNC_3(VAR_2));
 VAR_3->is_ll = VAR_3->ll_dma ? 1 : 0;

 VAR_3->src_addr = FUNC_6(FUNC_4(VAR_2));
 VAR_3->dest_addr = FUNC_6(FUNC_2(VAR_2));
 FUNC_8();

 return 0;
}
