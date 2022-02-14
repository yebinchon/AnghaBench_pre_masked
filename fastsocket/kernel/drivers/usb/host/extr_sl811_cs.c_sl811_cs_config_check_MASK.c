
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_11__ {int IOAddrLines; scalar_t__ NumPorts1; int BasePort1; int Attributes1; scalar_t__ NumPorts2; } ;
struct TYPE_15__ {int Vpp; int Attributes; } ;
struct pcmcia_device {TYPE_10__ io; TYPE_4__ conf; } ;
struct TYPE_17__ {scalar_t__ nwin; int flags; TYPE_5__* win; } ;
typedef TYPE_6__ cistpl_io_t ;
struct TYPE_14__ {scalar_t__ IRQInfo1; } ;
struct TYPE_13__ {int present; int* param; } ;
struct TYPE_12__ {int present; int* param; } ;
struct TYPE_18__ {scalar_t__ index; TYPE_6__ io; TYPE_3__ irq; TYPE_2__ vpp1; TYPE_1__ vcc; } ;
typedef TYPE_7__ cistpl_cftable_entry_t ;
struct TYPE_16__ {scalar_t__ len; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct pcmcia_device*) ;
 int FUNC_1 (struct pcmcia_device*,TYPE_10__*) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_5,
     cistpl_cftable_entry_t *VAR_6,
     cistpl_cftable_entry_t *VAR_7,
     unsigned int VAR_8,
     void *VAR_9)
{
 if (VAR_6->index == 0)
  return -VAR_3;



 if (VAR_6->vcc.present & (1<<VAR_1)) {
  if (VAR_6->vcc.param[VAR_1]/10000 != VAR_8)
   return -VAR_3;
 } else if (VAR_7->vcc.present & (1<<VAR_1)) {
  if (VAR_7->vcc.param[VAR_1]/10000 != VAR_8)
   return -VAR_3;
  }

 if (VAR_6->vpp1.present & (1<<VAR_1))
  VAR_5->conf.Vpp =
   VAR_6->vpp1.param[VAR_1]/10000;
 else if (VAR_7->vpp1.present & (1<<VAR_1))
  VAR_5->conf.Vpp =
   VAR_7->vpp1.param[VAR_1]/10000;


 if (VAR_6->irq.IRQInfo1 || VAR_7->irq.IRQInfo1)
  VAR_5->conf.Attributes |= VAR_2;


 VAR_5->io.NumPorts1 = VAR_5->io.NumPorts2 = 0;
 if ((VAR_6->io.nwin > 0) || (VAR_7->io.nwin > 0)) {
  cistpl_io_t *VAR_10 = (VAR_6->io.nwin) ? &VAR_6->io : &VAR_7->io;

  VAR_5->io.Attributes1 = VAR_4;
  VAR_5->io.IOAddrLines = VAR_10->flags & VAR_0;
  VAR_5->io.BasePort1 = VAR_10->win[0].base;
  VAR_5->io.NumPorts1 = VAR_10->win[0].len;

  return FUNC_1(VAR_5, &VAR_5->io);
 }
 FUNC_0(VAR_5);
 return -VAR_3;
}
