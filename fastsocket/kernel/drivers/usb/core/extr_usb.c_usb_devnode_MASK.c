
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_device {int devnum; TYPE_1__* bus; } ;
struct device {int dummy; } ;
typedef int mode_t ;
struct TYPE_2__ {int busnum; } ;


 int VAR_0 ;
 char* FUNC_0 (int ,char*,int ,int ) ;
 struct usb_device* FUNC_1 (struct device*) ;

__attribute__((used)) static char *FUNC_2(struct device *VAR_1, mode_t *VAR_2)
{
 struct usb_device *VAR_3;

 VAR_3 = FUNC_1(VAR_1);
 return FUNC_0(VAR_0, "bus/usb/%03d/%03d",
    VAR_3->bus->busnum, VAR_3->devnum);
}
