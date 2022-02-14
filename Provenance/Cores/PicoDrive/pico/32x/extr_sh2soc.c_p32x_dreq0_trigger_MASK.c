
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dmac {int dmaor; TYPE_4__* chan; } ;
struct TYPE_6__ {int chcr; } ;
struct TYPE_5__ {int * peri_regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_1 (int ,char*) ;
 TYPE_1__ VAR_3 ;
 TYPE_1__ VAR_4 ;

void FUNC_2(void)
{
  struct dmac *VAR_5 = (void *)&VAR_3[0x180 / 4];
  struct dmac *VAR_6 = (void *)&VAR_4[0x180 / 4];

  FUNC_1(VAR_2, "dreq0_trigger");
  if ((VAR_5->dmaor & VAR_1) && (VAR_5->chan[0].chcr & 3) == VAR_0) {
    FUNC_0(&VAR_3, &VAR_5->chan[0]);
  }
  if ((VAR_6->dmaor & VAR_1) && (VAR_6->chan[0].chcr & 3) == VAR_0) {
    FUNC_0(&VAR_4, &VAR_6->chan[0]);
  }
}
