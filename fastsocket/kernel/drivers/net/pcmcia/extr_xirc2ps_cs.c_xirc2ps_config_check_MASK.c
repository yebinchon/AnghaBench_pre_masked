
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int BasePort2; int BasePort1; } ;
struct pcmcia_device {TYPE_6__ io; } ;
struct TYPE_8__ {scalar_t__ nwin; TYPE_1__* win; } ;
struct TYPE_9__ {int index; TYPE_2__ io; } ;
typedef TYPE_3__ cistpl_cftable_entry_t ;
struct TYPE_7__ {int base; } ;


 int VAR_0 ;
 int FUNC_0 (struct pcmcia_device*,TYPE_6__*) ;

__attribute__((used)) static int
FUNC_1(struct pcmcia_device *VAR_1,
       cistpl_cftable_entry_t *VAR_2,
       cistpl_cftable_entry_t *VAR_3,
       unsigned int VAR_4,
       void *VAR_5)
{
 int *VAR_6 = VAR_5;

 if (VAR_2->io.nwin > 0 && (VAR_2->io.win[0].base & 0xf) == 8) {
  VAR_1->io.BasePort2 = VAR_2->io.win[0].base;
  VAR_1->io.BasePort1 = VAR_1->io.BasePort2
   + (*VAR_6 ? (VAR_2->index & 0x20 ? -24:8)
      : (VAR_2->index & 0x20 ? 8:-24));
  if (!FUNC_0(VAR_1, &VAR_1->io))
   return 0;
 }
 return -VAR_0;

}
