
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct qib_devdata {struct pci_dev* pcidev; } ;
struct pci_dev {TYPE_1__* bus; } ;
struct TYPE_2__ {scalar_t__ parent; struct pci_dev* self; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 int FUNC_4 (struct pci_dev*,char*) ;
 int VAR_5 ;
 int FUNC_5 (int,int) ;

__attribute__((used)) static int FUNC_6(struct qib_devdata *VAR_6)
{
 int VAR_7 = 1;
 struct pci_dev *VAR_8;
 u16 VAR_9, VAR_10, VAR_11, VAR_12;
 int VAR_13, VAR_14;
 int VAR_15, VAR_16;


 VAR_8 = VAR_6->pcidev->bus->self;
 if (VAR_8->bus->parent) {
  FUNC_4(VAR_6->pcidev, "Parent not root\n");
  goto bail;
 }

 if (!FUNC_1(VAR_8) || !FUNC_1(VAR_6->pcidev))
  goto bail;
 FUNC_2(VAR_8, VAR_0, &VAR_9);
 FUNC_2(VAR_8, VAR_2, &VAR_10);

 FUNC_2(VAR_6->pcidev, VAR_0, &VAR_11);
 FUNC_2(VAR_6->pcidev, VAR_2, &VAR_12);

 VAR_7 = 0;

 VAR_13 = FUNC_0(VAR_9, VAR_1);
 VAR_14 = FUNC_0(VAR_11, VAR_1);
 if (VAR_13 > VAR_14)
  VAR_13 = VAR_14;

 VAR_15 = FUNC_0(VAR_10, VAR_3);
 VAR_16 = FUNC_0(VAR_12, VAR_3);


 if (VAR_13 > (VAR_5 & 7))
  VAR_13 = VAR_5 & 7;

 if (VAR_13 > VAR_15) {
  VAR_15 = VAR_13;
  VAR_10 = (VAR_10 & ~VAR_3) |
   FUNC_5(VAR_15, VAR_3);
  FUNC_3(VAR_8, VAR_2, VAR_10);
 }

 if (VAR_13 > VAR_16) {
  VAR_16 = VAR_13;
  VAR_12 = (VAR_12 & ~VAR_3) |
   FUNC_5(VAR_16, VAR_3);
  FUNC_3(VAR_6->pcidev, VAR_2, VAR_12);
 }






 VAR_13 = 5;
 if (VAR_13 > ((VAR_5 >> 4) & 7))
  VAR_13 = (VAR_5 >> 4) & 7;
 VAR_15 = FUNC_0(VAR_10, VAR_4);
 VAR_16 = FUNC_0(VAR_12, VAR_4);

 if (VAR_13 > VAR_15) {
  VAR_15 = VAR_13;
  VAR_10 = (VAR_10 & ~VAR_4) |
   FUNC_5(VAR_15, VAR_4);
  FUNC_3(VAR_8, VAR_2, VAR_10);
 }
 if (VAR_13 > VAR_16) {
  VAR_16 = VAR_13;
  VAR_12 = (VAR_12 & ~VAR_4) |
   FUNC_5(VAR_16, VAR_4);
  FUNC_3(VAR_6->pcidev, VAR_2, VAR_12);
 }
bail:
 return VAR_7;
}
