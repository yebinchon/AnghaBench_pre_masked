
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_7__ {int sense_interrupt_mask_reg; int clr_interrupt_mask_reg32; int clr_interrupt_mask_reg; int set_uproc_interrupt_reg32; int sense_interrupt_reg32; int endian_swap_reg; } ;
struct ipr_ioa_cfg {int hrrq_num; int volatile doorbell; int transop_timeout; scalar_t__ sis64; TYPE_3__* pdev; TYPE_2__ regs; TYPE_1__* hrrq; } ;
struct TYPE_10__ {unsigned long data; void (* function ) (unsigned long) ;scalar_t__ expires; } ;
struct ipr_cmnd {TYPE_4__* hrrq; int queue; TYPE_5__ timer; int done; int job_step; struct ipr_ioa_cfg* ioa_cfg; } ;
struct TYPE_9__ {int hrrq_pending_q; } ;
struct TYPE_8__ {int dev; } ;
struct TYPE_6__ {int allow_interrupts; int _lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int volatile VAR_2 ;
 int volatile VAR_3 ;
 int volatile VAR_4 ;
 int volatile VAR_5 ;
 int VAR_6 ;
 int volatile VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct ipr_ioa_cfg*) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int volatile,int ) ;
 int FUNC_9 (int volatile,int ) ;

__attribute__((used)) static int FUNC_10(struct ipr_cmnd *VAR_16)
{
 struct ipr_ioa_cfg *VAR_17 = VAR_16->ioa_cfg;
 volatile u32 VAR_18;
 volatile u64 VAR_19;
 int VAR_20;

 VAR_0;
 VAR_16->job_step = VAR_11;
 FUNC_2(VAR_17);

 for (VAR_20 = 0; VAR_20 < VAR_17->hrrq_num; VAR_20++) {
  FUNC_5(&VAR_17->hrrq[VAR_20]._lock);
  VAR_17->hrrq[VAR_20].allow_interrupts = 1;
  FUNC_6(&VAR_17->hrrq[VAR_20]._lock);
 }
 FUNC_7();
 if (VAR_17->sis64) {

  FUNC_8(VAR_2, VAR_17->regs.endian_swap_reg);
  VAR_18 = FUNC_4(VAR_17->regs.endian_swap_reg);
 }

 VAR_18 = FUNC_4(VAR_17->regs.sense_interrupt_reg32);

 if (VAR_18 & VAR_5) {
  FUNC_8((VAR_3 | VAR_4),
         VAR_17->regs.clr_interrupt_mask_reg32);
  VAR_18 = FUNC_4(VAR_17->regs.sense_interrupt_mask_reg);
  return VAR_8;
 }


 FUNC_8(VAR_17->doorbell, VAR_17->regs.set_uproc_interrupt_reg32);

 if (VAR_17->sis64) {
  VAR_19 = VAR_6;
  VAR_19 = (VAR_19 << 32) | VAR_7;
  FUNC_9(VAR_19, VAR_17->regs.clr_interrupt_mask_reg);
 } else
  FUNC_8(VAR_7, VAR_17->regs.clr_interrupt_mask_reg32);

 VAR_18 = FUNC_4(VAR_17->regs.sense_interrupt_mask_reg);

 FUNC_1(&VAR_17->pdev->dev, "Initializing IOA.\n");

 if (VAR_17->sis64) {
  VAR_16->job_step = VAR_14;
  return VAR_8;
 }

 VAR_16->timer.data = (unsigned long) VAR_16;
 VAR_16->timer.expires = VAR_15 + (VAR_17->transop_timeout * VAR_1);
 VAR_16->timer.function = (void (*)(unsigned long))VAR_12;
 VAR_16->done = VAR_13;
 FUNC_0(&VAR_16->timer);
 FUNC_3(&VAR_16->queue, &VAR_16->hrrq->hrrq_pending_q);

 VAR_10;
 return VAR_9;
}
