
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_hcd {int regs; int rsrc_len; int rsrc_start; } ;
struct ssb_ohci_device {int enable_flags; } ;
struct TYPE_2__ {scalar_t__ coreid; } ;
struct ssb_device {int irq; int dev; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 struct ssb_ohci_device* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ssb_device*,int ) ;
 int FUNC_7 (struct ssb_device*,int ) ;
 int VAR_6 ;
 int FUNC_8 (struct ssb_device*,int ) ;
 int FUNC_9 (struct ssb_device*,struct usb_hcd*) ;
 int FUNC_10 (struct usb_hcd*,int ,int) ;
 struct usb_hcd* FUNC_11 (int *,int ,int ) ;
 int FUNC_12 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_13(struct ssb_device *VAR_7)
{
 struct ssb_ohci_device *VAR_8;
 struct usb_hcd *VAR_9;
 int VAR_10 = -VAR_0;
 u32 VAR_11, VAR_12 = 0;

 if (VAR_7->id.coreid == VAR_4)
  VAR_12 |= VAR_5;

 FUNC_7(VAR_7, VAR_12);

 VAR_9 = FUNC_11(&VAR_6, VAR_7->dev,
   FUNC_0(VAR_7->dev));
 if (!VAR_9)
  goto err_dev_disable;
 VAR_8 = FUNC_1(VAR_9);
 VAR_8->enable_flags = VAR_12;

 VAR_11 = FUNC_8(VAR_7, VAR_3);
 VAR_9->rsrc_start = FUNC_4(VAR_11);
 VAR_9->rsrc_len = FUNC_5(VAR_11);
 VAR_9->regs = FUNC_2(VAR_9->rsrc_start, VAR_9->rsrc_len);
 if (!VAR_9->regs)
  goto err_put_hcd;
 VAR_10 = FUNC_10(VAR_9, VAR_7->irq, VAR_1 | VAR_2);
 if (VAR_10)
  goto err_iounmap;

 FUNC_9(VAR_7, VAR_9);

 return VAR_10;

err_iounmap:
 FUNC_3(VAR_9->regs);
err_put_hcd:
 FUNC_12(VAR_9);
err_dev_disable:
 FUNC_6(VAR_7, VAR_12);
 return VAR_10;
}
