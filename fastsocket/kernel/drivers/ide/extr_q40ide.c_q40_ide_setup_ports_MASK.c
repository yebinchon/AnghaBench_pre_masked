
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* ctl_addr; void* status_addr; void* device_addr; void* lbah_addr; void* lbam_addr; void* lbal_addr; void* nsect_addr; void* error_addr; int data_addr; } ;
struct ide_hw {int irq; TYPE_1__ io_ports; } ;


 void* FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (struct ide_hw*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct ide_hw *VAR_0, unsigned long VAR_1, int VAR_2)
{
 FUNC_2(VAR_0, 0, sizeof(*VAR_0));


 VAR_0->io_ports.data_addr = FUNC_1(VAR_1);
 VAR_0->io_ports.error_addr = FUNC_0(VAR_1 + 1);
 VAR_0->io_ports.nsect_addr = FUNC_0(VAR_1 + 2);
 VAR_0->io_ports.lbal_addr = FUNC_0(VAR_1 + 3);
 VAR_0->io_ports.lbam_addr = FUNC_0(VAR_1 + 4);
 VAR_0->io_ports.lbah_addr = FUNC_0(VAR_1 + 5);
 VAR_0->io_ports.device_addr = FUNC_0(VAR_1 + 6);
 VAR_0->io_ports.status_addr = FUNC_0(VAR_1 + 7);
 VAR_0->io_ports.ctl_addr = FUNC_0(VAR_1 + 0x206);

 VAR_0->irq = VAR_2;
}
