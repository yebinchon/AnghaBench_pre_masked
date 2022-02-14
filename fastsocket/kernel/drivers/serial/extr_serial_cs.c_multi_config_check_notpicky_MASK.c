
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int BasePort1; int BasePort2; int IOAddrLines; } ;
struct pcmcia_device {TYPE_4__ io; } ;
struct TYPE_8__ {int nwin; int flags; TYPE_1__* win; } ;
struct TYPE_9__ {TYPE_2__ io; } ;
typedef TYPE_3__ cistpl_cftable_entry_t ;
struct TYPE_7__ {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pcmcia_device*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_2,
           cistpl_cftable_entry_t *VAR_3,
           cistpl_cftable_entry_t *VAR_4,
           unsigned int VAR_5,
           void *VAR_6)
{
 int *VAR_7 = VAR_6;

 if (VAR_3->io.nwin == 2) {
  VAR_2->io.BasePort1 = VAR_3->io.win[0].base;
  VAR_2->io.BasePort2 = VAR_3->io.win[1].base;
  VAR_2->io.IOAddrLines = VAR_3->io.flags & VAR_0;
  if (!FUNC_0(VAR_2, &VAR_2->io)) {
   *VAR_7 = VAR_2->io.BasePort2;
   return 0;
  }
 }
 return -VAR_1;
}
