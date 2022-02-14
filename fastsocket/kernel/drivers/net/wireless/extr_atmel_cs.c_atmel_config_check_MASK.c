
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ NumPorts2; int BasePort2; int Attributes1; int Attributes2; scalar_t__ NumPorts1; int BasePort1; } ;
struct TYPE_12__ {int Vpp; int Attributes; int Status; } ;
struct pcmcia_device {TYPE_7__ io; TYPE_3__ conf; } ;
struct TYPE_14__ {scalar_t__ nwin; int flags; TYPE_4__* win; } ;
typedef TYPE_5__ cistpl_io_t ;
struct TYPE_11__ {scalar_t__ IRQInfo1; } ;
struct TYPE_10__ {int present; int* param; } ;
struct TYPE_15__ {scalar_t__ index; int flags; TYPE_5__ io; TYPE_2__ irq; TYPE_1__ vpp1; } ;
typedef TYPE_6__ cistpl_cftable_entry_t ;
struct TYPE_13__ {scalar_t__ len; int base; } ;


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
 int FUNC_0 (struct pcmcia_device*,TYPE_7__*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_11,
         cistpl_cftable_entry_t *VAR_12,
         cistpl_cftable_entry_t *VAR_13,
         unsigned int VAR_14,
         void *VAR_15)
{
 if (VAR_12->index == 0)
  return -VAR_7;


 if (VAR_12->flags & VAR_1) {
  VAR_11->conf.Attributes |= VAR_6;
  VAR_11->conf.Status = VAR_0;
 }



 if (VAR_12->vpp1.present & (1<<VAR_4))
  VAR_11->conf.Vpp = VAR_12->vpp1.param[VAR_4]/10000;
 else if (VAR_13->vpp1.present & (1<<VAR_4))
  VAR_11->conf.Vpp = VAR_13->vpp1.param[VAR_4]/10000;


 if (VAR_12->irq.IRQInfo1 || VAR_13->irq.IRQInfo1)
  VAR_11->conf.Attributes |= VAR_5;


 VAR_11->io.NumPorts1 = VAR_11->io.NumPorts2 = 0;
 if ((VAR_12->io.nwin > 0) || (VAR_13->io.nwin > 0)) {
  cistpl_io_t *VAR_16 = (VAR_12->io.nwin) ? &VAR_12->io : &VAR_13->io;
  VAR_11->io.Attributes1 = VAR_10;
  if (!(VAR_16->flags & VAR_3))
   VAR_11->io.Attributes1 = VAR_8;
  if (!(VAR_16->flags & VAR_2))
   VAR_11->io.Attributes1 = VAR_9;
  VAR_11->io.BasePort1 = VAR_16->win[0].base;
  VAR_11->io.NumPorts1 = VAR_16->win[0].len;
  if (VAR_16->nwin > 1) {
   VAR_11->io.Attributes2 = VAR_11->io.Attributes1;
   VAR_11->io.BasePort2 = VAR_16->win[1].base;
   VAR_11->io.NumPorts2 = VAR_16->win[1].len;
  }
 }


 return FUNC_0(VAR_11, &VAR_11->io);
}
