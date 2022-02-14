
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* usb; } ;
struct cardstate {TYPE_2__ hw; } ;
struct TYPE_3__ {struct usb_device* udev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct usb_device*,int ,int,int,unsigned int,int ,int *,int ,int) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct cardstate *VAR_1, unsigned VAR_2,
      unsigned VAR_3)
{
 struct usb_device *VAR_4 = VAR_1->hw.usb->udev;
 unsigned VAR_5, VAR_6;
 int VAR_7;

 VAR_5 = FUNC_1(VAR_2 ^ VAR_3);
 VAR_6 = FUNC_1(VAR_3);

 FUNC_0(VAR_0, "set flags 0x%02x with mask 0x%02x", VAR_6, VAR_5);

 VAR_7 = FUNC_2(VAR_4, FUNC_3(VAR_4, 0), 7, 0x41,
       (VAR_6 & 0xff) | ((VAR_5 & 0xff) << 8), 0,
       ((void*)0), 0, 2000 );
 if (VAR_7 < 0)
  return VAR_7;

 return 0;
}
