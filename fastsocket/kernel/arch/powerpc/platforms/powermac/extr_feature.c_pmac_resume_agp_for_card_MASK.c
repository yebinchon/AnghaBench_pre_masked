
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {scalar_t__ bus; } ;
struct TYPE_3__ {scalar_t__ bus; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(struct pci_dev *VAR_1)
{
 if (VAR_0 == ((void*)0) || &FUNC_0 == ((void*)0))
  return;
 if (VAR_0->bus != VAR_1->bus)
  return;
 FUNC_0(VAR_0);
}
