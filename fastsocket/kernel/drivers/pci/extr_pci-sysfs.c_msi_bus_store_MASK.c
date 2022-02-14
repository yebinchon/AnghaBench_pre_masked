
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; TYPE_1__* subordinate; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int bus_flags; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,char*) ;
 scalar_t__ FUNC_2 (char const*,int ,unsigned long*) ;
 struct pci_dev* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_4, struct device_attribute *VAR_5,
       const char *VAR_6, size_t VAR_7)
{
 struct pci_dev *VAR_8 = FUNC_3(VAR_4);
 unsigned long VAR_9;

 if (FUNC_2(VAR_6, 0, &VAR_9) < 0)
  return -VAR_1;



 if (!FUNC_0(VAR_0))
  return -VAR_2;



 if (!VAR_8->subordinate)
  return VAR_7;


 if (!(VAR_8->subordinate->bus_flags & VAR_3) ^
     !!VAR_9) {
  VAR_8->subordinate->bus_flags ^= VAR_3;

  FUNC_1(&VAR_8->dev, "forced subordinate bus to%s support MSI,"
    " bad things could happen\n", VAR_9 ? "" : " not");
 }

 return VAR_7;
}
