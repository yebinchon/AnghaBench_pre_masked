
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u8 ;
struct pci_dev {int irq; int pin; int devfn; TYPE_1__* bus; } ;
struct TYPE_2__ {scalar_t__ number; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static uint64_t FUNC_1(struct pci_dev *VAR_0)
{
 u8 VAR_1;
 int VAR_2;

 VAR_2 = VAR_0->irq;
 if (VAR_2 < 16)
  return VAR_2;

 VAR_1 = VAR_0->pin;


 return ((uint64_t)0x01 << 56) |
  ((uint64_t)FUNC_0(VAR_0->bus) << 32) |
  ((uint64_t)VAR_0->bus->number << 16) |
  ((uint64_t)(VAR_0->devfn & 0xff) << 8) |
  ((uint64_t)(VAR_1 - 1) & 3);
}
