
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef unsigned int u32 ;
typedef int u16 ;
struct qib_devdata {TYPE_3__* pcidev; } ;
struct pci_dev {int vendor; int device; TYPE_2__* bus; } ;
struct TYPE_6__ {TYPE_1__* bus; } ;
struct TYPE_5__ {scalar_t__ parent; } ;
struct TYPE_4__ {struct pci_dev* self; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*,int ,int*) ;
 int FUNC_2 (struct pci_dev*,int,unsigned int*) ;
 int FUNC_3 (struct pci_dev*,int,unsigned int) ;
 int FUNC_4 (TYPE_3__*,char*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct qib_devdata *VAR_2)
{
 int VAR_3;
 struct pci_dev *VAR_4;
 u16 VAR_5;
 u32 VAR_6, VAR_7, VAR_8;

 if (!VAR_1)
  return 0;


 VAR_4 = VAR_2->pcidev->bus->self;
 if (VAR_4->bus->parent) {
  FUNC_4(VAR_2->pcidev, "Parent not root\n");
  return 1;
 }
 if (!FUNC_0(VAR_4))
  return 1;
 if (VAR_4->vendor != 0x8086)
  return 1;
 VAR_5 = VAR_4->device;
 if (VAR_5 >= 0x25e2 && VAR_5 <= 0x25fa) {
  u8 VAR_9;


  FUNC_1(VAR_4, VAR_0, &VAR_9);
  if (VAR_9 <= 0xb2)
   VAR_7 = 1U << 10;
  else
   VAR_7 = 7U << 10;
  VAR_6 = (3U << 24) | (7U << 10);
 } else if (VAR_5 >= 0x65e2 && VAR_5 <= 0x65fa) {

  VAR_7 = 1U << 10;
  VAR_6 = (3U << 24) | (7U << 10);
 } else if (VAR_5 >= 0x4021 && VAR_5 <= 0x402e) {

  VAR_7 = 7U << 10;
  VAR_6 = 7U << 10;
 } else if (VAR_5 >= 0x3604 && VAR_5 <= 0x360a) {

  VAR_7 = 7U << 10;
  VAR_6 = (3U << 24) | (7U << 10);
 } else {

  return 1;
 }
 FUNC_2(VAR_4, 0x48, &VAR_8);
 VAR_8 &= ~VAR_6;
 VAR_8 |= VAR_7;
 VAR_3 = FUNC_3(VAR_4, 0x48, VAR_8);
 return 0;
}
