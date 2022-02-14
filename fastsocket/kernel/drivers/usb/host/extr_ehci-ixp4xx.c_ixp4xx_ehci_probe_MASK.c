
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int rsrc_start; int rsrc_len; int * regs; } ;
struct resource {int start; int end; } ;
struct platform_device {int dev; } ;
struct hc_driver {int description; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int ,...) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int,int) ;
 int FUNC_4 (int *) ;
 struct hc_driver VAR_7 ;
 struct resource* FUNC_5 (struct platform_device*,int ,int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int,int ) ;
 int FUNC_8 (struct usb_hcd*,int,int ) ;
 struct usb_hcd* FUNC_9 (struct hc_driver const*,int *,int ) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_12(struct platform_device *VAR_8)
{
 struct usb_hcd *VAR_9;
 const struct hc_driver *VAR_10 = &VAR_7;
 struct resource *VAR_11;
 int VAR_12;
 int VAR_13;

 if (FUNC_10())
  return -VAR_2;

 VAR_11 = FUNC_5(VAR_8, VAR_4, 0);
 if (!VAR_11) {
  FUNC_1(&VAR_8->dev,
   "Found HC with no IRQ. Check %s setup!\n",
   FUNC_2(&VAR_8->dev));
  return -VAR_2;
 }
 VAR_12 = VAR_11->start;

 VAR_9 = FUNC_9(VAR_10, &VAR_8->dev, FUNC_2(&VAR_8->dev));
 if (!VAR_9) {
  VAR_13 = -VAR_3;
  goto fail_create_hcd;
 }

 VAR_11 = FUNC_5(VAR_8, VAR_5, 0);
 if (!VAR_11) {
  FUNC_1(&VAR_8->dev,
   "Found HC with no register addr. Check %s setup!\n",
   FUNC_2(&VAR_8->dev));
  VAR_13 = -VAR_2;
  goto fail_request_resource;
 }
 VAR_9->rsrc_start = VAR_11->start;
 VAR_9->rsrc_len = VAR_11->end - VAR_11->start + 1;

 if (!FUNC_7(VAR_9->rsrc_start, VAR_9->rsrc_len,
    VAR_10->description)) {
  FUNC_0(&VAR_8->dev, "controller already in use\n");
  VAR_13 = -VAR_0;
  goto fail_request_resource;
 }

 VAR_9->regs = FUNC_3(VAR_9->rsrc_start, VAR_9->rsrc_len);
 if (VAR_9->regs == ((void*)0)) {
  FUNC_0(&VAR_8->dev, "error mapping memory\n");
  VAR_13 = -VAR_1;
  goto fail_ioremap;
 }

 VAR_13 = FUNC_8(VAR_9, VAR_12, VAR_6);
 if (VAR_13)
  goto fail_add_hcd;

 return VAR_13;

fail_add_hcd:
 FUNC_4(VAR_9->regs);
fail_ioremap:
 FUNC_6(VAR_9->rsrc_start, VAR_9->rsrc_len);
fail_request_resource:
 FUNC_11(VAR_9);
fail_create_hcd:
 FUNC_1(&VAR_8->dev, "init %s fail, %d\n", FUNC_2(&VAR_8->dev), VAR_13);
 return VAR_13;
}
