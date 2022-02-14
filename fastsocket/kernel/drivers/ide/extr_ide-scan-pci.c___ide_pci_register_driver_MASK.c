
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct module* owner; } ;
struct pci_driver {int node; TYPE_1__ driver; } ;
struct module {int dummy; } ;


 int FUNC_0 (struct pci_driver*,struct module*,char const*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int VAR_1 ;

int FUNC_2(struct pci_driver *VAR_2, struct module *VAR_3,
         const char *VAR_4)
{
 if (!VAR_1)
  return FUNC_0(VAR_2, VAR_3, VAR_4);
 VAR_2->driver.owner = VAR_3;
 FUNC_1(&VAR_2->node, &VAR_0);
 return 0;
}
