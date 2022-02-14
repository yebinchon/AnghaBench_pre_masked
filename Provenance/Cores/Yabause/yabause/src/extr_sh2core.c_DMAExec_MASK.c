
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int DMAOR; int CHCR0; int CHCR1; int VCRDMA1; int TCR1; int DAR1; int SAR1; int VCRDMA0; int TCR0; int DAR0; int SAR0; } ;
struct TYPE_4__ {TYPE_1__ onchip; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int*,int *,int *,int *,int *) ;
 int FUNC_1 (char*) ;

void FUNC_2(void) {

   if (VAR_0->onchip.DMAOR & 0x6)
      return;

   if ((VAR_0->onchip.CHCR0 & 0x1) && (VAR_0->onchip.CHCR1 & 0x1)) {
      if (VAR_0->onchip.DMAOR & 0x8) {
         FUNC_1("dma\t: FIXME: two channel dma - round robin priority not properly implemented\n");
         FUNC_0(&VAR_0->onchip.CHCR0, &VAR_0->onchip.SAR0,
       &VAR_0->onchip.DAR0, &VAR_0->onchip.TCR0,
       &VAR_0->onchip.VCRDMA0);
         FUNC_0(&VAR_0->onchip.CHCR1, &VAR_0->onchip.SAR1,
       &VAR_0->onchip.DAR1, &VAR_0->onchip.TCR1,
                     &VAR_0->onchip.VCRDMA1);
      }
      else {
         FUNC_0(&VAR_0->onchip.CHCR0, &VAR_0->onchip.SAR0,
       &VAR_0->onchip.DAR0, &VAR_0->onchip.TCR0,
       &VAR_0->onchip.VCRDMA0);
         FUNC_0(&VAR_0->onchip.CHCR1, &VAR_0->onchip.SAR1,
       &VAR_0->onchip.DAR1, &VAR_0->onchip.TCR1,
       &VAR_0->onchip.VCRDMA1);
      }
   }
   else {
      if (VAR_0->onchip.CHCR0 & 0x1) {
         FUNC_0(&VAR_0->onchip.CHCR0, &VAR_0->onchip.SAR0,
       &VAR_0->onchip.DAR0, &VAR_0->onchip.TCR0,
       &VAR_0->onchip.VCRDMA0);
         return;
      }
      if (VAR_0->onchip.CHCR1 & 0x1) {
         FUNC_0(&VAR_0->onchip.CHCR1, &VAR_0->onchip.SAR1,
       &VAR_0->onchip.DAR1, &VAR_0->onchip.TCR1,
       &VAR_0->onchip.VCRDMA1);
         return;
      }
   }
}
