
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct flexcop_pci {int count; int active_dma1_addr; int last_dma1_cur_pos; int irq_lock; TYPE_3__* dma; struct flexcop_device* fc_dev; scalar_t__ last_irq; } ;
struct flexcop_device {TYPE_4__ (* read_ibi_reg ) (struct flexcop_device*,int ) ;} ;
typedef int irqreturn_t ;
struct TYPE_8__ {int dma_cur_addr; } ;
struct TYPE_7__ {int DMA1_IRQ_Status; int DMA1_Timer_Status; scalar_t__ Transport_Error; scalar_t__ LLC_SNAP_FLAG_set; scalar_t__ Continuity_error_flag; scalar_t__ Data_receiver_error; } ;
struct TYPE_10__ {int raw; TYPE_2__ dma_0x8; TYPE_1__ irq_20c; } ;
typedef TYPE_4__ flexcop_ibi_value ;
typedef int dma_addr_t ;
struct TYPE_9__ {int size; int dma_addr0; scalar_t__ cpu_addr0; scalar_t__ cpu_addr1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_2 ;
 int FUNC_2 (struct flexcop_device*,scalar_t__,int) ;
 int FUNC_3 (struct flexcop_device*,scalar_t__,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 TYPE_4__ FUNC_7 (struct flexcop_device*,int ) ;
 TYPE_4__ FUNC_8 (struct flexcop_device*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_9(int VAR_5, void *VAR_6)
{
 struct flexcop_pci *VAR_7 = VAR_6;
 struct flexcop_device *VAR_8 = VAR_7->fc_dev;
 unsigned long VAR_9;
 flexcop_ibi_value VAR_10;
 irqreturn_t VAR_11 = VAR_0;

 FUNC_5(&VAR_7->irq_lock, VAR_9);
 VAR_10 = VAR_8->read_ibi_reg(VAR_8, VAR_3);


 if (VAR_10.irq_20c.Data_receiver_error)
  FUNC_0("data receiver error\n");
 if (VAR_10.irq_20c.Continuity_error_flag)
  FUNC_0("Contunuity error flag is set\n");
 if (VAR_10.irq_20c.LLC_SNAP_FLAG_set)
  FUNC_0("LLC_SNAP_FLAG_set is set\n");
 if (VAR_10.irq_20c.Transport_Error)
  FUNC_0("Transport error\n");

 if ((VAR_7->count % 1000) == 0)
  FUNC_0("%d valid irq took place so far\n", VAR_7->count);

 if (VAR_10.irq_20c.DMA1_IRQ_Status == 1) {
  if (VAR_7->active_dma1_addr == 0)
   FUNC_3(VAR_7->fc_dev,
     VAR_7->dma[0].cpu_addr0,
     VAR_7->dma[0].size / 188);
  else
   FUNC_3(VAR_7->fc_dev,
     VAR_7->dma[0].cpu_addr1,
     VAR_7->dma[0].size / 188);

  FUNC_1("page change to page: %d\n",!VAR_7->active_dma1_addr);
  VAR_7->active_dma1_addr = !VAR_7->active_dma1_addr;


 } else if (VAR_10.irq_20c.DMA1_Timer_Status == 1) {
  dma_addr_t VAR_12 =
   VAR_8->read_ibi_reg(VAR_8,VAR_2).dma_0x8.dma_cur_addr << 2;
  u32 VAR_13 = VAR_12 - VAR_7->dma[0].dma_addr0;

  FUNC_1("%u irq: %08x cur_addr: %llx: cur_pos: %08x, "
   "last_cur_pos: %08x ",
    FUNC_4(VAR_4 - VAR_7->last_irq),
    VAR_10.raw, (unsigned long long)VAR_12, VAR_13,
    VAR_7->last_dma1_cur_pos);
  VAR_7->last_irq = VAR_4;




  if (VAR_13 < VAR_7->last_dma1_cur_pos) {
   FUNC_1(" end was reached: passing %d bytes ",
    (VAR_7->dma[0].size*2 - 1) -
    VAR_7->last_dma1_cur_pos);
   FUNC_2(VAR_7->fc_dev,
    VAR_7->dma[0].cpu_addr0 +
     VAR_7->last_dma1_cur_pos,
    (VAR_7->dma[0].size*2) -
     VAR_7->last_dma1_cur_pos);
   VAR_7->last_dma1_cur_pos = 0;
  }

  if (VAR_13 > VAR_7->last_dma1_cur_pos) {
   FUNC_1(" passing %d bytes ",
    VAR_13 - VAR_7->last_dma1_cur_pos);
   FUNC_2(VAR_7->fc_dev,
    VAR_7->dma[0].cpu_addr0 +
     VAR_7->last_dma1_cur_pos,
    VAR_13 - VAR_7->last_dma1_cur_pos);
  }
  FUNC_1("\n");

  VAR_7->last_dma1_cur_pos = VAR_13;
  VAR_7->count++;
 } else {
  FUNC_1("isr for flexcop called, "
   "apparently without reason (%08x)\n", VAR_10.raw);
  VAR_11 = VAR_1;
 }

 FUNC_6(&VAR_7->irq_lock, VAR_9);
 return VAR_11;
}
