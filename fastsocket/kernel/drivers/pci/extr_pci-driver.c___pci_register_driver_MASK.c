
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {char const* mod_name; struct module* owner; int * bus; int name; } ;
struct TYPE_4__ {int list; int lock; } ;
struct pci_driver {TYPE_2__ driver; TYPE_1__ dynids; int name; } ;
struct module {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (struct pci_driver*) ;
 int FUNC_4 (struct pci_driver*) ;
 int FUNC_5 (struct pci_driver*) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct pci_driver *VAR_1, struct module *VAR_2,
     const char *VAR_3)
{
 int VAR_4;


 VAR_1->driver.name = VAR_1->name;
 VAR_1->driver.bus = &VAR_0;
 VAR_1->driver.owner = VAR_2;
 VAR_1->driver.mod_name = VAR_3;

 FUNC_6(&VAR_1->dynids.lock);
 FUNC_0(&VAR_1->dynids.list);


 VAR_4 = FUNC_1(&VAR_1->driver);
 if (VAR_4)
  goto out;

 VAR_4 = FUNC_3(VAR_1);
 if (VAR_4)
  goto out_newid;

 VAR_4 = FUNC_4(VAR_1);
 if (VAR_4)
  goto out_removeid;
out:
 return VAR_4;

out_removeid:
 FUNC_5(VAR_1);
out_newid:
 FUNC_2(&VAR_1->driver);
 goto out;
}
