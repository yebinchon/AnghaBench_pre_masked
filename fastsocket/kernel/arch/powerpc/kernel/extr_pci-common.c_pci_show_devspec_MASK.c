
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct device_node {char* full_name; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct device_node* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (char*,char*,char*) ;
 struct pci_dev* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct pci_dev *VAR_3;
 struct device_node *VAR_4;

 VAR_3 = FUNC_2 (VAR_0);
 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 == ((void*)0) || VAR_4->full_name == ((void*)0))
  return 0;
 return FUNC_1(VAR_2, "%s", VAR_4->full_name);
}
