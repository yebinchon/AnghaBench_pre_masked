
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {TYPE_2__* cur_altsetting; } ;
struct TYPE_3__ {int bInterfaceNumber; } ;
struct TYPE_4__ {TYPE_1__ desc; } ;



__attribute__((used)) static inline int FUNC_0(struct usb_interface *VAR_0)
{
 return VAR_0->cur_altsetting->desc.bInterfaceNumber;
}
