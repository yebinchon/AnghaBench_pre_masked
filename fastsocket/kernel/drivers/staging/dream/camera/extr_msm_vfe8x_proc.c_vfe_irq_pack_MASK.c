
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vfe_irqenable {int violationIrq; int axiErrorIrq; int asyncTimer3Irq; int asyncTimer2Irq; int asyncTimer1Irq; int asyncTimer0Irq; int syncTimer2Irq; int syncTimer1Irq; int syncTimer0Irq; int awbOverflowIrq; int afOverflowIrq; int busOverflowIrq; int viewIrq; int encIrq; int histPingpongIrq; int awbPingpongIrq; int afPingpongIrq; int rdPingpongIrq; int viewCbcrPingpongIrq; int viewYPingpongIrq; int encCbcrPingpongIrq; int encYPingpongIrq; int resetAckIrq; int regUpdateIrq; int ceIrq; int camifOverflowIrq; int camifEpoch2Irq; int camifEpoch1Irq; int camifEofIrq; int camifEolIrq; int camifSofIrq; int camifErrorIrq; } ;
struct vfe_interrupt_mask {int violationIrq; int axiErrorIrq; int asyncTimer3Irq; int asyncTimer2Irq; int asyncTimer1Irq; int asyncTimer0Irq; int syncTimer2Irq; int syncTimer1Irq; int syncTimer0Irq; int awbOverflowIrq; int afOverflowIrq; int busOverflowIrq; int viewIrq; int encIrq; int histPingpongIrq; int awbPingpongIrq; int afPingpongIrq; int rdPingpongIrq; int viewCbcrPingpongIrq; int viewYPingpongIrq; int encCbcrPingpongIrq; int encYPingpongIrq; int resetAckIrq; int regUpdateIrq; int ceIrq; int camifOverflowIrq; int camifEpoch2Irq; int camifEpoch1Irq; int camifEofIrq; int camifEolIrq; int camifSofIrq; int camifErrorIrq; } ;
typedef int packedData ;


 int FUNC_0 (struct vfe_irqenable*,int ,int) ;

__attribute__((used)) static uint32_t FUNC_1(struct vfe_interrupt_mask VAR_0)
{
 struct vfe_irqenable VAR_1;

 FUNC_0(&VAR_1, 0, sizeof(VAR_1));

 VAR_1.camifErrorIrq = VAR_0.camifErrorIrq;
 VAR_1.camifSofIrq = VAR_0.camifSofIrq;
 VAR_1.camifEolIrq = VAR_0.camifEolIrq;
 VAR_1.camifEofIrq = VAR_0.camifEofIrq;
 VAR_1.camifEpoch1Irq = VAR_0.camifEpoch1Irq;
 VAR_1.camifEpoch2Irq = VAR_0.camifEpoch2Irq;
 VAR_1.camifOverflowIrq = VAR_0.camifOverflowIrq;
 VAR_1.ceIrq = VAR_0.ceIrq;
 VAR_1.regUpdateIrq = VAR_0.regUpdateIrq;
 VAR_1.resetAckIrq = VAR_0.resetAckIrq;
 VAR_1.encYPingpongIrq = VAR_0.encYPingpongIrq;
 VAR_1.encCbcrPingpongIrq = VAR_0.encCbcrPingpongIrq;
 VAR_1.viewYPingpongIrq = VAR_0.viewYPingpongIrq;
 VAR_1.viewCbcrPingpongIrq = VAR_0.viewCbcrPingpongIrq;
 VAR_1.rdPingpongIrq = VAR_0.rdPingpongIrq;
 VAR_1.afPingpongIrq = VAR_0.afPingpongIrq;
 VAR_1.awbPingpongIrq = VAR_0.awbPingpongIrq;
 VAR_1.histPingpongIrq = VAR_0.histPingpongIrq;
 VAR_1.encIrq = VAR_0.encIrq;
 VAR_1.viewIrq = VAR_0.viewIrq;
 VAR_1.busOverflowIrq = VAR_0.busOverflowIrq;
 VAR_1.afOverflowIrq = VAR_0.afOverflowIrq;
 VAR_1.awbOverflowIrq = VAR_0.awbOverflowIrq;
 VAR_1.syncTimer0Irq = VAR_0.syncTimer0Irq;
 VAR_1.syncTimer1Irq = VAR_0.syncTimer1Irq;
 VAR_1.syncTimer2Irq = VAR_0.syncTimer2Irq;
 VAR_1.asyncTimer0Irq = VAR_0.asyncTimer0Irq;
 VAR_1.asyncTimer1Irq = VAR_0.asyncTimer1Irq;
 VAR_1.asyncTimer2Irq = VAR_0.asyncTimer2Irq;
 VAR_1.asyncTimer3Irq = VAR_0.asyncTimer3Irq;
 VAR_1.axiErrorIrq = VAR_0.axiErrorIrq;
 VAR_1.violationIrq = VAR_0.violationIrq;

 return *((uint32_t *)&VAR_1);
}
