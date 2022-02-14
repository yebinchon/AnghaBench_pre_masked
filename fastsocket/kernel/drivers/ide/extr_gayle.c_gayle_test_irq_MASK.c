
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int irq_addr; } ;
struct TYPE_5__ {TYPE_1__ io_ports; } ;
typedef TYPE_2__ ide_hwif_t ;


 unsigned char VAR_0 ;
 unsigned char FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(ide_hwif_t *VAR_1)
{
    unsigned char VAR_2;

    VAR_2 = FUNC_0(VAR_1->io_ports.irq_addr);
    if (!(VAR_2 & VAR_0))
 return 0;
    return 1;
}
