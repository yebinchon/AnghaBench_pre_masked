
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u16 ;
struct pci_dev {int devfn; TYPE_1__* bus; } ;
struct device {int * bus; } ;
struct TYPE_2__ {int number; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_1 ;
 struct pci_dev* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_2, u64 VAR_3)
{
 u16 VAR_4;
 struct pci_dev *VAR_5;


 if (!VAR_2 || VAR_2->bus != &VAR_1)
  return 0;

 VAR_5 = FUNC_1(VAR_2);

 VAR_4 = FUNC_0(VAR_5->bus->number, VAR_5->devfn);


 if (VAR_4 > VAR_0)
  return 0;

 return 1;
}
