
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct usb_interface {TYPE_2__* altsetting; } ;
struct usb_device {int dummy; } ;
struct TYPE_3__ {int bInterfaceNumber; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct usb_device*,int ,int ,int,int,int ,void*,size_t,int) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_5, u8 VAR_6, u8 VAR_7,
       void *VAR_8, size_t VAR_9, unsigned int VAR_10)
{
 struct usb_device *VAR_11 = FUNC_0(VAR_5);
 int VAR_12;

 do {
  VAR_12 = FUNC_1(VAR_11, FUNC_2(VAR_11, 0),
    VAR_3,
    VAR_4 | VAR_2,
    (VAR_6 << 8) + VAR_7,
    VAR_5->altsetting[0].desc.bInterfaceNumber,
    VAR_8, VAR_9, 1000);
 } while ((VAR_12 == -VAR_1 || VAR_12 == -VAR_0) && --VAR_10);

 return VAR_12;
}
