
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct TYPE_4__ {scalar_t__ dma_mask; } ;
struct platform_device {TYPE_1__ dev; int id; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int * FUNC_2 (struct usb_hcd*) ;
 int * VAR_2 ;
 int FUNC_3 (struct usb_hcd*,int ,int ) ;
 struct usb_hcd* FUNC_4 (int *,TYPE_1__*,int ) ;
 int FUNC_5 (struct usb_hcd*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (char*) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_4)
{
 struct usb_hcd *VAR_5;
 int VAR_6;

 FUNC_8("proving...\n");

 FUNC_6("name %s id %d\n", VAR_4->name, VAR_4->id);


 if (VAR_4->dev.dma_mask) {
  FUNC_0(&VAR_4->dev, "vhci_hcd DMA not supported\n");
  return -VAR_0;
 }





 VAR_5 = FUNC_4(&VAR_3, &VAR_4->dev, FUNC_1(&VAR_4->dev));
 if (!VAR_5) {
  FUNC_7("create hcd failed\n");
  return -VAR_1;
 }



 VAR_2 = FUNC_2(VAR_5);





 VAR_6 = FUNC_3(VAR_5, 0, 0);
 if (VAR_6 != 0) {
  FUNC_7("usb_add_hcd failed %d\n", VAR_6);
  FUNC_5(VAR_5);
  VAR_2 = ((void*)0);
  return VAR_6;
 }


 FUNC_6("bye\n");
 return 0;
}
