
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pc_maint {int dummy; } ;
struct TYPE_5__ {int istream_wakeup; int ram_in_dw; int ram_out_dw; int ram_offset; int ram_inc; int ram_out_buffer; int ram_outw; int ram_out; int ram_look_ahead; int ram_in_buffer; int ram_inw; int ram_in; } ;
struct TYPE_4__ {int diva_isr_handler; int trapFnc; int stop; int rstFnc; int disIrq; int load; struct pc_maint* pcm; int clr_irq; int tst_irq; int dpc; int out; TYPE_2__ a; } ;
typedef TYPE_1__* PISDN_ADAPTER ;
typedef TYPE_2__ ADAPTER ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static void FUNC_0 (PISDN_ADAPTER VAR_24) {
 ADAPTER *VAR_25 = &VAR_24->a ;
 VAR_25->ram_in = VAR_4 ;
 VAR_25->ram_inw = VAR_8 ;
 VAR_25->ram_in_buffer = VAR_5 ;
 VAR_25->ram_look_ahead = VAR_9 ;
 VAR_25->ram_out = VAR_10 ;
 VAR_25->ram_outw = VAR_13 ;
 VAR_25->ram_out_buffer = VAR_11 ;
 VAR_25->ram_inc = VAR_7 ;
 VAR_25->ram_offset = VAR_19 ;
 VAR_25->ram_out_dw = VAR_12;
 VAR_25->ram_in_dw = VAR_6;
  VAR_25->istream_wakeup = VAR_16;
 VAR_24->out = VAR_15 ;
 VAR_24->dpc = VAR_14 ;
 VAR_24->tst_irq = VAR_22 ;
 VAR_24->clr_irq = VAR_21 ;
 VAR_24->pcm = (struct pc_maint *)(VAR_0
                                        - VAR_1) ;
 VAR_24->load = VAR_3 ;
 VAR_24->disIrq = VAR_2 ;
 VAR_24->rstFnc = VAR_20 ;
 VAR_24->stop = VAR_23 ;
 VAR_24->trapFnc = VAR_18 ;
 VAR_24->diva_isr_handler = VAR_17;
}
