
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pc_maint {int dummy; } ;
struct TYPE_5__ {void* io; int ram_inc; int ram_out_buffer; int ram_outw; int ram_out; int ram_look_ahead; int ram_in_buffer; int ram_inw; int ram_in; } ;
struct TYPE_4__ {TYPE_2__ a; int diva_isr_handler; int trapFnc; int stop; int rstFnc; int disIrq; int load; struct pc_maint* pcm; int clr_irq; int tst_irq; int dpc; int out; } ;
typedef TYPE_1__* PISDN_ADAPTER ;
typedef TYPE_2__ ADAPTER ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
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

__attribute__((used)) static void FUNC_0 (PISDN_ADAPTER VAR_19) {
 ADAPTER *VAR_20;

 VAR_20 = &VAR_19->a ;

 VAR_20->ram_in = VAR_3 ;
 VAR_20->ram_inw = VAR_6 ;
 VAR_20->ram_in_buffer = VAR_4 ;
 VAR_20->ram_look_ahead = VAR_7 ;
 VAR_20->ram_out = VAR_8 ;
 VAR_20->ram_outw = VAR_10 ;
 VAR_20->ram_out_buffer = VAR_9 ;
 VAR_20->ram_inc = VAR_5 ;

 VAR_19->out = VAR_12 ;
 VAR_19->dpc = VAR_11 ;
 VAR_19->tst_irq = VAR_17 ;
 VAR_19->clr_irq = VAR_16 ;
 VAR_19->pcm = (struct pc_maint *)VAR_0 ;

 VAR_19->load = VAR_2 ;

 VAR_19->disIrq = VAR_1 ;
 VAR_19->rstFnc = VAR_15 ;
 VAR_19->stop = VAR_18 ;
 VAR_19->trapFnc = VAR_14 ;

 VAR_19->diva_isr_handler = VAR_13;

 VAR_19->a.io = (void*)VAR_19 ;
}
