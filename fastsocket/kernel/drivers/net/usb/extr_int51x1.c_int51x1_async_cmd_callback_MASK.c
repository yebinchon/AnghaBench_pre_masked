
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_ctrlrequest {int dummy; } ;
struct urb {int status; TYPE_1__* dev; scalar_t__ context; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct usb_ctrlrequest*) ;
 int FUNC_2 (struct urb*) ;

__attribute__((used)) static void FUNC_3(struct urb *VAR_0)
{
 struct usb_ctrlrequest *VAR_1 = (struct usb_ctrlrequest *)VAR_0->context;
 int VAR_2 = VAR_0->status;

 if (VAR_2 < 0)
  FUNC_0(&VAR_0->dev->dev, "async callback failed with %d\n", VAR_2);

 FUNC_1(VAR_1);
 FUNC_2(VAR_0);
}
