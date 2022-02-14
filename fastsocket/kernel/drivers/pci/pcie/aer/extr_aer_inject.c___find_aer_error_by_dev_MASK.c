
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int devfn; TYPE_1__* bus; } ;
struct aer_error {int dummy; } ;
struct TYPE_2__ {int number; } ;


 struct aer_error* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static struct aer_error *FUNC_2(struct pci_dev *VAR_0)
{
 int VAR_1 = FUNC_1(VAR_0->bus);
 if (VAR_1 < 0)
  return ((void*)0);
 return FUNC_0((u16)VAR_1, VAR_0->bus->number, VAR_0->devfn);
}
