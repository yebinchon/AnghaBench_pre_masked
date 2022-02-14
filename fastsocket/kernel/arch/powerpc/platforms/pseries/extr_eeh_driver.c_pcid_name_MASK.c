
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* driver; } ;
struct pci_dev {TYPE_2__ dev; } ;
struct TYPE_3__ {char const* name; } ;



__attribute__((used)) static inline const char * FUNC_0 (struct pci_dev *VAR_0)
{
 if (VAR_0 && VAR_0->dev.driver)
  return VAR_0->dev.driver->name;
 return "";
}
