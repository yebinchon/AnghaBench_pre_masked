
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pcmcia_device {TYPE_3__* priv; } ;
struct TYPE_8__ {TYPE_1__* host; } ;
typedef TYPE_3__ ide_info_t ;
struct TYPE_7__ {unsigned long data_addr; unsigned long ctl_addr; } ;
struct TYPE_9__ {TYPE_2__ io_ports; } ;
typedef TYPE_4__ ide_hwif_t ;
struct TYPE_6__ {TYPE_4__** ports; } ;


 int FUNC_0 (int ,char*,struct pcmcia_device*) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (unsigned long,int) ;

__attribute__((used)) static void FUNC_4(struct pcmcia_device *VAR_0)
{
    ide_info_t *VAR_1 = VAR_0->priv;
    ide_hwif_t *VAR_2 = VAR_1->host->ports[0];
    unsigned long VAR_3, VAR_4;

    FUNC_0(0, "ide_detach(0x%p)\n", VAR_0);

    VAR_3 = VAR_2->io_ports.data_addr;
    VAR_4 = VAR_2->io_ports.ctl_addr;

    FUNC_1(VAR_0);

    FUNC_3(VAR_4, 1);
    FUNC_3(VAR_3, 8);

    FUNC_2(VAR_1);
}
