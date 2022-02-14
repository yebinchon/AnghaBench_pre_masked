
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct usb_interface {TYPE_1__* altsetting; } ;
struct usb_device {int dummy; } ;
struct TYPE_4__ {int bInterfaceNumber; } ;
struct TYPE_3__ {TYPE_2__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (struct usb_device*,int ,int ,int,int,int ,void*,size_t,int) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct usb_interface *VAR_6, u8 VAR_7, u8 VAR_8,
       void *VAR_9, size_t VAR_10, unsigned int VAR_11)
{
 struct usb_device *VAR_12 = FUNC_0(VAR_6);
 int VAR_13;

 do {
  VAR_13 = FUNC_1(VAR_12, FUNC_2(VAR_12, 0),
    VAR_4,
    VAR_2 | VAR_5 |
    VAR_3,
    (VAR_7 << 8) + VAR_8,
    VAR_6->altsetting[0].desc.bInterfaceNumber,
    VAR_9, VAR_10, 100);
 } while ((VAR_13 == -VAR_1 || VAR_13 == -VAR_0) && --VAR_11);

 return VAR_13;
}
