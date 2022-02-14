
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnx4008_dma_config {int ch_cfg; int ch_ctrl; int ll_dma; scalar_t__ is_ll; int dest_addr; int src_addr; } ;
struct TYPE_2__ {int name; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_7 () ;
 int FUNC_8 () ;

int FUNC_9(int VAR_2, struct pnx4008_dma_config * VAR_3)
{
 if (!FUNC_5(VAR_2) || !VAR_1[VAR_2].name)
  return -VAR_0;

 FUNC_7();
 FUNC_6(VAR_3->src_addr, FUNC_4(VAR_2));
 FUNC_6(VAR_3->dest_addr, FUNC_2(VAR_2));

 if (VAR_3->is_ll)
  FUNC_6(VAR_3->ll_dma, FUNC_3(VAR_2));
 else
  FUNC_6(0, FUNC_3(VAR_2));

 FUNC_6(VAR_3->ch_ctrl, FUNC_1(VAR_2));
 FUNC_6(VAR_3->ch_cfg, FUNC_0(VAR_2));
 FUNC_8();

 return 0;

}
