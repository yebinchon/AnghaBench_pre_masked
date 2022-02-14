
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef size_t u32 ;
struct usb_interface {TYPE_2__* altsetting; } ;
struct usb_device {int dummy; } ;
typedef int s32 ;
struct TYPE_3__ {size_t bInterfaceNumber; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct usb_device*,int ,int,int,int ,int ,int*,int,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_15)
{
 struct usb_device *VAR_16 = FUNC_0(VAR_15);
 u8 VAR_17[17];
 u32 VAR_18 = VAR_15->altsetting->desc.bInterfaceNumber;
 s32 VAR_19;

 if (FUNC_1(VAR_16, FUNC_2(VAR_16, 0),
       0x86, 0xC0, 0, 0, VAR_17, 17,
       VAR_14) != 0x11) {
  return -VAR_0;
 }

 switch (VAR_17[VAR_18]) {
 case 0x0:
  VAR_19 = 0;
  break;
 case 0x1:
  VAR_19 = VAR_6;
  break;
 case 0x2:
  VAR_19 = VAR_7;
  break;
 case 0x3:
  VAR_19 = VAR_8;
  break;
 case 0x4:
  VAR_19 = VAR_3;
  break;
 case 0x5:
  VAR_19 = VAR_4;
  break;
 case 0x6:
  VAR_19 = VAR_5;
  break;
 case 0x7:
  VAR_19 = VAR_11;
  break;
 case 0x8:
  VAR_19 = VAR_9;
  break;
 case 0x9:
  VAR_19 = VAR_10;
  break;
 case 0xa:
  VAR_19 = VAR_12;
  break;
 case 0xb:
  VAR_19 = VAR_13;
  break;
 default:
  VAR_19 = 0;
 }

 if (VAR_19)
  VAR_19 |= VAR_2;

 if (VAR_17[16] & 0x1)
  VAR_19 |= VAR_1;

 return VAR_19;
}
