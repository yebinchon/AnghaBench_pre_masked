
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vfe_irqenable {int anyOutputPathIrqs; void* anyIrqForActiveStatesOnly; scalar_t__ camifEpoch1Irq; scalar_t__ camifEpoch2Irq; scalar_t__ camifSofIrq; scalar_t__ afPingpongIrq; scalar_t__ awbPingpongIrq; scalar_t__ regUpdateIrq; void* anySyncTimerIrqs; void* anyErrorIrqs; void* anyAsyncTimerIrqs; scalar_t__ asyncTimer3Irq; scalar_t__ asyncTimer2Irq; scalar_t__ asyncTimer1Irq; scalar_t__ asyncTimer0Irq; scalar_t__ syncTimer2Irq; scalar_t__ syncTimer1Irq; scalar_t__ syncTimer0Irq; void* anyOutput2PathIrqs; void* anyOutput1PathIrqs; scalar_t__ viewIrq; scalar_t__ viewCbcrPingpongIrq; scalar_t__ viewYPingpongIrq; scalar_t__ encIrq; scalar_t__ encCbcrPingpongIrq; scalar_t__ encYPingpongIrq; scalar_t__ violationIrq; scalar_t__ axiErrorIrq; scalar_t__ busOverflowIrq; scalar_t__ afOverflowIrq; scalar_t__ camifOverflowIrq; scalar_t__ camifErrorIrq; int awbOverflowIrq; int histPingpongIrq; int rdPingpongIrq; int resetAckIrq; int ceIrq; int camifEofIrq; int camifEolIrq; } ;
struct vfe_interrupt_status {int anyOutputPathIrqs; void* anyIrqForActiveStatesOnly; scalar_t__ camifEpoch1Irq; scalar_t__ camifEpoch2Irq; scalar_t__ camifSofIrq; scalar_t__ afPingpongIrq; scalar_t__ awbPingpongIrq; scalar_t__ regUpdateIrq; void* anySyncTimerIrqs; void* anyErrorIrqs; void* anyAsyncTimerIrqs; scalar_t__ asyncTimer3Irq; scalar_t__ asyncTimer2Irq; scalar_t__ asyncTimer1Irq; scalar_t__ asyncTimer0Irq; scalar_t__ syncTimer2Irq; scalar_t__ syncTimer1Irq; scalar_t__ syncTimer0Irq; void* anyOutput2PathIrqs; void* anyOutput1PathIrqs; scalar_t__ viewIrq; scalar_t__ viewCbcrPingpongIrq; scalar_t__ viewYPingpongIrq; scalar_t__ encIrq; scalar_t__ encCbcrPingpongIrq; scalar_t__ encYPingpongIrq; scalar_t__ violationIrq; scalar_t__ axiErrorIrq; scalar_t__ busOverflowIrq; scalar_t__ afOverflowIrq; scalar_t__ camifOverflowIrq; scalar_t__ camifErrorIrq; int awbOverflowIrq; int histPingpongIrq; int rdPingpongIrq; int resetAckIrq; int ceIrq; int camifEofIrq; int camifEolIrq; } ;
typedef int ret ;
typedef int hwstat ;
typedef void* boolean ;


 int FUNC_0 (struct vfe_irqenable*,int ,int) ;

__attribute__((used)) static struct vfe_interrupt_status
FUNC_1(uint32_t VAR_0)
{
 struct vfe_irqenable VAR_1;
 struct vfe_interrupt_status VAR_2;
 boolean VAR_3;

 FUNC_0(&VAR_1, 0, sizeof(VAR_1));
 FUNC_0(&VAR_2, 0, sizeof(VAR_2));

 VAR_1 = *((struct vfe_irqenable *)(&VAR_0));

 VAR_2.camifErrorIrq = VAR_1.camifErrorIrq;
 VAR_2.camifSofIrq = VAR_1.camifSofIrq;
 VAR_2.camifEolIrq = VAR_1.camifEolIrq;
 VAR_2.camifEofIrq = VAR_1.camifEofIrq;
 VAR_2.camifEpoch1Irq = VAR_1.camifEpoch1Irq;
 VAR_2.camifEpoch2Irq = VAR_1.camifEpoch2Irq;
 VAR_2.camifOverflowIrq = VAR_1.camifOverflowIrq;
 VAR_2.ceIrq = VAR_1.ceIrq;
 VAR_2.regUpdateIrq = VAR_1.regUpdateIrq;
 VAR_2.resetAckIrq = VAR_1.resetAckIrq;
 VAR_2.encYPingpongIrq = VAR_1.encYPingpongIrq;
 VAR_2.encCbcrPingpongIrq = VAR_1.encCbcrPingpongIrq;
 VAR_2.viewYPingpongIrq = VAR_1.viewYPingpongIrq;
 VAR_2.viewCbcrPingpongIrq = VAR_1.viewCbcrPingpongIrq;
 VAR_2.rdPingpongIrq = VAR_1.rdPingpongIrq;
 VAR_2.afPingpongIrq = VAR_1.afPingpongIrq;
 VAR_2.awbPingpongIrq = VAR_1.awbPingpongIrq;
 VAR_2.histPingpongIrq = VAR_1.histPingpongIrq;
 VAR_2.encIrq = VAR_1.encIrq;
 VAR_2.viewIrq = VAR_1.viewIrq;
 VAR_2.busOverflowIrq = VAR_1.busOverflowIrq;
 VAR_2.afOverflowIrq = VAR_1.afOverflowIrq;
 VAR_2.awbOverflowIrq = VAR_1.awbOverflowIrq;
 VAR_2.syncTimer0Irq = VAR_1.syncTimer0Irq;
 VAR_2.syncTimer1Irq = VAR_1.syncTimer1Irq;
 VAR_2.syncTimer2Irq = VAR_1.syncTimer2Irq;
 VAR_2.asyncTimer0Irq = VAR_1.asyncTimer0Irq;
 VAR_2.asyncTimer1Irq = VAR_1.asyncTimer1Irq;
 VAR_2.asyncTimer2Irq = VAR_1.asyncTimer2Irq;
 VAR_2.asyncTimer3Irq = VAR_1.asyncTimer3Irq;
 VAR_2.axiErrorIrq = VAR_1.axiErrorIrq;
 VAR_2.violationIrq = VAR_1.violationIrq;





 VAR_3 =
  VAR_2.camifErrorIrq ||
  VAR_2.camifOverflowIrq ||
  VAR_2.afOverflowIrq ||
  VAR_2.awbPingpongIrq ||
  VAR_2.busOverflowIrq ||
  VAR_2.axiErrorIrq ||
  VAR_2.violationIrq;

 VAR_2.anyErrorIrqs = VAR_3;


 VAR_3 =
  VAR_2.encYPingpongIrq ||
  VAR_2.encCbcrPingpongIrq ||
  VAR_2.encIrq;

 VAR_2.anyOutput2PathIrqs = VAR_3;

 VAR_3 =
  VAR_2.viewYPingpongIrq ||
  VAR_2.viewCbcrPingpongIrq ||
  VAR_2.viewIrq;

 VAR_2.anyOutput1PathIrqs = VAR_3;

 VAR_2.anyOutputPathIrqs =
  VAR_2.anyOutput1PathIrqs ||
  VAR_2.anyOutput2PathIrqs;


 VAR_3 =
  VAR_2.syncTimer0Irq ||
  VAR_2.syncTimer1Irq ||
  VAR_2.syncTimer2Irq;

 VAR_2.anySyncTimerIrqs = VAR_3;


 VAR_3 =
  VAR_2.asyncTimer0Irq ||
  VAR_2.asyncTimer1Irq ||
  VAR_2.asyncTimer2Irq ||
  VAR_2.asyncTimer3Irq;

 VAR_2.anyAsyncTimerIrqs = VAR_3;


 VAR_3 =
  VAR_2.anyErrorIrqs ||
  VAR_2.anyOutputPathIrqs ||
  VAR_2.anySyncTimerIrqs ||
  VAR_2.regUpdateIrq ||
  VAR_2.awbPingpongIrq ||
  VAR_2.afPingpongIrq ||
  VAR_2.camifSofIrq ||
  VAR_2.camifEpoch2Irq ||
  VAR_2.camifEpoch1Irq;

 VAR_2.anyIrqForActiveStatesOnly =
  VAR_3;

 return VAR_2;
}
