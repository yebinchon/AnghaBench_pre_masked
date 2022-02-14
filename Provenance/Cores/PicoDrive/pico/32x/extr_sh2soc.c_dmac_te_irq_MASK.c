
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct dmac {int vcrdma0; int vcrdma1; struct dma_chan* chan; } ;
struct dma_chan {int dummy; } ;
struct TYPE_4__ {scalar_t__ peri_regs; } ;
typedef TYPE_1__ SH2 ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (TYPE_1__*,int,int) ;

__attribute__((used)) static void FUNC_3(SH2 *VAR_1, struct dma_chan *VAR_2)
{
  char *VAR_3 = (void *)VAR_1->peri_regs;
  struct dmac *VAR_4 = (void *)(VAR_3 + 0x180);
  int VAR_5 = FUNC_0(VAR_3, 0xe2) & 0x0f;
  int VAR_6 = (VAR_2 == &VAR_4->chan[0]) ?
               VAR_4->vcrdma0 : VAR_4->vcrdma1;

  FUNC_1(VAR_0, "dmac irq %d %d", VAR_5, VAR_6);
  FUNC_2(VAR_1, VAR_5, VAR_6 & 0x7f);
}
