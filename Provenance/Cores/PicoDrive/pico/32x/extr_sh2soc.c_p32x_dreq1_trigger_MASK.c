
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
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_1 (int,char*) ;
 TYPE_1__ VAR_4 ;
 TYPE_1__ VAR_5 ;

void FUNC_2(void)
{
  struct dmac *VAR_6 = (void *)&VAR_4[0x180 / 4];
  struct dmac *VAR_7 = (void *)&VAR_5[0x180 / 4];
  int VAR_8 = 0;

  FUNC_1(VAR_2, "dreq1_trigger");
  if ((VAR_6->dmaor & VAR_1) && (VAR_6->chan[1].chcr & 3) == VAR_0) {
    FUNC_0(&VAR_4, &VAR_6->chan[1]);
    VAR_8 = 1;
  }
  if ((VAR_7->dmaor & VAR_1) && (VAR_7->chan[1].chcr & 3) == VAR_0) {
    FUNC_0(&VAR_5, &VAR_7->chan[1]);
    VAR_8 = 1;
  }
  (void)VAR_8;
}
