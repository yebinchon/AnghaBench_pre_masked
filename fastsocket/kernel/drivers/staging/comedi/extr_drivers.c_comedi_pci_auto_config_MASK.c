
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; int devfn; TYPE_1__* bus; } ;
struct TYPE_2__ {int number; } ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char const*,int*,int ) ;

int FUNC_3(struct pci_dev *VAR_0, const char *VAR_1)
{
 int VAR_2[2];


 VAR_2[0] = VAR_0->bus->number;

 VAR_2[1] = FUNC_1(VAR_0->devfn);

 return FUNC_2(&VAR_0->dev, VAR_1,
      VAR_2, FUNC_0(VAR_2));
}
