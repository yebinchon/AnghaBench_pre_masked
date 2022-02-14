
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int hdr_type; int devfn; int bus; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct pci_dev*,int,int) ;

int FUNC_2(struct pci_dev *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0->bus, VAR_0->devfn, VAR_0->hdr_type);
 if (VAR_2)
  VAR_2 = FUNC_1(VAR_0, VAR_2, VAR_1);

 return VAR_2;
}
