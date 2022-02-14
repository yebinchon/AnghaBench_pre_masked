
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct pci_dev {TYPE_1__* bus; scalar_t__ is_hotplug_bridge; } ;
struct TYPE_2__ {scalar_t__ self; int devices; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct pci_dev*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_1, void *VAR_2)
{
 u8 *VAR_3 = VAR_2;

 if (!FUNC_1(VAR_1))
  return 0;
 if (VAR_1->is_hotplug_bridge && (!FUNC_0(&VAR_1->bus->devices) ||
      (VAR_1->bus->self &&
       FUNC_2(VAR_1->bus->self) != VAR_0)))
  *VAR_3 = 0;

 if (*VAR_3 > FUNC_3(VAR_1))
  *VAR_3 = FUNC_3(VAR_1);

 return 0;
}
