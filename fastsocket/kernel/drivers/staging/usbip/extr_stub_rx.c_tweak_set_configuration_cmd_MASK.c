
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ctrlrequest {int wValue; } ;
struct urb {TYPE_1__* dev; scalar_t__ setup_packet; } ;
typedef int __u16 ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;

__attribute__((used)) static int FUNC_3(struct urb *VAR_0)
{
 struct usb_ctrlrequest *VAR_1;
 __u16 VAR_2;

 VAR_1 = (struct usb_ctrlrequest *) VAR_0->setup_packet;
 VAR_2 = FUNC_1(VAR_1->wValue);
 FUNC_2("set_configuration (%d) to %s\n", VAR_2,
      FUNC_0(&VAR_0->dev->dev));
 FUNC_2("but, skip!\n");

 return 0;

}
