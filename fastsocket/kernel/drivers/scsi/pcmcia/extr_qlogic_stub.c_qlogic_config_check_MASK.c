
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ BasePort1; int NumPorts1; } ;
struct pcmcia_device {TYPE_6__ io; } ;
struct TYPE_7__ {TYPE_2__* win; } ;
struct TYPE_9__ {TYPE_1__ io; } ;
typedef TYPE_3__ cistpl_cftable_entry_t ;
struct TYPE_8__ {scalar_t__ base; int len; } ;


 int VAR_0 ;
 int FUNC_0 (struct pcmcia_device*,TYPE_6__*) ;

__attribute__((used)) static int FUNC_1(struct pcmcia_device *VAR_1,
          cistpl_cftable_entry_t *VAR_2,
          cistpl_cftable_entry_t *VAR_3,
          unsigned int VAR_4,
          void *VAR_5)
{
 VAR_1->io.BasePort1 = VAR_2->io.win[0].base;
 VAR_1->io.NumPorts1 = VAR_2->io.win[0].len;

 if (VAR_1->io.BasePort1 == 0)
  return -VAR_0;

 return FUNC_0(VAR_1, &VAR_1->io);
}
