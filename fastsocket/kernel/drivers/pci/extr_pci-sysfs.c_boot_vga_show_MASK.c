
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* resource; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 struct pci_dev* FUNC_1 (struct device*) ;
 struct pci_dev* FUNC_2 () ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_2, struct device_attribute *VAR_3, char *VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_1(VAR_2);
 struct pci_dev *VAR_6 = FUNC_2();

 if (VAR_6)
  return FUNC_0(VAR_4, "%u\n", (VAR_5 == VAR_6));

 return FUNC_0(VAR_4, "%u\n",
  !!(VAR_5->resource[VAR_1].flags &
     VAR_0));
}
