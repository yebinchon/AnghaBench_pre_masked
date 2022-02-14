
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {unsigned long csr; } ;
struct TYPE_6__ {unsigned long csr; } ;
struct TYPE_8__ {TYPE_2__ tlbiv; TYPE_1__ tlbia; } ;
typedef TYPE_3__ tsunami_pchip ;
struct pci_controller {scalar_t__ index; } ;
typedef int dma_addr_t ;


 TYPE_3__* VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 () ;

void
FUNC_1(struct pci_controller *VAR_2, dma_addr_t VAR_3, dma_addr_t VAR_4)
{
 tsunami_pchip *VAR_5 = VAR_2->index ? VAR_1 : VAR_0;
 volatile unsigned long *VAR_6;
 unsigned long VAR_7;



 VAR_6 = &VAR_5->tlbia.csr;
 if (((VAR_3 ^ VAR_4) & 0xffff0000) == 0)
  VAR_6 = &VAR_5->tlbiv.csr;



 VAR_7 = (VAR_3 & 0xffff0000) >> 12;

 *VAR_6 = VAR_7;
 FUNC_0();
 *VAR_6;
}
