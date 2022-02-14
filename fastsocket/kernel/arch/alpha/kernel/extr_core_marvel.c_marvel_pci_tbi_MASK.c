
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_controller {scalar_t__ sysdata; } ;
struct io7_port {TYPE_2__* csrs; } ;
struct TYPE_3__ {scalar_t__ csr; } ;
struct TYPE_4__ {TYPE_1__ POx_SG_TBIA; } ;
typedef TYPE_2__ io7_ioport_csrs ;
typedef int dma_addr_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;

void
FUNC_2(struct pci_controller *VAR_0, dma_addr_t VAR_1, dma_addr_t VAR_2)
{
 io7_ioport_csrs *VAR_3 = ((struct io7_port *)VAR_0->sysdata)->csrs;

 FUNC_1();
 VAR_3->POx_SG_TBIA.csr = 0;
 FUNC_0();
 VAR_3->POx_SG_TBIA.csr;
}
