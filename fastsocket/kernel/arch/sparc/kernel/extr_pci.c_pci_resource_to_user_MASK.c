
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct resource {int flags; scalar_t__ end; scalar_t__ start; } ;
struct TYPE_8__ {unsigned long start; } ;
struct TYPE_7__ {unsigned long start; } ;
struct pci_pbm_info {TYPE_4__ mem_space; TYPE_3__ io_space; } ;
struct TYPE_5__ {struct pci_pbm_info* host_controller; } ;
struct TYPE_6__ {TYPE_1__ archdata; } ;
struct pci_dev {TYPE_2__ dev; } ;
typedef scalar_t__ resource_size_t ;


 int VAR_0 ;

void FUNC_0(const struct pci_dev *VAR_1, int VAR_2,
     const struct resource *VAR_3, resource_size_t *VAR_4,
     resource_size_t *VAR_5)
{
 struct pci_pbm_info *VAR_6 = VAR_1->dev.archdata.host_controller;
 unsigned long VAR_7;

 if (VAR_3->flags & VAR_0)
  VAR_7 = VAR_6->io_space.start;
 else
  VAR_7 = VAR_6->mem_space.start;

 *VAR_4 = VAR_3->start - VAR_7;
 *VAR_5 = VAR_3->end - VAR_7;
}
