
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct usb_serial {TYPE_2__* dev; } ;
typedef scalar_t__ __u8 ;
typedef int __u16 ;
struct TYPE_5__ {int idProduct; } ;
struct TYPE_6__ {TYPE_1__ descriptor; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,unsigned int,scalar_t__,scalar_t__,int,int,void*,int,int ) ;
 unsigned int FUNC_3 (TYPE_2__*,int ) ;
 unsigned int FUNC_4 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_serial *VAR_5, __u8 VAR_6, __u16 VAR_7,
   __u16 VAR_8, void *VAR_9)
{
 int VAR_10;
 unsigned int VAR_11;
 u16 VAR_12 = FUNC_1(VAR_5->dev->descriptor.idProduct);
 __u8 VAR_13;
 __u16 VAR_14 = 0x0000;

 if (VAR_7 < VAR_1) {
  if (VAR_12 == VAR_0)
   VAR_7 = VAR_7*0x100+0x100;
  else
   VAR_7 = VAR_7*0x100+0x200;
 } else {
  VAR_7 = 0x0000;
  if ((VAR_12 == VAR_0) &&
      (VAR_8 != 0x08)) {
   FUNC_0("serial->product== MOSCHIP_DEVICE_ID_7715");

  }
 }

 if (VAR_6 == VAR_4) {
  VAR_6 = (__u8)VAR_4;
  VAR_13 = (__u8)0x40;
  VAR_7 = VAR_7 + (__u16)*((unsigned char *)VAR_9);
  VAR_9 = ((void*)0);
  VAR_11 = FUNC_4(VAR_5->dev, 0);
 } else {
  VAR_6 = (__u8)VAR_2;
  VAR_13 = (__u8)0xC0;
  VAR_14 = 0x01;
  VAR_11 = FUNC_3(VAR_5->dev, 0);
 }

 VAR_10 = FUNC_2(VAR_5->dev, VAR_11, VAR_6, VAR_13,
     VAR_7, VAR_8, VAR_9, VAR_14, VAR_3);

 if (VAR_10 < 0)
  FUNC_0("Command Write failed Value %x index %x\n", VAR_7, VAR_8);

 return VAR_10;
}
