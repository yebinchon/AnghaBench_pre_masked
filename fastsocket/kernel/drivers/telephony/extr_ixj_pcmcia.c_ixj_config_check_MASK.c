
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int NumPorts2; int BasePort2; int NumPorts1; int BasePort1; } ;
struct pcmcia_device {TYPE_4__ io; } ;
struct TYPE_8__ {scalar_t__ nwin; TYPE_1__* win; } ;
typedef TYPE_2__ cistpl_io_t ;
struct TYPE_9__ {TYPE_2__ io; } ;
typedef TYPE_3__ cistpl_cftable_entry_t ;
struct TYPE_7__ {int len; int base; } ;


 int VAR_0 ;
 int FUNC_0 (struct pcmcia_device*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_1,
       cistpl_cftable_entry_t *VAR_2,
       cistpl_cftable_entry_t *VAR_3,
       unsigned int VAR_4,
       void *VAR_5)
{
 if ((VAR_2->io.nwin > 0) || (VAR_3->io.nwin > 0)) {
  cistpl_io_t *VAR_6 = (VAR_2->io.nwin) ? &VAR_2->io : &VAR_3->io;
  VAR_1->io.BasePort1 = VAR_6->win[0].base;
  VAR_1->io.NumPorts1 = VAR_6->win[0].len;
  if (VAR_6->nwin == 2) {
   VAR_1->io.BasePort2 = VAR_6->win[1].base;
   VAR_1->io.NumPorts2 = VAR_6->win[1].len;
  }
  if (!FUNC_0(VAR_1, &VAR_1->io))
   return 0;
 }
 return -VAR_0;
}
