
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int *,char*,int,int,int,int ) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_7(struct pci_dev *VAR_0, void *VAR_1)
{
 int VAR_2, VAR_3;

 if (!FUNC_1(VAR_0))
  return 0;

 VAR_2 = 128 << *(u8 *)VAR_1;
 VAR_3 = FUNC_2(VAR_0);

 FUNC_4(VAR_0, VAR_2);
 FUNC_5(VAR_0);

 FUNC_0(&VAR_0->dev, "PCI-E Max Payload Size set to %4d/%4d (was %4d), "
   "Max Read Rq %4d\n", FUNC_2(VAR_0),
   128 << FUNC_6(VAR_0), VAR_3, FUNC_3(VAR_0));

 return 0;
}
