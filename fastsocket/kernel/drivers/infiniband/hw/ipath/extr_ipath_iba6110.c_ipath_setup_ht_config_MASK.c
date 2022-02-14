
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pci_dev {int dev; } ;
struct ipath_devdata {int ipath_irq; int ipath_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pci_dev*,int ,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct ipath_devdata*,char*,...) ;
 int VAR_3 ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*,int,int ) ;
 scalar_t__ FUNC_5 (struct pci_dev*,int,int*) ;
 int FUNC_6 (struct ipath_devdata*,struct pci_dev*,int,int) ;

__attribute__((used)) static int FUNC_7(struct ipath_devdata *VAR_4,
     struct pci_dev *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_7 = FUNC_0(VAR_5, 0, VAR_3);
 if (VAR_7 < 0) {
  FUNC_2(VAR_4, "Couldn't create interrupt handler: "
         "err %d\n", VAR_7);
  goto bail;
 }
 VAR_4->ipath_irq = VAR_7;
 VAR_7 = 0;






 VAR_6 = FUNC_3(VAR_5, VAR_2);
 if (!VAR_6) {
  FUNC_2(VAR_4, "Couldn't find HyperTransport "
         "capability; no interrupts\n");
  VAR_7 = -VAR_0;
  goto bail;
 }
 do {
  u8 VAR_8;





  if (FUNC_5(VAR_5, VAR_6 + 3, &VAR_8)) {
   FUNC_1(&VAR_5->dev, "Couldn't read config "
     "command @ %d\n", VAR_6);
   continue;
  }
  if (!(VAR_8 & 0xE0))
   FUNC_6(VAR_4, VAR_5, VAR_6, VAR_8);
 } while ((VAR_6 = FUNC_4(VAR_5, VAR_6,
       VAR_2)));

 VAR_4->ipath_flags |= VAR_1;

bail:
 return VAR_7;
}
