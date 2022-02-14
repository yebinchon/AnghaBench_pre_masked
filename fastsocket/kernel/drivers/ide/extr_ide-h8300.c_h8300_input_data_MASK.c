
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ide_cmd {int dummy; } ;
struct TYPE_7__ {TYPE_2__* hwif; } ;
typedef TYPE_3__ ide_drive_t ;
struct TYPE_5__ {int data_addr; } ;
struct TYPE_6__ {TYPE_1__ io_ports; } ;


 int FUNC_0 (int ,void*,unsigned int) ;

__attribute__((used)) static void FUNC_1(ide_drive_t *VAR_0, struct ide_cmd *VAR_1,
        void *VAR_2, unsigned int VAR_3)
{
 FUNC_0(VAR_0->hwif->io_ports.data_addr, VAR_2, (VAR_3 + 1) / 2);
}
