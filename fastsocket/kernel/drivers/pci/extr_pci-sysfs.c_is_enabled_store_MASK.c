
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*) ;
 size_t FUNC_2 (struct pci_dev*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;
 size_t FUNC_4 (char const*,int ,unsigned long*) ;
 struct pci_dev* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_3,
    struct device_attribute *VAR_4, const char *VAR_5,
    size_t VAR_6)
{
 struct pci_dev *VAR_7 = FUNC_5(VAR_3);
 unsigned long VAR_8;
 ssize_t VAR_9 = FUNC_4(VAR_5, 0, &VAR_8);

 if (VAR_9 < 0)
  return VAR_9;


 if (!FUNC_0(VAR_0))
  return -VAR_2;

 if (!VAR_8) {
  if (FUNC_3(VAR_7))
   FUNC_1(VAR_7);
  else
   VAR_9 = -VAR_1;
 } else
  VAR_9 = FUNC_2(VAR_7);

 return VAR_9 < 0 ? VAR_9 : VAR_6;
}
