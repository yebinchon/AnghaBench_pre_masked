
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_9__ ;
typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct TYPE_23__ {int Attributes; scalar_t__ AccessSpeed; int Size; int Base; } ;
typedef TYPE_6__ win_req_t ;
struct TYPE_17__ {scalar_t__ NumPorts2; int BasePort2; int Attributes1; int Attributes2; scalar_t__ NumPorts1; int BasePort1; } ;
struct TYPE_20__ {int Vpp; int Attributes; int Status; } ;
struct pcmcia_device {int win; TYPE_12__ io; TYPE_3__ conf; } ;
struct TYPE_24__ {int CardOffset; scalar_t__ Page; } ;
typedef TYPE_7__ memreq_t ;
struct TYPE_25__ {scalar_t__ nwin; TYPE_5__* win; } ;
typedef TYPE_8__ cistpl_mem_t ;
struct TYPE_26__ {scalar_t__ nwin; int flags; TYPE_4__* win; } ;
typedef TYPE_9__ cistpl_io_t ;
struct TYPE_19__ {scalar_t__ IRQInfo1; } ;
struct TYPE_18__ {int present; int* param; } ;
struct TYPE_16__ {scalar_t__ index; int flags; TYPE_8__ mem; TYPE_9__ io; TYPE_2__ irq; TYPE_1__ vpp1; } ;
typedef TYPE_10__ cistpl_cftable_entry_t ;
struct TYPE_22__ {int card_addr; int len; int host_addr; } ;
struct TYPE_21__ {scalar_t__ len; int base; } ;


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
 scalar_t__ FUNC_0 (int ,TYPE_7__*) ;
 scalar_t__ FUNC_1 (struct pcmcia_device*,TYPE_12__*) ;
 scalar_t__ FUNC_2 (struct pcmcia_device**,TYPE_6__*,int *) ;

__attribute__((used)) static int FUNC_3(struct pcmcia_device *VAR_13,
    cistpl_cftable_entry_t *VAR_14,
    cistpl_cftable_entry_t *VAR_15,
    unsigned int VAR_16,
    void *VAR_17)
{
 win_req_t *VAR_18 = VAR_17;

 if (VAR_14->index == 0)
  return -VAR_7;


 if (VAR_14->flags & VAR_1) {
  VAR_13->conf.Attributes |= VAR_6;
  VAR_13->conf.Status = VAR_0;
 }



 if (VAR_14->vpp1.present & (1<<VAR_4))
  VAR_13->conf.Vpp = VAR_14->vpp1.param[VAR_4]/10000;
 else if (VAR_15->vpp1.present & (1<<VAR_4))
  VAR_13->conf.Vpp = VAR_15->vpp1.param[VAR_4]/10000;


 if (VAR_14->irq.IRQInfo1 || VAR_15->irq.IRQInfo1)
  VAR_13->conf.Attributes |= VAR_5;


 VAR_13->io.NumPorts1 = VAR_13->io.NumPorts2 = 0;
 if ((VAR_14->io.nwin > 0) || (VAR_15->io.nwin > 0)) {
  cistpl_io_t *VAR_19 = (VAR_14->io.nwin) ? &VAR_14->io : &VAR_15->io;
  VAR_13->io.Attributes1 = VAR_10;
  if (!(VAR_19->flags & VAR_3))
   VAR_13->io.Attributes1 = VAR_8;
  if (!(VAR_19->flags & VAR_2))
   VAR_13->io.Attributes1 = VAR_9;
  VAR_13->io.BasePort1 = VAR_19->win[0].base;
  VAR_13->io.NumPorts1 = VAR_19->win[0].len;
  if (VAR_19->nwin > 1) {
   VAR_13->io.Attributes2 = VAR_13->io.Attributes1;
   VAR_13->io.BasePort2 = VAR_19->win[1].base;
   VAR_13->io.NumPorts2 = VAR_19->win[1].len;
  }
 }


 if (FUNC_1(VAR_13, &VAR_13->io) != 0)
  return -VAR_7;
 if ((VAR_14->mem.nwin > 0) || (VAR_15->mem.nwin > 0)) {
  cistpl_mem_t *VAR_20 = (VAR_14->mem.nwin) ? &VAR_14->mem : &VAR_15->mem;
  memreq_t VAR_21;
  VAR_18->Attributes = VAR_11|VAR_12;
  VAR_18->Base = VAR_20->win[0].host_addr;
  VAR_18->Size = VAR_20->win[0].len;
  VAR_18->AccessSpeed = 0;
  if (FUNC_2(&VAR_13, VAR_18, &VAR_13->win) != 0)
   return -VAR_7;
  VAR_21.Page = 0;
  VAR_21.CardOffset = VAR_20->win[0].card_addr;
  if (FUNC_0(VAR_13->win, &VAR_21) != 0)
   return -VAR_7;
 }

 return 0;
}
