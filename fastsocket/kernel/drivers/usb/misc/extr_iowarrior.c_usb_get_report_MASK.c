
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bInterfaceNumber; } ;
struct usb_host_interface {TYPE_1__ desc; } ;
struct usb_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct usb_device*,int ,int ,int,unsigned char,int ,void*,int,int) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_6,
     struct usb_host_interface *VAR_7, unsigned char VAR_8,
     unsigned char VAR_9, void *VAR_10, int VAR_11)
{
 return FUNC_0(VAR_6, FUNC_1(VAR_6, 0),
          VAR_4,
          VAR_2 | VAR_5 |
          VAR_3, (VAR_8 << 8) + VAR_9,
          VAR_7->desc.bInterfaceNumber, VAR_10, VAR_11,
          VAR_0*VAR_1);
}
