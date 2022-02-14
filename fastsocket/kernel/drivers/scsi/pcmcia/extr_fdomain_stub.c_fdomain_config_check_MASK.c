
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {int BasePort1; } ;
struct pcmcia_device {TYPE_4__ io; } ;
struct TYPE_8__ {TYPE_1__* win; } ;
struct TYPE_9__ {TYPE_2__ io; } ;
typedef TYPE_3__ cistpl_cftable_entry_t ;
struct TYPE_7__ {int base; } ;


 int FUNC_0 (struct pcmcia_device*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_0,
    cistpl_cftable_entry_t *VAR_1,
    cistpl_cftable_entry_t *VAR_2,
    unsigned int VAR_3,
    void *VAR_4)
{
 VAR_0->io.BasePort1 = VAR_1->io.win[0].base;
 return FUNC_0(VAR_0, &VAR_0->io);
}
