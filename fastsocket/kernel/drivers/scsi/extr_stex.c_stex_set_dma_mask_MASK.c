
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct pci_dev*,int ) ;
 int FUNC_2 (struct pci_dev*,int ) ;

__attribute__((used)) static int FUNC_3(struct pci_dev * VAR_0)
{
 int VAR_1;

 if (!FUNC_2(VAR_0, FUNC_0(64))
  && !FUNC_1(VAR_0, FUNC_0(64)))
  return 0;
 VAR_1 = FUNC_2(VAR_0, FUNC_0(32));
 if (!VAR_1)
  VAR_1 = FUNC_1(VAR_0, FUNC_0(32));
 return VAR_1;
}
