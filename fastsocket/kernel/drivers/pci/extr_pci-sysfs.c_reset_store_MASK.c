
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_dev*) ;
 scalar_t__ FUNC_1 (char const*,int ,unsigned long*) ;
 struct pci_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
      struct device_attribute *VAR_2, const char *VAR_3,
      size_t VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_2(VAR_1);
 unsigned long VAR_6;
 ssize_t VAR_7 = FUNC_1(VAR_3, 0, &VAR_6);

 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_6 != 1)
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 return VAR_4;
}
