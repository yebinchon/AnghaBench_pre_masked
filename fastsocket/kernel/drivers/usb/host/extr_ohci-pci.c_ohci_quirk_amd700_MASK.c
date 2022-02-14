
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_hcd {int dummy; } ;
struct pci_dev {int dummy; } ;
struct ohci_hcd {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct ohci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (struct ohci_hcd*,char*) ;
 int FUNC_2 (struct pci_dev*) ;
 struct pci_dev* FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (struct pci_dev*,int ,int*) ;
 scalar_t__ FUNC_5 () ;

__attribute__((used)) static int FUNC_6(struct usb_hcd *VAR_5)
{
 struct ohci_hcd *VAR_6 = FUNC_0(VAR_5);
 struct pci_dev *VAR_7;
 u8 VAR_8 = 0;

 if (FUNC_5())
  VAR_6->flags |= VAR_0;

 VAR_7 = FUNC_3(VAR_4,
   VAR_2, ((void*)0));
 if (!VAR_7)
  return 0;

 FUNC_4(VAR_7, VAR_3, &VAR_8);


 if ((VAR_8 >= 0x40) && (VAR_8 <= 0x4f)) {
  VAR_6->flags |= VAR_1;
  FUNC_1(VAR_6, "enabled AMD prefetch quirk\n");
 }

 FUNC_2(VAR_7);
 VAR_7 = ((void*)0);

 return 0;
}
