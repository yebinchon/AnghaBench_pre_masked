
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {struct usb_hcd* shared_hcd; } ;
struct usb_hcd {int rsrc_len; int rsrc_start; int regs; scalar_t__ hcd_priv; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;
struct hc_driver {int description; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 struct usb_hcd* FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct xhci_hcd* FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct platform_device*,int ) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ,int ) ;
 int FUNC_10 (struct resource*) ;
 int FUNC_11 (struct usb_hcd*,int,int ) ;
 struct usb_hcd* FUNC_12 (struct hc_driver const*,int *,int ) ;
 struct usb_hcd* FUNC_13 (struct hc_driver const*,int *,int ,struct usb_hcd*) ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (struct usb_hcd*) ;
 int FUNC_16 (struct usb_hcd*) ;
 struct hc_driver VAR_6 ;

__attribute__((used)) static int FUNC_17(struct platform_device *VAR_7)
{
 const struct hc_driver *VAR_8;
 struct xhci_hcd *VAR_9;
 struct resource *VAR_10;
 struct usb_hcd *VAR_11;
 int VAR_12;
 int VAR_13;

 if (FUNC_14())
  return -VAR_2;

 VAR_8 = &VAR_6;

 VAR_13 = FUNC_6(VAR_7, 0);
 if (VAR_13 < 0)
  return -VAR_2;

 VAR_10 = FUNC_7(VAR_7, VAR_4, 0);
 if (!VAR_10)
  return -VAR_2;

 VAR_11 = FUNC_12(VAR_8, &VAR_7->dev, FUNC_2(&VAR_7->dev));
 if (!VAR_11)
  return -VAR_3;

 VAR_11->rsrc_start = VAR_10->start;
 VAR_11->rsrc_len = FUNC_10(VAR_10);

 if (!FUNC_9(VAR_11->rsrc_start, VAR_11->rsrc_len,
    VAR_8->description)) {
  FUNC_0(&VAR_7->dev, "controller already in use\n");
  VAR_12 = -VAR_0;
  goto put_hcd;
 }

 VAR_11->regs = FUNC_4(VAR_11->rsrc_start, VAR_11->rsrc_len);
 if (!VAR_11->regs) {
  FUNC_0(&VAR_7->dev, "error mapping memory\n");
  VAR_12 = -VAR_1;
  goto release_mem_region;
 }

 VAR_12 = FUNC_11(VAR_11, VAR_13, VAR_5);
 if (VAR_12)
  goto unmap_registers;


 VAR_11 = FUNC_1(&VAR_7->dev);
 VAR_9 = FUNC_3(VAR_11);
 VAR_9->shared_hcd = FUNC_13(VAR_8, &VAR_7->dev,
   FUNC_2(&VAR_7->dev), VAR_11);
 if (!VAR_9->shared_hcd) {
  VAR_12 = -VAR_3;
  goto dealloc_usb2_hcd;
 }





 *((struct xhci_hcd **) VAR_9->shared_hcd->hcd_priv) = VAR_9;

 VAR_12 = FUNC_11(VAR_9->shared_hcd, VAR_13, VAR_5);
 if (VAR_12)
  goto put_usb3_hcd;

 return 0;

put_usb3_hcd:
 FUNC_15(VAR_9->shared_hcd);

dealloc_usb2_hcd:
 FUNC_16(VAR_11);

unmap_registers:
 FUNC_5(VAR_11->regs);

release_mem_region:
 FUNC_8(VAR_11->rsrc_start, VAR_11->rsrc_len);

put_hcd:
 FUNC_15(VAR_11);

 return VAR_12;
}
