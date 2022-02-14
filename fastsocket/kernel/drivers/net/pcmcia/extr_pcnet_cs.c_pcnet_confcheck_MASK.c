
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ NumPorts2; scalar_t__ NumPorts1; int IOAddrLines; int BasePort1; int BasePort2; } ;
struct pcmcia_device {TYPE_4__ io; } ;
struct TYPE_13__ {scalar_t__ nwin; int flags; TYPE_3__* win; } ;
typedef TYPE_5__ cistpl_io_t ;
struct TYPE_10__ {int nwin; TYPE_1__* win; } ;
struct TYPE_14__ {scalar_t__ index; TYPE_2__ mem; TYPE_5__ io; } ;
typedef TYPE_6__ cistpl_cftable_entry_t ;
struct TYPE_11__ {scalar_t__ len; int base; } ;
struct TYPE_9__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_2,
      cistpl_cftable_entry_t *VAR_3,
      cistpl_cftable_entry_t *VAR_4,
      unsigned int VAR_5,
      void *VAR_6)
{
 int *VAR_7 = VAR_6;
 int VAR_8;
 cistpl_io_t *VAR_9 = &VAR_3->io;

 if (VAR_3->index == 0 || VAR_3->io.nwin == 0)
  return -VAR_1;



 if (VAR_9->nwin > 1) {
  VAR_8 = (VAR_9->win[1].len > VAR_9->win[0].len);
  VAR_2->io.BasePort2 = VAR_9->win[1-VAR_8].base;
  VAR_2->io.NumPorts2 = VAR_9->win[1-VAR_8].len;
 } else {
  VAR_8 = VAR_2->io.NumPorts2 = 0;
 }

 *VAR_7 = ((VAR_3->mem.nwin == 1) &&
        (VAR_3->mem.win[0].len >= 0x4000));
 VAR_2->io.BasePort1 = VAR_9->win[VAR_8].base;
 VAR_2->io.NumPorts1 = VAR_9->win[VAR_8].len;
 VAR_2->io.IOAddrLines = VAR_9->flags & VAR_0;
 if (VAR_2->io.NumPorts1 + VAR_2->io.NumPorts2 >= 32)
  return FUNC_0(VAR_2);

 return 0;
}
