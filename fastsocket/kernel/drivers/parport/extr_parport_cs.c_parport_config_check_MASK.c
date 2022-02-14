
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int IOAddrLines; int NumPorts2; int BasePort2; int NumPorts1; int BasePort1; } ;
struct TYPE_8__ {int ConfigIndex; } ;
struct pcmcia_device {TYPE_5__ io; TYPE_1__ conf; } ;
struct TYPE_10__ {scalar_t__ nwin; int flags; TYPE_2__* win; } ;
typedef TYPE_3__ cistpl_io_t ;
struct TYPE_11__ {TYPE_3__ io; } ;
typedef TYPE_4__ cistpl_cftable_entry_t ;
struct TYPE_9__ {int len; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct pcmcia_device*,TYPE_5__*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_4,
    cistpl_cftable_entry_t *VAR_5,
    cistpl_cftable_entry_t *VAR_6,
    unsigned int VAR_7,
    void *VAR_8)
{
 if ((VAR_5->io.nwin > 0) || (VAR_6->io.nwin > 0)) {
  cistpl_io_t *VAR_9 = (VAR_5->io.nwin) ? &VAR_5->io : &VAR_6->io;
  if (VAR_3)
   VAR_4->conf.ConfigIndex |= VAR_2;
  VAR_4->io.BasePort1 = VAR_9->win[0].base;
  VAR_4->io.NumPorts1 = VAR_9->win[0].len;
  VAR_4->io.IOAddrLines = VAR_9->flags & VAR_0;
  if (VAR_9->nwin == 2) {
   VAR_4->io.BasePort2 = VAR_9->win[1].base;
   VAR_4->io.NumPorts2 = VAR_9->win[1].len;
  }
  if (FUNC_0(VAR_4, &VAR_4->io) != 0)
   return -VAR_1;
  return 0;
 }
 return -VAR_1;
}
