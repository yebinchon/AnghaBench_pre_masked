
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int irq_addr; int status_addr; } ;
struct TYPE_6__ {TYPE_1__ io_ports; } ;
typedef TYPE_2__ ide_hwif_t ;
struct TYPE_7__ {TYPE_2__* hwif; } ;
typedef TYPE_3__ ide_drive_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;

__attribute__((used)) static void FUNC_2(ide_drive_t *VAR_0)
{
    ide_hwif_t *VAR_1 = VAR_0->hwif;

    (void)FUNC_0(VAR_1->io_ports.status_addr);
    FUNC_1(0x7c, VAR_1->io_ports.irq_addr);
}
