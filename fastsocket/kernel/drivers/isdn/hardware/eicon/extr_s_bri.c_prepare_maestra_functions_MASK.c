
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pc_maint {int dummy; } ;
struct TYPE_6__ {int ram_inc; int ram_out_buffer; int ram_outw; int ram_out; int ram_look_ahead; int ram_in_buffer; int ram_inw; int ram_in; } ;
struct TYPE_5__ {int diva_isr_handler; int trapFnc; int stop; int rstFnc; int disIrq; int load; struct pc_maint* pcm; int clr_irq; int tst_irq; int dpc; int out; int MemorySize; int MemoryBase; TYPE_2__ a; } ;
typedef TYPE_1__* PISDN_ADAPTER ;
typedef TYPE_2__ ADAPTER ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

void FUNC_1 (PISDN_ADAPTER VAR_21) {
 ADAPTER *VAR_22 = &VAR_21->a ;
 VAR_22->ram_in = VAR_6 ;
 VAR_22->ram_inw = VAR_9 ;
 VAR_22->ram_in_buffer = VAR_7 ;
 VAR_22->ram_look_ahead = VAR_10 ;
 VAR_22->ram_out = VAR_11 ;
 VAR_22->ram_outw = VAR_13 ;
 VAR_22->ram_out_buffer = VAR_12 ;
 VAR_22->ram_inc = VAR_8 ;
 VAR_21->MemoryBase = VAR_0 ;
 VAR_21->MemorySize = VAR_1 ;
 VAR_21->out = VAR_16 ;
 VAR_21->dpc = VAR_15 ;
 VAR_21->tst_irq = VAR_19 ;
 VAR_21->clr_irq = VAR_18 ;
 VAR_21->pcm = (struct pc_maint *)VAR_2 ;
 VAR_21->load = VAR_14 ;
 VAR_21->disIrq = VAR_5 ;
 VAR_21->rstFnc = VAR_17 ;
 VAR_21->stop = VAR_20 ;
 VAR_21->trapFnc = VAR_4 ;
 VAR_21->diva_isr_handler = VAR_3;



 FUNC_0 (VAR_21);
}
