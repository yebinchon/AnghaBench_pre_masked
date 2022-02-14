
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pci_suscfg; unsigned int off_duration; unsigned int on_duration; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 unsigned int VAR_2 ;

__attribute__((used)) static unsigned int FUNC_0(unsigned int VAR_3)
{
 if ((VAR_1->pci_suscfg & VAR_0) == 0)
  return VAR_2;

 return (VAR_2 * VAR_1->off_duration)
  / (VAR_1->on_duration + VAR_1->off_duration);
}
