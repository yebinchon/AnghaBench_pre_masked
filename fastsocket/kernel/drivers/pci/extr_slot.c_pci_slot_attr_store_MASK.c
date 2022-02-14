
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_slot_attribute {int (* store ) (struct pci_slot*,char const*,size_t) ;} ;
struct pci_slot {int dummy; } ;
struct kobject {int dummy; } ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct pci_slot*,char const*,size_t) ;
 struct pci_slot* FUNC_1 (struct kobject*) ;
 struct pci_slot_attribute* FUNC_2 (struct attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject *VAR_1,
   struct attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct pci_slot *VAR_5 = FUNC_1(VAR_1);
 struct pci_slot_attribute *VAR_6 = FUNC_2(VAR_2);
 return VAR_6->store ? VAR_6->store(VAR_5, VAR_3, VAR_4) : -VAR_0;
}
