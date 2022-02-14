
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int dev_flags; int select; TYPE_2__* hwif; } ;
typedef TYPE_3__ ide_drive_t ;
struct TYPE_6__ {int device_addr; } ;
struct TYPE_7__ {TYPE_1__ io_ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_3__*,int) ;

__attribute__((used)) static void FUNC_2(ide_drive_t *VAR_2)
{
 FUNC_1(VAR_2, !!(VAR_2->dev_flags & VAR_1));

 FUNC_0(VAR_2->select | VAR_0, VAR_2->hwif->io_ports.device_addr);
}
