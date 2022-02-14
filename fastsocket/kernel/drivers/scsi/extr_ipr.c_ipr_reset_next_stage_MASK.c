
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {int sense_interrupt_mask_reg; int set_interrupt_mask_reg; int sense_interrupt_reg32; int init_feedback_reg; } ;
struct ipr_ioa_cfg {unsigned long transop_timeout; TYPE_1__ regs; } ;
struct TYPE_6__ {unsigned long data; void (* function ) (unsigned long) ;scalar_t__ expires; } ;
struct ipr_cmnd {TYPE_2__* hrrq; int queue; TYPE_3__ timer; int done; void* job_step; struct ipr_ioa_cfg* ioa_cfg; } ;
struct TYPE_5__ {int hrrq_pending_q; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 int volatile VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (char*,unsigned long,unsigned long) ;
 void* VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_2 (int *,int *) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;

__attribute__((used)) static int FUNC_6(struct ipr_cmnd *VAR_16)
{
 unsigned long VAR_17, VAR_18;
 u32 VAR_19;
 volatile u32 VAR_20;
 struct ipr_ioa_cfg *VAR_21 = VAR_16->ioa_cfg;
 u64 VAR_22 = 0;

 VAR_19 = FUNC_3(VAR_21->regs.init_feedback_reg);
 VAR_17 = VAR_19 & VAR_3;
 VAR_18 = VAR_19 & VAR_4;

 FUNC_1("IPL stage = 0x%lx, IPL stage time = %ld\n", VAR_17, VAR_18);


 if (VAR_18 == 0)
  VAR_18 = VAR_1;
 else if (VAR_18 < VAR_2)
  VAR_18 = VAR_2;
 else if (VAR_18 > VAR_7)
  VAR_18 = VAR_7;

 if (VAR_17 == VAR_6) {
  FUNC_4(VAR_9, VAR_21->regs.set_interrupt_mask_reg);
  VAR_20 = FUNC_3(VAR_21->regs.sense_interrupt_mask_reg);
  VAR_18 = VAR_21->transop_timeout;
  VAR_16->job_step = VAR_12;
 } else if (VAR_17 == VAR_5) {
  VAR_20 = FUNC_3(VAR_21->regs.sense_interrupt_reg32);
  if (VAR_20 & VAR_8) {
   VAR_16->job_step = VAR_12;
   VAR_22 = VAR_9;
   VAR_22 = (VAR_22 << 32) | VAR_8;
   FUNC_5(VAR_22, VAR_21->regs.set_interrupt_mask_reg);
   VAR_20 = FUNC_3(VAR_21->regs.sense_interrupt_mask_reg);
   return VAR_10;
  }
 }

 VAR_16->timer.data = (unsigned long) VAR_16;
 VAR_16->timer.expires = VAR_15 + VAR_18 * VAR_0;
 VAR_16->timer.function = (void (*)(unsigned long))VAR_13;
 VAR_16->done = VAR_14;
 FUNC_0(&VAR_16->timer);

 FUNC_2(&VAR_16->queue, &VAR_16->hrrq->hrrq_pending_q);

 return VAR_11;
}
