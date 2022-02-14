
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {void* rsrc_len; void* rsrc_start; int * regs; } ;
struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int irq; int dev; int current_state; } ;
struct hc_driver {int flags; int description; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ,...) ;
 int * FUNC_2 (void*,void*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct pci_dev*) ;
 scalar_t__ FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,int) ;
 void* FUNC_8 (struct pci_dev*,int) ;
 void* FUNC_9 (struct pci_dev*,int) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (void*,void*) ;
 int FUNC_12 (void*,void*) ;
 int FUNC_13 (void*,void*,int ) ;
 scalar_t__ FUNC_14 (void*,void*,int ) ;
 int FUNC_15 (struct usb_hcd*,int,int) ;
 struct usb_hcd* FUNC_16 (struct hc_driver*,int *,int ) ;
 scalar_t__ FUNC_17 () ;
 int FUNC_18 (struct usb_hcd*) ;

int FUNC_19(struct pci_dev *VAR_13, const struct pci_device_id *VAR_14)
{
 struct hc_driver *VAR_15;
 struct usb_hcd *VAR_16;
 int VAR_17;
 int VAR_18 = 0;

 if (FUNC_17())
  return -VAR_3;

 if (!VAR_14)
  return -VAR_2;
 VAR_15 = (struct hc_driver *)VAR_14->driver_data;
 if (!VAR_15)
  return -VAR_2;

 if (FUNC_5(VAR_13) < 0)
  return -VAR_3;
 VAR_13->current_state = VAR_11;





 if ((VAR_15->flags & VAR_5) != VAR_7) {
  if (!VAR_13->irq) {
   FUNC_1(&VAR_13->dev,
   "Found HC with no IRQ. Check BIOS/PCI %s setup!\n",
    FUNC_6(VAR_13));
   VAR_17 = -VAR_3;
   goto err1;
  }
  VAR_18 = VAR_13->irq;
 }

 VAR_16 = FUNC_16(VAR_15, &VAR_13->dev, FUNC_6(VAR_13));
 if (!VAR_16) {
  VAR_17 = -VAR_4;
  goto err1;
 }

 if (VAR_15->flags & VAR_6) {

  VAR_16->rsrc_start = FUNC_9(VAR_13, 0);
  VAR_16->rsrc_len = FUNC_8(VAR_13, 0);
  if (!FUNC_13(VAR_16->rsrc_start, VAR_16->rsrc_len,
    VAR_15->description)) {
   FUNC_0(&VAR_13->dev, "controller already in use\n");
   VAR_17 = -VAR_0;
   goto err2;
  }
  VAR_16->regs = FUNC_2(VAR_16->rsrc_start, VAR_16->rsrc_len);
  if (VAR_16->regs == ((void*)0)) {
   FUNC_0(&VAR_13->dev, "error mapping memory\n");
   VAR_17 = -VAR_1;
   goto err3;
  }

 } else {

  int VAR_19;

  for (VAR_19 = 0; VAR_19 < VAR_12; VAR_19++) {
   if (!(FUNC_7(VAR_13, VAR_19) &
     VAR_8))
    continue;

   VAR_16->rsrc_start = FUNC_9(VAR_13, VAR_19);
   VAR_16->rsrc_len = FUNC_8(VAR_13, VAR_19);
   if (FUNC_14(VAR_16->rsrc_start, VAR_16->rsrc_len,
     VAR_15->description))
    break;
  }
  if (VAR_19 == VAR_12) {
   FUNC_0(&VAR_13->dev, "no i/o regions available\n");
   VAR_17 = -VAR_0;
   goto err1;
  }
 }

 FUNC_10(VAR_13);

 VAR_17 = FUNC_15(VAR_16, VAR_18, VAR_9 | VAR_10);
 if (VAR_17 != 0)
  goto err4;
 return VAR_17;

 err4:
 if (VAR_15->flags & VAR_6) {
  FUNC_3(VAR_16->regs);
 err3:
  FUNC_11(VAR_16->rsrc_start, VAR_16->rsrc_len);
 } else
  FUNC_12(VAR_16->rsrc_start, VAR_16->rsrc_len);
 err2:
 FUNC_18(VAR_16);
 err1:
 FUNC_4(VAR_13);
 FUNC_1(&VAR_13->dev, "init %s fail, %d\n", FUNC_6(VAR_13), VAR_17);
 return VAR_17;
}
