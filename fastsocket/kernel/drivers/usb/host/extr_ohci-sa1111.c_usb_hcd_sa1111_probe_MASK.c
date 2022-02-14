
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {scalar_t__ rsrc_len; scalar_t__ rsrc_start; int regs; } ;
struct TYPE_2__ {scalar_t__ start; scalar_t__ end; } ;
struct sa1111_dev {int * irq; int mapbase; TYPE_1__ res; int dev; } ;
struct hc_driver {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (struct sa1111_dev*) ;
 int FUNC_6 (struct sa1111_dev*) ;
 int FUNC_7 (struct usb_hcd*,int ,int ) ;
 struct usb_hcd* FUNC_8 (struct hc_driver const*,int *,char*) ;
 int FUNC_9 (struct usb_hcd*) ;

int FUNC_10 (const struct hc_driver *VAR_4,
     struct sa1111_dev *VAR_5)
{
 struct usb_hcd *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_8 (VAR_4, &VAR_5->dev, "sa1111");
 if (!VAR_6)
  return -VAR_1;
 VAR_6->rsrc_start = VAR_5->res.start;
 VAR_6->rsrc_len = VAR_5->res.end - VAR_5->res.start + 1;

 if (!FUNC_4(VAR_6->rsrc_start, VAR_6->rsrc_len, VAR_3)) {
  FUNC_0("request_mem_region failed");
  VAR_7 = -VAR_0;
  goto err1;
 }
 VAR_6->regs = VAR_5->mapbase;

 FUNC_5(VAR_5);
 FUNC_2(FUNC_1(VAR_6));

 VAR_7 = FUNC_7(VAR_6, VAR_5->irq[1], VAR_2);
 if (VAR_7 == 0)
  return VAR_7;

 FUNC_6(VAR_5);
 FUNC_3(VAR_6->rsrc_start, VAR_6->rsrc_len);
 err1:
 FUNC_9(VAR_6);
 return VAR_7;
}
