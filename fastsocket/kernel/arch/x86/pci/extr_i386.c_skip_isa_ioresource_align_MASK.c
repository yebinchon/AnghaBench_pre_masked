
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* bus; } ;
struct TYPE_2__ {int bridge_ctl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct pci_dev *VAR_3) {

 if ((VAR_2 & VAR_1) &&
     !(VAR_3->bus->bridge_ctl & VAR_0))
  return 1;
 return 0;
}
