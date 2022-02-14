
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct usb_ctrlrequest {int wIndex; int wValue; } ;
struct urb {TYPE_1__* dev; scalar_t__ setup_packet; } ;
typedef int __u16 ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct urb *VAR_0)
{
 struct usb_ctrlrequest *VAR_1;
 __u16 VAR_2;
 __u16 VAR_3;
 int VAR_4;

 VAR_1 = (struct usb_ctrlrequest *) VAR_0->setup_packet;
 VAR_2 = FUNC_2(VAR_1->wValue);
 VAR_3 = FUNC_2(VAR_1->wIndex);

 FUNC_6("reset_device (port %d) to %s\n", VAR_3,
      FUNC_1(&VAR_0->dev->dev));


 VAR_4 = FUNC_3(VAR_0->dev, ((void*)0));
 if (VAR_4 < 0) {
  FUNC_0(&VAR_0->dev->dev, "lock for reset\n");
  return VAR_4;
 }


 VAR_4 = FUNC_4(VAR_0->dev);
 if (VAR_4 < 0)
  FUNC_0(&VAR_0->dev->dev, "device reset\n");

 FUNC_5(VAR_0->dev);

 return VAR_4;
}
