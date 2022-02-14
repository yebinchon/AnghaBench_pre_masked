
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_bus {int dummy; } ;
struct TYPE_2__ {int bs_legacy_mem; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct pci_bus*) ;
 int VAR_1 ;

char *FUNC_2(struct pci_bus *VAR_2)
{
 if (!FUNC_1(VAR_2))
  return FUNC_0(-VAR_0);

 return (char *)(FUNC_1(VAR_2)->bs_legacy_mem | VAR_1);
}
