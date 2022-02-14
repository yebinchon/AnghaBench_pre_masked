
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {scalar_t__ ctl_addr; } ;
struct TYPE_5__ {scalar_t__ dma_base; TYPE_1__ io_ports; } ;
typedef TYPE_2__ ide_hwif_t ;


 int FUNC_0 () ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,int ) ;

__attribute__((used)) static void FUNC_3(ide_hwif_t *VAR_0, u8 VAR_1)
{
 FUNC_2((void *)VAR_0->io_ports.ctl_addr, VAR_1);
 FUNC_0();
 FUNC_1((void *)(VAR_0->dma_base + 0x01c));
 FUNC_0();
}
