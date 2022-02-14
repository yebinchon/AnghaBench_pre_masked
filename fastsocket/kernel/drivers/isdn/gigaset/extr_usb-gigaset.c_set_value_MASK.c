
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct usb_device {int dev; } ;
struct TYPE_4__ {TYPE_1__* usb; } ;
struct cardstate {TYPE_2__ hw; } ;
struct TYPE_3__ {int * bchars; struct usb_device* udev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int,...) ;
 int FUNC_1 (int ,char*,unsigned int,unsigned int) ;
 int FUNC_2 (struct usb_device*,int ,int,int,int,int ,int *,int,int) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct cardstate *VAR_1, u8 VAR_2, u16 VAR_3)
{
 struct usb_device *VAR_4 = VAR_1->hw.usb->udev;
 int VAR_5, VAR_6;

 FUNC_1(VAR_0, "request %02x (%04x)",
  (unsigned)VAR_2, (unsigned)VAR_3);
 VAR_5 = FUNC_2(VAR_4, FUNC_3(VAR_4, 0), 0x12, 0x41,
       0xf , 0, ((void*)0), 0, 2000 );

 if (VAR_5 < 0) {
  FUNC_0(&VAR_4->dev, "error %d on request 0x12\n", -VAR_5);
  return VAR_5;
 }

 VAR_5 = FUNC_2(VAR_4, FUNC_3(VAR_4, 0), VAR_2, 0x41,
       VAR_3, 0, ((void*)0), 0, 2000 );
 if (VAR_5 < 0)
  FUNC_0(&VAR_4->dev, "error %d on request 0x%02x\n",
   -VAR_5, (unsigned)VAR_2);

 VAR_6 = FUNC_2(VAR_4, FUNC_3(VAR_4, 0), 0x19, 0x41,
        0, 0, VAR_1->hw.usb->bchars, 6, 2000 );
 if (VAR_6 < 0)
  FUNC_0(&VAR_4->dev, "error %d on request 0x19\n", -VAR_6);

 return VAR_5 < 0 ? VAR_5 : (VAR_6 < 0 ? VAR_6 : 0);
}
