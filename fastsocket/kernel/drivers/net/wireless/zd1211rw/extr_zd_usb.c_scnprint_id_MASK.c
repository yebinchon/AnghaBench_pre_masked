
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int idProduct; int idVendor; } ;
struct usb_device {int speed; TYPE_1__ descriptor; } ;


 int FUNC_0 (struct usb_device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,size_t,char*,int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct usb_device *VAR_0, char *VAR_1, size_t VAR_2)
{
 return FUNC_2(VAR_1, VAR_2, "%04hx:%04hx v%04hx %s",
  FUNC_1(VAR_0->descriptor.idVendor),
  FUNC_1(VAR_0->descriptor.idProduct),
  FUNC_0(VAR_0),
  FUNC_3(VAR_0->speed));
}
