
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct TYPE_20__ {int IOAddrLines; scalar_t__ NumPorts2; int BasePort2; int Attributes1; int Attributes2; scalar_t__ NumPorts1; int BasePort1; } ;
struct TYPE_25__ {int Vpp; int Attributes; int Status; } ;
struct pcmcia_device {int win; TYPE_13__ io; TYPE_5__ conf; } ;
struct TYPE_19__ {int Attributes; int Size; int Base; scalar_t__ AccessSpeed; } ;
struct nsp_cs_configdata {TYPE_12__ req; TYPE_1__* data; } ;
struct TYPE_28__ {int CardOffset; scalar_t__ Page; } ;
typedef TYPE_8__ memreq_t ;
struct TYPE_29__ {scalar_t__ nwin; TYPE_7__* win; } ;
typedef TYPE_9__ cistpl_mem_t ;
struct TYPE_17__ {scalar_t__ nwin; int flags; TYPE_6__* win; } ;
typedef TYPE_10__ cistpl_io_t ;
struct TYPE_24__ {scalar_t__ IRQInfo1; } ;
struct TYPE_23__ {int present; int* param; } ;
struct TYPE_22__ {int present; int* param; } ;
struct TYPE_18__ {scalar_t__ index; int flags; TYPE_9__ mem; TYPE_10__ io; TYPE_4__ irq; TYPE_3__ vpp1; TYPE_2__ vcc; } ;
typedef TYPE_11__ cistpl_cftable_entry_t ;
struct TYPE_27__ {int len; int card_addr; int host_addr; } ;
struct TYPE_26__ {scalar_t__ len; int base; } ;
struct TYPE_21__ {unsigned long MmioAddress; int MmioLength; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct pcmcia_device*) ;
 scalar_t__ FUNC_3 (int ,TYPE_8__*) ;
 scalar_t__ FUNC_4 (struct pcmcia_device*,TYPE_13__*) ;
 scalar_t__ FUNC_5 (struct pcmcia_device**,TYPE_12__*,int *) ;

__attribute__((used)) static int FUNC_6(struct pcmcia_device *VAR_16,
          cistpl_cftable_entry_t *VAR_17,
          cistpl_cftable_entry_t *VAR_18,
          unsigned int VAR_19,
          void *VAR_20)
{
 struct nsp_cs_configdata *VAR_21 = VAR_20;

 if (VAR_17->index == 0)
  return -VAR_8;


 if (VAR_17->flags & VAR_1) {
  VAR_16->conf.Attributes |= VAR_7;
  VAR_16->conf.Status = VAR_0;
 }



 if (VAR_17->vcc.present & (1<<VAR_5)) {
  if (VAR_19 != VAR_17->vcc.param[VAR_5]/10000)
   return -VAR_8;
  else if (VAR_18->vcc.present & (1<<VAR_5)) {
   if (VAR_19 != VAR_18->vcc.param[VAR_5]/10000)
    return -VAR_8;
  }

  if (VAR_17->vpp1.present & (1 << VAR_5)) {
   VAR_16->conf.Vpp =
    VAR_17->vpp1.param[VAR_5] / 10000;
  } else if (VAR_18->vpp1.present & (1 << VAR_5)) {
   VAR_16->conf.Vpp =
    VAR_18->vpp1.param[VAR_5] / 10000;
  }


  if (VAR_17->irq.IRQInfo1 || VAR_18->irq.IRQInfo1)
   VAR_16->conf.Attributes |= VAR_6;


  VAR_16->io.NumPorts1 = VAR_16->io.NumPorts2 = 0;
  if ((VAR_17->io.nwin > 0) || (VAR_18->io.nwin > 0)) {
   cistpl_io_t *VAR_22 = (VAR_17->io.nwin) ? &VAR_17->io : &VAR_18->io;
   VAR_16->io.Attributes1 = VAR_11;
   if (!(VAR_22->flags & VAR_3))
    VAR_16->io.Attributes1 = VAR_9;
   if (!(VAR_22->flags & VAR_2))
    VAR_16->io.Attributes1 = VAR_10;
   VAR_16->io.IOAddrLines = VAR_22->flags & VAR_4;
   VAR_16->io.BasePort1 = VAR_22->win[0].base;
   VAR_16->io.NumPorts1 = VAR_22->win[0].len;
   if (VAR_22->nwin > 1) {
    VAR_16->io.Attributes2 = VAR_16->io.Attributes1;
    VAR_16->io.BasePort2 = VAR_22->win[1].base;
    VAR_16->io.NumPorts2 = VAR_22->win[1].len;
   }

   if (FUNC_4(VAR_16, &VAR_16->io) != 0)
    goto next_entry;
  }

  if ((VAR_17->mem.nwin > 0) || (VAR_18->mem.nwin > 0)) {
   memreq_t VAR_23;
   cistpl_mem_t *VAR_24 =
    (VAR_17->mem.nwin) ? &VAR_17->mem : &VAR_18->mem;
   VAR_21->req.Attributes = VAR_13|VAR_15;
   VAR_21->req.Attributes |= VAR_14;
   VAR_21->req.Base = VAR_24->win[0].host_addr;
   VAR_21->req.Size = VAR_24->win[0].len;
   if (VAR_21->req.Size < 0x1000)
    VAR_21->req.Size = 0x1000;
   VAR_21->req.AccessSpeed = 0;
   if (FUNC_5(&VAR_16, &VAR_21->req, &VAR_16->win) != 0)
    goto next_entry;
   VAR_23.Page = 0; VAR_23.CardOffset = VAR_24->win[0].card_addr;
   if (FUNC_3(VAR_16->win, &VAR_23) != 0)
    goto next_entry;

   VAR_21->data->MmioAddress = (unsigned long) FUNC_0(VAR_21->req.Base, VAR_21->req.Size);
   VAR_21->data->MmioLength = VAR_21->req.Size;
  }

  return 0;
 }

next_entry:
 FUNC_1(VAR_12, "next");
 FUNC_2(VAR_16);
 return -VAR_8;
}
