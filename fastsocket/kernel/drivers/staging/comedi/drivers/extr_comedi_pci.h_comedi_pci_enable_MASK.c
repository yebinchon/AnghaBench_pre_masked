
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,char const*) ;

__attribute__((used)) static inline int FUNC_3(struct pci_dev *VAR_0, const char *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 < 0)
  return VAR_2;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (VAR_2 < 0)
  FUNC_0(VAR_0);

 return VAR_2;
}
