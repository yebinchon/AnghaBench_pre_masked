
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {scalar_t__ status_addr; } ;
struct TYPE_5__ {TYPE_1__ io_ports; } ;
typedef TYPE_2__ ide_hwif_t ;


 int FUNC_0 (void*) ;

__attribute__((used)) static u8 FUNC_1(ide_hwif_t *VAR_0)
{
 return (u8)FUNC_0((void *)VAR_0->io_ports.status_addr);
}
