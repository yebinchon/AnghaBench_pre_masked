
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_15__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_26__ {int Attributes; scalar_t__ AccessSpeed; int Size; int Base; } ;
typedef TYPE_7__ win_req_t ;
struct TYPE_19__ {scalar_t__ NumPorts2; int BasePort2; int Attributes1; int Attributes2; scalar_t__ NumPorts1; int BasePort1; } ;
struct TYPE_23__ {int Vpp; int Attributes; int Status; } ;
struct pcmcia_device {int win; TYPE_15__ io; TYPE_4__ conf; } ;
struct TYPE_27__ {int CardOffset; scalar_t__ Page; } ;
typedef TYPE_8__ memreq_t ;
struct TYPE_28__ {scalar_t__ nwin; TYPE_6__* win; } ;
typedef TYPE_9__ cistpl_mem_t ;
struct TYPE_17__ {scalar_t__ nwin; int flags; TYPE_5__* win; } ;
typedef TYPE_10__ cistpl_io_t ;
struct TYPE_22__ {scalar_t__ IRQInfo1; } ;
struct TYPE_21__ {int present; int* param; } ;
struct TYPE_20__ {int present; int* param; } ;
struct TYPE_18__ {scalar_t__ index; int flags; TYPE_9__ mem; TYPE_10__ io; TYPE_3__ irq; TYPE_2__ vpp1; TYPE_1__ vcc; } ;
typedef TYPE_11__ cistpl_cftable_entry_t ;
struct TYPE_25__ {int card_addr; int len; int host_addr; } ;
struct TYPE_24__ {scalar_t__ len; int base; } ;


 int VAR_0 ;
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
 scalar_t__ FUNC_0 (int ,TYPE_8__*) ;
 scalar_t__ FUNC_1 (struct pcmcia_device*,TYPE_15__*) ;
 scalar_t__ FUNC_2 (struct pcmcia_device**,TYPE_7__*,int *) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_14,
      cistpl_cftable_entry_t *VAR_15,
      cistpl_cftable_entry_t *VAR_16,
      unsigned int VAR_17,
      void *VAR_18)
{
 win_req_t *VAR_19 = VAR_18;

 if (VAR_15->index == 0)
  return -VAR_7;


 if (VAR_15->flags & VAR_1) {
  VAR_14->conf.Attributes |= VAR_6;
  VAR_14->conf.Status = VAR_0;
 }



 if (VAR_15->vcc.present & (1<<VAR_4)) {
  if (VAR_17 != VAR_15->vcc.param[VAR_4]/10000)
   return -VAR_7;
 } else if (VAR_16->vcc.present & (1<<VAR_4)) {
  if (VAR_17 != VAR_16->vcc.param[VAR_4]/10000)
   return -VAR_7;
 }

 if (VAR_15->vpp1.present & (1<<VAR_4))
  VAR_14->conf.Vpp = VAR_15->vpp1.param[VAR_4]/10000;
 else if (VAR_16->vpp1.present & (1<<VAR_4))
  VAR_14->conf.Vpp = VAR_16->vpp1.param[VAR_4]/10000;


 if (VAR_15->irq.IRQInfo1 || VAR_16->irq.IRQInfo1)
  VAR_14->conf.Attributes |= VAR_5;


 VAR_14->io.NumPorts1 = VAR_14->io.NumPorts2 = 0;
 if ((VAR_15->io.nwin > 0) || (VAR_16->io.nwin > 0)) {
  cistpl_io_t *VAR_20 = (VAR_15->io.nwin) ? &VAR_15->io : &VAR_16->io;
  VAR_14->io.Attributes1 = VAR_10;
  if (!(VAR_20->flags & VAR_3))
   VAR_14->io.Attributes1 = VAR_8;
  if (!(VAR_20->flags & VAR_2))
   VAR_14->io.Attributes1 = VAR_9;
  VAR_14->io.BasePort1 = VAR_20->win[0].base;
  VAR_14->io.NumPorts1 = VAR_20->win[0].len;
  if (VAR_20->nwin > 1) {
   VAR_14->io.Attributes2 = VAR_14->io.Attributes1;
   VAR_14->io.BasePort2 = VAR_20->win[1].base;
   VAR_14->io.NumPorts2 = VAR_20->win[1].len;
  }

  if (FUNC_1(VAR_14, &VAR_14->io) != 0)
   return -VAR_7;
 }
 if ((VAR_15->mem.nwin > 0) || (VAR_16->mem.nwin > 0)) {
  cistpl_mem_t *VAR_21 = (VAR_15->mem.nwin) ? &VAR_15->mem : &VAR_16->mem;
  memreq_t VAR_22;
  VAR_19->Attributes = VAR_11|VAR_13;
  VAR_19->Attributes |= VAR_12;
  VAR_19->Base = VAR_21->win[0].host_addr;
  VAR_19->Size = VAR_21->win[0].len;
  VAR_19->AccessSpeed = 0;
  if (FUNC_2(&VAR_14, VAR_19, &VAR_14->win) != 0)
   return -VAR_7;
  VAR_22.Page = 0;
  VAR_22.CardOffset = VAR_21->win[0].card_addr;
  if (FUNC_0(VAR_14->win, &VAR_22) != 0)
   return -VAR_7;
 }
 return 0;
}
