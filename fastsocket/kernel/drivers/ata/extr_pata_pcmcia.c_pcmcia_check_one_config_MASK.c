
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


struct TYPE_16__ {int IOAddrLines; int NumPorts1; int NumPorts2; scalar_t__ BasePort1; scalar_t__ BasePort2; int Attributes1; } ;
struct TYPE_11__ {int Vpp; } ;
struct pcmcia_device {TYPE_7__ io; TYPE_2__ conf; } ;
struct pcmcia_config_check {scalar_t__ ctl_base; scalar_t__ is_kme; int skip_vcc; } ;
struct TYPE_14__ {scalar_t__ nwin; int flags; TYPE_4__* win; } ;
typedef TYPE_5__ cistpl_io_t ;
struct TYPE_12__ {int present; int* param; } ;
struct TYPE_10__ {int present; int* param; } ;
struct TYPE_15__ {TYPE_5__ io; TYPE_3__ vpp1; TYPE_1__ vcc; } ;
typedef TYPE_6__ cistpl_cftable_entry_t ;
struct TYPE_13__ {int len; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct pcmcia_device*,TYPE_7__*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_5,
       cistpl_cftable_entry_t *VAR_6,
       cistpl_cftable_entry_t *VAR_7,
       unsigned int VAR_8,
       void *VAR_9)
{
 struct pcmcia_config_check *VAR_10 = VAR_9;


 if (!VAR_10->skip_vcc) {
  if (VAR_6->vcc.present & (1 << VAR_2)) {
   if (VAR_8 != VAR_6->vcc.param[VAR_2] / 10000)
    return -VAR_3;
  } else if (VAR_7->vcc.present & (1 << VAR_2)) {
   if (VAR_8 != VAR_7->vcc.param[VAR_2] / 10000)
    return -VAR_3;
  }
 }

 if (VAR_6->vpp1.present & (1 << VAR_2))
  VAR_5->conf.Vpp = VAR_6->vpp1.param[VAR_2] / 10000;
 else if (VAR_7->vpp1.present & (1 << VAR_2))
  VAR_5->conf.Vpp = VAR_7->vpp1.param[VAR_2] / 10000;

 if ((VAR_6->io.nwin > 0) || (VAR_7->io.nwin > 0)) {
  cistpl_io_t *VAR_11 = (VAR_6->io.nwin) ? &VAR_6->io : &VAR_7->io;
  VAR_5->io.BasePort1 = VAR_11->win[0].base;
  VAR_5->io.IOAddrLines = VAR_11->flags & VAR_1;
  if (!(VAR_11->flags & VAR_0))
   VAR_5->io.Attributes1 = VAR_4;
  if (VAR_11->nwin == 2) {
   VAR_5->io.NumPorts1 = 8;
   VAR_5->io.BasePort2 = VAR_11->win[1].base;
   VAR_5->io.NumPorts2 = (VAR_10->is_kme) ? 2 : 1;
   if (FUNC_0(VAR_5, &VAR_5->io) != 0)
    return -VAR_3;
   VAR_10->ctl_base = VAR_5->io.BasePort2;
  } else if ((VAR_11->nwin == 1) && (VAR_11->win[0].len >= 16)) {
   VAR_5->io.NumPorts1 = VAR_11->win[0].len;
   VAR_5->io.NumPorts2 = 0;
   if (FUNC_0(VAR_5, &VAR_5->io) != 0)
    return -VAR_3;
   VAR_10->ctl_base = VAR_5->io.BasePort1 + 0x0e;
  } else
   return -VAR_3;

  return 0;
 }
 return -VAR_3;
}
